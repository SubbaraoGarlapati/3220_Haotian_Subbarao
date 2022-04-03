 `include "VX_define.vh" 


module AGEX_STAGE(
  input clk,
  input reset,
  input [`from_MEM_to_AGEX_WIDTH-1:0] from_MEM_to_AGEX,    
  input [`from_WB_to_AGEX_WIDTH-1:0] from_WB_to_AGEX,   
  input [`DE_latch_WIDTH-1:0] from_DE_latch,
  input [`from_FE_to_AGEX_WIDTH-1:0] from_FE_to_AGEX,
  output[`AGEX_latch_WIDTH-1:0] AGEX_latch_out,
  output[`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,
  output[`from_AGEX_to_DE_WIDTH-1:0] from_AGEX_to_DE,
  output[`bhr_from_AGEX_to_FE_WIDTH-1:0] bhr_from_AGEX_to_FE,
  output[`from_AGEX_to_WB_WIDTH-1:0] from_AGEX_to_WB
);

  reg [`AGEX_latch_WIDTH-1:0] AGEX_latch; 
  // wire to send the AGEX latch contents to other pipeline stages 
  assign AGEX_latch_out = AGEX_latch;
  
  wire[`AGEX_latch_WIDTH-1:0] AGEX_latch_contents; 
  
   
  wire [`INSTBITS-1:0]inst_AGEX; 
  wire [`DBITS-1:0]PC_AGEX;
  wire [`DBITS-1:0] inst_count_AGEX; 
  wire [`DBITS-1:0] pcplus_AGEX; 
  wire [`IOPBITS-1:0] op_I_AGEX;
  reg br_cond_AGEX; // 1 means a branch condition is satisified. 0 means a branch condition is not satisifed 
  reg actual_br_direction;


  wire[`BUS_CANARY_WIDTH-1:0] bus_canary_AGEX; 

  //BRANCH LOGIC
  //declare branch history register, pattern table, and branch target buffer
  reg [`BHRENTRYBITS-1:0] bhr_AGEX;
  reg [`PTENTRYBITS-1:0] pt_AGEX [0:`PTENTRIES-1];
  reg [`TAGBITS-1:0] btb_tag_AGEX [0:`BTBENTRIES-1];
  reg [`DBITS-1:0] btb_value_AGEX [0:`BTBENTRIES-1];

 
  //memory addresses for pattern table and branch target buffer
  wire [`PTINDEXBITS-1:0] memaddr_pt_AGEX;
  wire [`BTBINDEXBITS-1:0] memaddr_btb_AGEX;

  assign {memaddr_pt_AGEX, memaddr_btb_AGEX} = from_FE_to_AGEX;
  //read value for bhr is just the value of bhr because there's no index
  //read value for pattern table and branch target buffer
  wire [`BHRENTRYBITS-1:0] rd_val_bhr_AGEX;
  wire [`PTENTRYBITS-1:0] rd_val_pt_AGEX;
  wire [`TAGBITS-1:0] rd_val_btb_tag_AGEX;
  wire [`DBITS-1:0] rd_val_btb_value_AGEX;

  

  
  assign rd_val_bhr_AGEX = bhr_AGEX;
  
  assign rd_val_pt_AGEX = pt_AGEX[memaddr_pt_AGEX];
  assign rd_val_btb_tag_AGEX = btb_tag_AGEX[memaddr_btb_AGEX];
  assign rd_val_btb_value_AGEX = btb_value_AGEX[memaddr_btb_AGEX];

  assign bhr_from_AGEX_to_FE = rd_val_bhr_AGEX;

  //Passed in variables from FE->DE->AGEX
  wire is_BTB_hit_AGEX;
  wire guessed_br_direction_AGEX;
  wire [`DBITS-1:0] guessed_br_address_AGEX;
  wire [`PTINDEXBITS-1:0] memaddr_pt_AGEX;
  wire [`BTBINDEXBITS-1:0] memaddr_btb_DE;
 // **TODO: Complete the rest of the pipeline 
 
  wire [`DBITS-1:0] regval1_AGEX; 
  wire [`DBITS-1:0] regval2_AGEX; 
  wire [`DBITS-1:0]  sxt_imm_AGEX; 
  wire [`REGNOBITS-1:0] rd_AGEX;   // rd ID 
  wire wr_reg_AGEX; 
  wire [`TYPENOBITS-1:0] type_I_AGEX;

  reg [`DBITS-1:0] hit_prediction_AGEX;
  reg [`DBITS-1:0] branch_count_AGEX;

  //wire [`from_AGEX_to_WB_WIDTH-1:0] from_AGEX_to_WB; 

  wire signed [`DBITS-1:0] s_regval1_AGEX;
  wire signed [`DBITS-1:0] s_regval2_AGEX;
  wire signed [`DBITS-1:0] s_sxt_imm_AGEX;
  assign s_regval1_AGEX = regval1_AGEX;
  assign s_regval2_AGEX = regval2_AGEX;
  assign s_sxt_imm_AGEX = sxt_imm_AGEX;
  // signed comparison
  // wire s_less;
  // assign s_less = (s_regval1_AGEX < s_regval2_AGEX);
  // //unsigned comparison
  // wire less;
  // assign less = (regval1_AGEX < regval2_AGEX);

  always @ (*) begin
    //determine actual branch direction
    begin
      case (op_I_AGEX)
        `BEQ_I : 
          begin actual_br_direction = 1; // write correct code to check the branch condition. 
            actual_br_direction = (regval1_AGEX == regval2_AGEX) ? 1 : 0;
          end
        `BNE_I:
          actual_br_direction = (regval1_AGEX == regval2_AGEX) ? 0 : 1;
        `BLT_I : 
          actual_br_direction = (s_regval1_AGEX < s_regval2_AGEX) ? 1 : 0;
        `BGE_I : 
          actual_br_direction = (s_regval1_AGEX >= s_regval2_AGEX) ? 1 : 0;
        `BLTU_I: 
          actual_br_direction = (regval1_AGEX < regval2_AGEX) ? 1 : 0;
        `BGEU_I :
          actual_br_direction = (regval1_AGEX >= regval2_AGEX) ? 1 : 0;
        `JAL_I:
          actual_br_direction = 1;
        `JALR_I:
          actual_br_direction = 1;
        default : actual_br_direction = 1'b0;
      endcase
    end
  // logic if BTB is hit or not
    if (is_BTB_hit_AGEX) begin
      if (guessed_br_direction_AGEX != actual_br_direction) begin
        br_cond_AGEX = 1;
      end else begin
        br_cond_AGEX = 0;
      end;
    end
    else begin
      br_cond_AGEX = actual_br_direction;
    end
    
  end

  reg [`DBITS-1:0] aluout_AGEX; 
  reg [`DBITS-1:0] newpc_AGEX;
 // compute ALU operations  (alu out or memory addresses)

   //memory components for store
  reg wr_mem_AGEX;
  reg [`DBITS-1:0] wr_val_AGEX;

  always @ (*) begin
    wr_mem_AGEX = (op_I_AGEX == `SW_I) ? 1 : 0;
    wr_val_AGEX = regval2_AGEX;
  end
 
  always @ (*) begin

  case (op_I_AGEX)
    `LW_I:
      aluout_AGEX = regval1_AGEX + sxt_imm_AGEX;
    `SW_I:
      begin
        aluout_AGEX = regval1_AGEX + sxt_imm_AGEX;
      end
    `SRA_I:
      aluout_AGEX = (s_regval1_AGEX) >>> (regval2_AGEX[4:0]);
    `SRAI_I:
      aluout_AGEX = (s_regval1_AGEX) >>> sxt_imm_AGEX;
    `SRL_I:
      aluout_AGEX = (regval1_AGEX) >> (regval2_AGEX[4:0]);
    `SRLI_I:
      aluout_AGEX = (regval1_AGEX) >> sxt_imm_AGEX;
    `SLL_I:
      aluout_AGEX = (regval1_AGEX) << (regval2_AGEX[4:0]);
    `SLLI_I:
      aluout_AGEX = (regval1_AGEX) << sxt_imm_AGEX;
    `SLT_I:
      aluout_AGEX = (s_regval1_AGEX < s_regval2_AGEX) ? 1 : 0;
    `SLTU_I:
      aluout_AGEX = (regval1_AGEX < regval2_AGEX) ? 1 : 0;
    `SLTI_I:
      aluout_AGEX = (s_regval1_AGEX < s_sxt_imm_AGEX) ? 1 : 0;
    `SLTIU_I:
      aluout_AGEX = (regval1_AGEX < sxt_imm_AGEX) ? 1 : 0;
    `XOR_I:
      aluout_AGEX = regval1_AGEX ^ regval2_AGEX;
    `AND_I:
      aluout_AGEX = regval1_AGEX & regval2_AGEX;
    `OR_I:  
      aluout_AGEX = regval1_AGEX | regval2_AGEX;
    `SUB_I:
      aluout_AGEX = regval1_AGEX - regval2_AGEX; 
    `ADD_I: 
      aluout_AGEX = regval1_AGEX + regval2_AGEX; 
    `ADDI_I:
      aluout_AGEX = regval1_AGEX + sxt_imm_AGEX; 
    `MUL_I:
      aluout_AGEX= regval1_AGEX * regval2_AGEX;
    `ANDI_I:
      aluout_AGEX = regval1_AGEX & sxt_imm_AGEX;
    `ORI_I:
      aluout_AGEX = regval1_AGEX | sxt_imm_AGEX;
    `XORI_I:
      aluout_AGEX = regval1_AGEX ^ sxt_imm_AGEX;
    `AUIPC_I:
      aluout_AGEX = PC_AGEX + sxt_imm_AGEX;
    `BEQ_I:
      begin
      if(actual_br_direction)
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        newpc_AGEX = pcplus_AGEX;
    end
    `BNE_I: begin
      if(actual_br_direction)
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        newpc_AGEX = pcplus_AGEX;
    end
    `BLT_I:
      begin
      if(actual_br_direction)
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        newpc_AGEX = pcplus_AGEX;
    end
    `BGE_I:
      begin
      if(actual_br_direction)
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        newpc_AGEX = pcplus_AGEX;
    end
    `BLTU_I:
      begin
      if(actual_br_direction)
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        newpc_AGEX = pcplus_AGEX;
    end
    `BGEU_I :
      begin
      if(actual_br_direction)
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        newpc_AGEX = pcplus_AGEX;
    end
    `JAL_I:
      begin
        aluout_AGEX = pcplus_AGEX;
        
       if(actual_br_direction)
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        newpc_AGEX = pcplus_AGEX;
      end
    `JALR_I:
      begin
        aluout_AGEX = pcplus_AGEX;
        if(actual_br_direction)
          newpc_AGEX = (regval1_AGEX + sxt_imm_AGEX) & 32'hfffffffe;
        else
          newpc_AGEX = pcplus_AGEX;
        //newpc_AGEX = (regval1_AGEX + sxt_imm_AGEX) & 32'hfffffffe;
      end
    `LUI_I:
      aluout_AGEX = sxt_imm_AGEX;
	 endcase 
   
  end 

// branch target needs to be computed here 
// computed branch target needs to send to other pipeline stages (pctarget_AGEX)

always @(*)begin  
/*
  if (op_I_AGEX == `JAL_I) 
  ... 
  */
