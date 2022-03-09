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
  output[`from_AGEX_to_DE_WIDTH-1:0] from_AGEX_to_DE
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


  wire[`BUS_CANARY_WIDTH-1:0] bus_canary_AGEX; 

  //BRANCH LOGIC
  //declare branch history register, pattern table, and branch target buffer
  reg [`BHRENTRYBITS-1:0] bhr_AGEX;
  reg [`PTENTRYBITS-1:0] pt_AGEX [0:`PTENTRIES-1];
  reg [`BTBENTRYBITS-1:0] btb_AGEX [0:`BTBENTRIES-1];
 
  //memory addresses for pattern table and branch target buffer
  wire [`PTINDEXBITS-1:0] memaddr_pt_AGEX;
  wire [`BTBINDEXBITS-1:0] memaddr_btb_AGEX;

  assign {memaddr_pt_AGEX, memaddr_btb_AGEX} = from_FE_to_AGEX;
  //read value for bhr is just the value of bhr because there's no index
  //read value for pattern table and branch target buffer
  wire [`BHRENTRYBITS-1:0] rd_val_bhr_AGEX;
  wire [`PTENTRYBITS-1:0] rd_val_pt_AGEX;
  wire [`BTBENTRYBITS-1:0] rd_val_btb_AGEX;
  
  assign rd_val_bhr_AGEX = bhr_AGEX;
  assign rd_val_pt_AGEX = pt_AGEX[memaddr_pt_AGEX];
  assign rd_val_btb_AGEX = btb_AGEX[memaddr_btb_AGEX];



 // **TODO: Complete the rest of the pipeline 
 
  wire [`DBITS-1:0] regval1_AGEX; 
  wire [`DBITS-1:0] regval2_AGEX; 
  wire [`DBITS-1:0]  sxt_imm_AGEX; 
  wire [`REGNOBITS-1:0] rd_AGEX;   // rd ID 
  wire wr_reg_AGEX; 
  wire [`TYPENOBITS-1:0] type_I_AGEX;

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
    case (op_I_AGEX)
      `BEQ_I : 
        begin br_cond_AGEX = 1; // write correct code to check the branch condition. 
          br_cond_AGEX = (regval1_AGEX == regval2_AGEX) ? 1 : 0;
        end
      `BNE_I:
        br_cond_AGEX = (regval1_AGEX == regval2_AGEX) ? 0 : 1;
      `BLT_I : 
        br_cond_AGEX = (s_regval1_AGEX < s_regval2_AGEX) ? 1 : 0;
      `BGE_I : 
        br_cond_AGEX = (s_regval1_AGEX >= s_regval2_AGEX) ? 1 : 0;
      `BLTU_I: 
        br_cond_AGEX = (regval1_AGEX < regval2_AGEX) ? 1 : 0;
      `BGEU_I :
        br_cond_AGEX = (regval1_AGEX >= regval2_AGEX) ? 1 : 0;
      `JAL_I:
        br_cond_AGEX = 1;
      `JALR_I:
        br_cond_AGEX = 1;
      default : br_cond_AGEX = 1'b0;
    endcase
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
      newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
    `BNE_I:
      newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
    `BLT_I:
      newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
    `BGE_I:
      newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
    `BLTU_I:
      newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
    `BGEU_I :
      newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
    `JAL_I:
      begin
        aluout_AGEX = pcplus_AGEX;
        newpc_AGEX = PC_AGEX + sxt_imm_AGEX;
      end
    `JALR_I:
      begin
        aluout_AGEX = pcplus_AGEX;
        newpc_AGEX = (regval1_AGEX + sxt_imm_AGEX) & 32'hfffffffe;
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
 
  assign from_AGEX_to_FE = {br_cond_AGEX, newpc_AGEX, rd_val_bhr_AGEX, rd_val_pt_AGEX, rd_val_btb_AGEX};
  assign from_AGEX_to_DE = {rd_AGEX, type_I_AGEX, br_cond_AGEX};

  always @ (posedge clk or posedge reset) begin
    if(reset) begin
      AGEX_latch <= {`AGEX_latch_WIDTH{1'b0}};
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
  end




endmodule