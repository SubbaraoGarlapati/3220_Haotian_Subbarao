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

  wire [`PTINDEXBITS-1:0] curr_memaddr_pt_AGEX;
  wire [`BTBINDEXBITS-1:0] curr_memaddr_btb_AGEX;

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
  // wire [`PTINDEXBITS-1:0] memaddr_pt_AGEX;
  
  //wire [`BTBINDEXBITS-1:0] memaddr_btb_DE;
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
    
    
  end
  reg[`DBITS-1:0] actual_branch_address_AGEX;
  
  reg [`DBITS-1:0] aluout_AGEX; 
  reg [`DBITS-1:0] newpc_AGEX;
 // compute ALU operations  (alu out or memory addresses)

   //memory components for store
  reg wr_mem_AGEX;
  reg [`DBITS-1:0] wr_val_AGEX;

  always @ (*) begin
    if (is_BTB_hit_AGEX) begin
      if (guessed_br_direction_AGEX != actual_br_direction || guessed_br_address_AGEX!= actual_branch_address_AGEX) begin
        br_cond_AGEX = 1;
      end else begin
        br_cond_AGEX = 0;
      end
    end
    else begin
      br_cond_AGEX = actual_br_direction;
    end
  end

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
      begin
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
        actual_branch_address_AGEX  = PC_AGEX + sxt_imm_AGEX;
      end
      else
      begin
        newpc_AGEX = pcplus_AGEX;
        actual_branch_address_AGEX  = pcplus_AGEX;
      end
    end
    `BNE_I: begin
      if(actual_br_direction)
      begin
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
        actual_branch_address_AGEX  = PC_AGEX + sxt_imm_AGEX;
      end
      else
      begin
        newpc_AGEX = pcplus_AGEX;
        actual_branch_address_AGEX  = pcplus_AGEX;
      end
    end
    `BLT_I:
      begin
      if(actual_br_direction)
      begin
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
        actual_branch_address_AGEX  = PC_AGEX + sxt_imm_AGEX;
      end
      else
      begin
        newpc_AGEX = pcplus_AGEX;
        actual_branch_address_AGEX  = pcplus_AGEX;
      end
    end
    `BGE_I:
      begin
      if(actual_br_direction)
      begin
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
        actual_branch_address_AGEX  = PC_AGEX + sxt_imm_AGEX;
      end
      else
      begin
        newpc_AGEX = pcplus_AGEX;
        actual_branch_address_AGEX  = pcplus_AGEX;
      end
    end
    `BLTU_I:
      begin

      if(actual_br_direction)
      begin
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
        actual_branch_address_AGEX  = PC_AGEX + sxt_imm_AGEX;
      end
      else
      begin
        newpc_AGEX = pcplus_AGEX;
        actual_branch_address_AGEX  = pcplus_AGEX;
      end
    end
    `BGEU_I :
      begin
      if(actual_br_direction)begin
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
        actual_branch_address_AGEX  = PC_AGEX + sxt_imm_AGEX;
      end
      else begin
        newpc_AGEX = pcplus_AGEX;
        actual_branch_address_AGEX  = pcplus_AGEX;
      end
    end
    `JAL_I:
      begin
        aluout_AGEX = pcplus_AGEX;
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
        actual_branch_address_AGEX  = PC_AGEX + sxt_imm_AGEX;
        
        //newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
      
      end
    `JALR_I:
      begin
        aluout_AGEX = pcplus_AGEX;
        
        newpc_AGEX = (regval1_AGEX + sxt_imm_AGEX) & 32'hfffffffe;
        actual_branch_address_AGEX  = PC_AGEX + sxt_imm_AGEX;
        
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
                                  
                                  curr_memaddr_pt_AGEX,
                                  curr_memaddr_btb_AGEX, 
                                  
                                  
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
      bhr_AGEX <= {`BHRENTRYBITS{1'b0}};
      pt_AGEX[0] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[1] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[2] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[3] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[4] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[5] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[6] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[7] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[8] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[9] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[10] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[11] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[12] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[13] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[14] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[15] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[16] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[17] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[18] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[19] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[20] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[21] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[22] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[23] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[24] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[25] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[26] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[27] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[28] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[29] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[30] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[31] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[32] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[33] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[34] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[35] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[36] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[37] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[38] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[39] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[40] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[41] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[42] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[43] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[44] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[45] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[46] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[47] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[48] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[49] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[50] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[51] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[52] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[53] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[54] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[55] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[56] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[57] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[58] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[59] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[60] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[61] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[62] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[63] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[64] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[65] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[66] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[67] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[68] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[69] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[70] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[71] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[72] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[73] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[74] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[75] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[76] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[77] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[78] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[79] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[80] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[81] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[82] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[83] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[84] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[85] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[86] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[87] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[88] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[89] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[90] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[91] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[92] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[93] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[94] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[95] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[96] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[97] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[98] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[99] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[100] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[101] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[102] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[103] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[104] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[105] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[106] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[107] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[108] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[109] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[110] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[111] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[112] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[113] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[114] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[115] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[116] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[117] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[118] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[119] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[120] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[121] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[122] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[123] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[124] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[125] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[126] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[127] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[128] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[129] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[130] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[131] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[132] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[133] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[134] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[135] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[136] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[137] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[138] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[139] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[140] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[141] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[142] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[143] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[144] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[145] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[146] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[147] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[148] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[149] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[150] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[151] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[152] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[153] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[154] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[155] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[156] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[157] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[158] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[159] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[160] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[161] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[162] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[163] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[164] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[165] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[166] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[167] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[168] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[169] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[170] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[171] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[172] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[173] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[174] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[175] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[176] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[177] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[178] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[179] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[180] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[181] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[182] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[183] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[184] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[185] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[186] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[187] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[188] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[189] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[190] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[191] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[192] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[193] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[194] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[195] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[196] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[197] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[198] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[199] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[200] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[201] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[202] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[203] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[204] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[205] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[206] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[207] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[208] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[209] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[210] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[211] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[212] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[213] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[214] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[215] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[216] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[217] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[218] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[219] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[220] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[221] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[222] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[223] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[224] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[225] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[226] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[227] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[228] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[229] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[230] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[231] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[232] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[233] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[234] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[235] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[236] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[237] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[238] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[239] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[240] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[241] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[242] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[243] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[244] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[245] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[246] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[247] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[248] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[249] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[250] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[251] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[252] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[253] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[254] <= {`PTENTRYBITS{1'b0}};
      pt_AGEX[255] <= {`PTENTRYBITS{1'b0}};
      btb_tag_AGEX[0] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[1] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[2] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[3] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[4] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[5] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[6] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[7] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[8] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[9] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[10] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[11] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[12] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[13] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[14] <= {`TAGBITS{1'b0}};
      btb_tag_AGEX[15] <= {`TAGBITS{1'b0}};
      btb_value_AGEX[0] <= {`DBITS{1'b0}};
      btb_value_AGEX[1] <= {`DBITS{1'b0}};
      btb_value_AGEX[2] <= {`DBITS{1'b0}};
      btb_value_AGEX[3] <= {`DBITS{1'b0}};
      btb_value_AGEX[4] <= {`DBITS{1'b0}};
      btb_value_AGEX[5] <= {`DBITS{1'b0}};
      btb_value_AGEX[6] <= {`DBITS{1'b0}};
      btb_value_AGEX[7] <= {`DBITS{1'b0}};
      btb_value_AGEX[8] <= {`DBITS{1'b0}};
      btb_value_AGEX[9] <= {`DBITS{1'b0}};
      btb_value_AGEX[10] <= {`DBITS{1'b0}};
      btb_value_AGEX[11] <= {`DBITS{1'b0}};
      btb_value_AGEX[12] <= {`DBITS{1'b0}};
      btb_value_AGEX[13] <= {`DBITS{1'b0}};
      btb_value_AGEX[14] <= {`DBITS{1'b0}};
      btb_value_AGEX[15] <= {`DBITS{1'b0}};
    end
    else begin
    
      if (inst_AGEX == 0)
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
        if (guessed_br_direction_AGEX == actual_br_direction && guessed_br_address_AGEX == newpc_AGEX && actual_br_direction == 1) begin
          hit_prediction_AGEX<=hit_prediction_AGEX+1;
        end 
      end

      if (op_I_AGEX == `BEQ_I || op_I_AGEX == `BNE_I || op_I_AGEX == `BLT_I || op_I_AGEX == `BGE_I || op_I_AGEX == `BLTU_I || op_I_AGEX == `BGEU_I || op_I_AGEX == `JAL_I || op_I_AGEX == `JALR_I) begin
        bhr_AGEX <= bhr_AGEX << 1 | {{7{1'b0}},actual_br_direction};
      if (actual_br_direction == 1 && pt_AGEX[curr_memaddr_pt_AGEX] < 3) begin
        pt_AGEX[curr_memaddr_pt_AGEX] = pt_AGEX[curr_memaddr_pt_AGEX] + 1;
      end else if (actual_br_direction == 0 && pt_AGEX[curr_memaddr_pt_AGEX] > 0) begin
          pt_AGEX[curr_memaddr_pt_AGEX] = pt_AGEX[curr_memaddr_pt_AGEX] - 1;
      end
        btb_tag_AGEX[curr_memaddr_btb_AGEX] = PC_AGEX[31:6];
        btb_value_AGEX[curr_memaddr_btb_AGEX] = newpc_AGEX;
      end
    end

  //     reg [`BHRENTRYBITS-1:0] bhr_AGEX;
  // reg [`PTENTRYBITS-1:0] pt_AGEX [0:`PTENTRIES-1];
  // reg [`TAGBITS-1:0] btb_tag_AGEX [0:`BTBENTRIES-1];
  // reg [`DBITS-1:0] btb_value_AGEX [0:`BTBENTRIES-1];
      // might need more code here  
        // end 
    // else if (br_cond_AGEX == 1) begin
    //     AGEX_latch <= {`AGEX_latch_WIDTH{1'b0}};
    //   end

    // else 
  end

//might need to be negedge
//update bhr, pt, btb
// wire pt_value_AGEX = pt_AGEX[memaddr_pt_AGEX];

  // always @ (posedge clk) begin
  //   if (op_I_AGEX == `BEQ_I || op_I_AGEX == `BNE_I || op_I_AGEX == `BLT_I || op_I_AGEX == `BGE_I || op_I_AGEX == `BLTU_I || op_I_AGEX == `BGEU_I || op_I_AGEX == `JAL_I || op_I_AGEX == `JALR_I) begin
  //     bhr_AGEX <= bhr_AGEX << 1 | {{7{1'b0}},actual_br_direction};

  //     if (actual_br_direction == 1 && pt_AGEX[curr_memaddr_pt_AGEX] < 3) begin
  //       pt_AGEX[curr_memaddr_pt_AGEX] = pt_AGEX[curr_memaddr_pt_AGEX] + 1;
  //     end else if (actual_br_direction == 0 && pt_AGEX[curr_memaddr_pt_AGEX] > 0) begin
  //       pt_AGEX[curr_memaddr_pt_AGEX] = pt_AGEX[curr_memaddr_pt_AGEX] - 1;
  //     end
  //     btb_tag_AGEX[curr_memaddr_btb_AGEX] = PC_AGEX[31:6];
  //     btb_value_AGEX[curr_memaddr_btb_AGEX] = newpc_AGEX;
  //   end
  // end




endmodule