end 



    assign  {
                                  inst_AGEX,
                                  PC_AGEX,
                                  pcplus_AGEX,
                                  op_I_AGEX,
                                  inst_count_AGEX, 
                                  regval1_AGEX, 
                                  regval2_AGEX, 
                                  sxt_imm_AGEX, 
                                  rd_AGEX, 
                                  wr_reg_AGEX, 
                                  type_I_AGEX,
                                  is_BTB_hit_AGEX,
                                  guessed_br_direction_AGEX,
                                  guessed_br_address_AGEX,
                                  memaddr_pt_AGEX,
                                  memaddr_btb_AGEX, 
                                          // more signals might need
                                  bus_canary_AGEX
                                  } = from_DE_latch; 
    
 
  assign AGEX_latch_contents = {
                                inst_AGEX,
                                PC_AGEX,
                                op_I_AGEX,
                                inst_count_AGEX, 
                                aluout_AGEX, 
                                rd_AGEX, 
                                wr_reg_AGEX, 
                                type_I_AGEX,
                                wr_mem_AGEX,
                                wr_val_AGEX,
                                       // more signals might need
                                bus_canary_AGEX     
                                 }; 
 
  assign from_AGEX_to_FE = {br_cond_AGEX, newpc_AGEX, rd_val_pt_AGEX, rd_val_btb_tag_AGEX, rd_val_btb_value_AGEX};
  assign from_AGEX_to_DE = {rd_AGEX, type_I_AGEX, br_cond_AGEX};
  assign from_AGEX_to_WB = {hit_prediction_AGEX, branch_count_AGEX};

  always @ (posedge clk or posedge reset) begin
    if(reset) begin
      AGEX_latch <= {`AGEX_latch_WIDTH{1'b0}};
      hit_prediction_AGEX <= 0;
      branch_count_AGEX<=0;
      // might need more code here  
        end 
    // else if (br_cond_AGEX == 1) begin
    //     AGEX_latch <= {`AGEX_latch_WIDTH{1'b0}};
    //   end

    else if (inst_AGEX == 0)
      AGEX_latch <= {`AGEX_latch_WIDTH{1'b0}};
    else 
        begin
      // need to complete 
            AGEX_latch <= AGEX_latch_contents ;
        end 
    
    if(op_I_AGEX == `BEQ_I || op_I_AGEX == `BNE_I || op_I_AGEX == `BLT_I || op_I_AGEX == `BGE_I || op_I_AGEX == `BLTU_I || op_I_AGEX == `BGEU_I || op_I_AGEX == `JAL_I || op_I_AGEX == `JALR_I) begin
      branch_count_AGEX <= branch_count_AGEX+1;
    end
    
    if (is_BTB_hit_AGEX) begin
      if (guessed_br_direction_AGEX == actual_br_direction) begin
        hit_prediction_AGEX<=hit_prediction_AGEX+1;
      end 
    end
  end

//might need to be negedge
//update bhr, pt, btb
// wire pt_value_AGEX = pt_AGEX[memaddr_pt_AGEX];

  always @ (posedge clk) begin
    if (op_I_AGEX == `BEQ_I || op_I_AGEX == `BNE_I || op_I_AGEX == `BLT_I || op_I_AGEX == `BGE_I || op_I_AGEX == `BLTU_I || op_I_AGEX == `BGEU_I || op_I_AGEX == `JAL_I || op_I_AGEX == `JALR_I) begin
      bhr_AGEX = bhr_AGEX << 1 | {{7{1'b0}},actual_br_direction};

      if (actual_br_direction == 1 && pt_AGEX[memaddr_pt_AGEX] < 3) begin
        pt_AGEX[memaddr_pt_AGEX] = rd_val_pt_AGEX - 1;
      end else if (actual_br_direction == 0 && pt_AGEX[memaddr_pt_AGEX] > 0) begin
        pt_AGEX[memaddr_pt_AGEX] = rd_val_pt_AGEX + 1;
      end
      btb_tag_AGEX[memaddr_btb_AGEX] = PC_AGEX[31:6];
      btb_value_AGEX[memaddr_btb_AGEX] = newpc_AGEX;
    end
  end




endmodule