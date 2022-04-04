// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vproject2_frame__Syms.h"


VL_ATTR_COLD void Vproject2_frame___024root__trace_init_sub__TOP__0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
<<<<<<< Updated upstream
    tracep->declBit(c+172,"clk", false,-1);
    tracep->declBit(c+173,"reset", false,-1);
=======
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
>>>>>>> Stashed changes
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
<<<<<<< Updated upstream
    tracep->declBit(c+172,"clk", false,-1);
    tracep->declBit(c+173,"reset", false,-1);
    tracep->declBus(c+1,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+27,"FE_latch_out", false,-1, 131,0);
    tracep->declArray(c+32,"DE_latch_out", false,-1, 243,0);
    tracep->declArray(c+40,"AGEX_latch_out", false,-1, 147,0);
    tracep->declArray(c+45,"MEM_latch_out", false,-1, 147,0);
    tracep->declBus(c+50,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+51,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+239,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+240,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+53,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declBus(c+54,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declQuad(c+55,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+241,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+242,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+243,"from_WB_to_MEM", false,-1, 0,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+172,"clk", false,-1);
    tracep->declBit(c+173,"reset", false,-1);
    tracep->declBus(c+241,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+242,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+32,"from_DE_latch", false,-1, 243,0);
    tracep->declArray(c+40,"AGEX_latch_out", false,-1, 147,0);
    tracep->declQuad(c+51,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+53,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declArray(c+40,"AGEX_latch", false,-1, 147,0);
    tracep->declArray(c+57,"AGEX_latch_contents", false,-1, 147,0);
    tracep->declBus(c+62,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+63,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+64,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+65,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+66,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+67,"br_cond_AGEX", false,-1);
    tracep->declBus(c+68,"bus_canary_AGEX", false,-1, 3,0);
    tracep->declBus(c+69,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+70,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+71,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+72,"rd_AGEX", false,-1, 4,0);
    tracep->declBit(c+73,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+74,"type_I_AGEX", false,-1, 3,0);
    tracep->declBus(c+69,"s_regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+70,"s_regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+75,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+76,"newpc_AGEX", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+172,"clk", false,-1);
    tracep->declBit(c+173,"reset", false,-1);
    tracep->declArray(c+27,"from_FE_latch", false,-1, 131,0);
    tracep->declBus(c+53,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declBus(c+54,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declQuad(c+55,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+50,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+32,"DE_latch_out", false,-1, 243,0);
    tracep->declArray(c+32,"DE_latch", false,-1, 243,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+140+i*1,"regs", true,(i+0), 31,0);
=======
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBus(c+1,"cycle_count", false,-1, 31,0);
    tracep->declQuad(c+64,"from_FE_to_AGEX", false,-1, 45,0);
    tracep->declBus(c+31,"bhr_from_AGEX_to_FE", false,-1, 7,0);
    tracep->declArray(c+94,"FE_latch_out", false,-1, 131,0);
    tracep->declArray(c+99,"DE_latch_out", false,-1, 243,0);
    tracep->declArray(c+107,"AGEX_latch_out", false,-1, 180,0);
    tracep->declArray(c+113,"MEM_latch_out", false,-1, 147,0);
    tracep->declBus(c+66,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+67,"from_AGEX_to_FE", false,-1, 92,0);
    tracep->declBus(c+309,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+310,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+70,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declBus(c+118,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declQuad(c+119,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+311,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+312,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+313,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declQuad(c+121,"from_AGEX_to_WB", false,-1, 63,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBus(c+311,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+312,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+99,"from_DE_latch", false,-1, 243,0);
    tracep->declQuad(c+64,"from_FE_to_AGEX", false,-1, 45,0);
    tracep->declArray(c+107,"AGEX_latch_out", false,-1, 180,0);
    tracep->declArray(c+67,"from_AGEX_to_FE", false,-1, 92,0);
    tracep->declBus(c+70,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declBus(c+31,"bhr_from_AGEX_to_FE", false,-1, 7,0);
    tracep->declQuad(c+121,"from_AGEX_to_WB", false,-1, 63,0);
    tracep->declArray(c+107,"AGEX_latch", false,-1, 180,0);
    tracep->declArray(c+123,"AGEX_latch_contents", false,-1, 180,0);
    tracep->declBus(c+129,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+130,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+131,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+132,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+133,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+71,"br_cond_AGEX", false,-1);
    tracep->declBit(c+72,"actual_br_direction", false,-1);
    tracep->declBus(c+134,"bus_canary_AGEX", false,-1, 3,0);
    tracep->declBus(c+31,"bhr_AGEX", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+32+i*1,"btb_tag_AGEX", true,(i+0), 25,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+48+i*1,"btb_value_AGEX", true,(i+0), 31,0);
    }
    tracep->declBus(c+73,"memaddr_pt_AGEX", false,-1, 7,0);
    tracep->declBus(c+74,"memaddr_btb_AGEX", false,-1, 3,0);
    tracep->declBus(c+31,"rd_val_bhr_AGEX", false,-1, 7,0);
    tracep->declBus(c+75,"rd_val_pt_AGEX", false,-1, 1,0);
    tracep->declBus(c+243,"rd_val_btb_tag_AGEX", false,-1, 25,0);
    tracep->declBus(c+244,"rd_val_btb_value_AGEX", false,-1, 31,0);
    tracep->declBit(c+76,"is_BTB_hit_AGEX", false,-1);
    tracep->declBit(c+77,"guessed_br_direction_AGEX", false,-1);
    tracep->declBus(c+78,"guessed_br_address_AGEX", false,-1, 31,0);
    tracep->declBus(c+314,"memaddr_btb_DE", false,-1, 3,0);
    tracep->declBus(c+135,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+136,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+137,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+138,"rd_AGEX", false,-1, 4,0);
    tracep->declBit(c+139,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+140,"type_I_AGEX", false,-1, 3,0);
    tracep->declBus(c+2,"hit_prediction_AGEX", false,-1, 31,0);
    tracep->declBus(c+3,"branch_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+135,"s_regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+136,"s_regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+137,"s_sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+141,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+79,"newpc_AGEX", false,-1, 31,0);
    tracep->declBit(c+142,"wr_mem_AGEX", false,-1);
    tracep->declBus(c+136,"wr_val_AGEX", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declArray(c+94,"from_FE_latch", false,-1, 131,0);
    tracep->declBus(c+70,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declBus(c+118,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declQuad(c+119,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+66,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+99,"DE_latch_out", false,-1, 243,0);
    tracep->declArray(c+99,"DE_latch", false,-1, 243,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+209+i*1,"regs", true,(i+0), 31,0);
>>>>>>> Stashed changes
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+11+i*1,"csr_regs", true,(i+0), 31,0);
    }
<<<<<<< Updated upstream
    tracep->declBus(c+77,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+78,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+79,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+80,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+130,"DE_latch_contents", false,-1, 243,0);
    tracep->declBus(c+81,"bus_canary_DE", false,-1, 3,0);
    tracep->declBus(c+82,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+83,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+84,"op_DE", false,-1, 6,0);
    tracep->declBus(c+85,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+86,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+87,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+88,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBit(c+89,"wr_reg_WB", false,-1);
    tracep->declBus(c+90,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+91,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+92,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+138,"regval1_DE", false,-1, 31,0);
    tracep->declBus(c+139,"regval2_DE", false,-1, 31,0);
    tracep->declBit(c+93,"wr_reg_DE", false,-1);
    tracep->declBit(c+94,"rs1_read_DE", false,-1);
    tracep->declBit(c+95,"rs2_read_DE", false,-1);
    tracep->declBus(c+96,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+97,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+98,"wcsrno_WB", false,-1, 3,0);
    tracep->declBit(c+99,"wr_csr_WB", false,-1);
    tracep->declBus(c+100,"rd_AGEX", false,-1, 4,0);
    tracep->declBus(c+101,"rd_MEM", false,-1, 4,0);
    tracep->declBus(c+102,"rd_WB", false,-1, 4,0);
    tracep->declBus(c+103,"type_I_AGEX", false,-1, 3,0);
    tracep->declBus(c+104,"type_I_MEM", false,-1, 3,0);
    tracep->declBus(c+105,"type_I_WB", false,-1, 3,0);
    tracep->declBit(c+106,"br_cond_AGEX_in_DE", false,-1);
    tracep->declBit(c+50,"pipeline_stall_DE", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+107,"is_type_I_AGEX_Valid", false,-1);
    tracep->declBit(c+108,"is_type_I_MEM_Valid", false,-1);
    tracep->declBit(c+109,"is_type_I_WB_Valid", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+172,"clk", false,-1);
    tracep->declBit(c+173,"reset", false,-1);
    tracep->declBus(c+50,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+51,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+239,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+240,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+27,"FE_latch_out", false,-1, 131,0);
    tracep->declArray(c+27,"FE_latch", false,-1, 131,0);
    tracep->declBus(c+2,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+3,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+4,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+50,"stall_pipe_FE", false,-1);
    tracep->declArray(c+5,"FE_latch_contents", false,-1, 131,0);
    tracep->declBus(c+10,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+244,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBit(c+110,"br_cond_AGEX_in_FE", false,-1);
    tracep->declBus(c+111,"newpc_AGEX", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+172,"clk", false,-1);
    tracep->declBit(c+173,"reset", false,-1);
    tracep->declBus(c+243,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+40,"from_AGEX_latch", false,-1, 147,0);
    tracep->declArray(c+45,"MEM_latch_out", false,-1, 147,0);
    tracep->declBus(c+239,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+54,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declBus(c+241,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+45,"MEM_latch", false,-1, 147,0);
    tracep->declArray(c+40,"MEM_latch_contents", false,-1, 147,0);
    tracep->declBus(c+112,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+113,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+114,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+115,"PC_MEM", false,-1, 31,0);
    tracep->declBus(c+116,"bus_canary_MEM", false,-1, 3,0);
    tracep->declBus(c+245,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+174,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+246,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+247,"wr_mem_MEM", false,-1);
    tracep->declBus(c+117,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+118,"rd_MEM", false,-1, 4,0);
    tracep->declBit(c+119,"wr_reg_MEM", false,-1);
    tracep->declBus(c+120,"type_I_MEM", false,-1, 3,0);
=======
    tracep->declBus(c+143,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+144,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+145,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+146,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+199,"DE_latch_contents", false,-1, 243,0);
    tracep->declBus(c+147,"bus_canary_DE", false,-1, 3,0);
    tracep->declBus(c+148,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+149,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+150,"op_DE", false,-1, 6,0);
    tracep->declBus(c+151,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+152,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+153,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+154,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBit(c+155,"wr_reg_WB", false,-1);
    tracep->declBus(c+156,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+157,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+158,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+207,"regval1_DE", false,-1, 31,0);
    tracep->declBus(c+208,"regval2_DE", false,-1, 31,0);
    tracep->declBit(c+159,"wr_reg_DE", false,-1);
    tracep->declBit(c+160,"rs1_read_DE", false,-1);
    tracep->declBit(c+161,"rs2_read_DE", false,-1);
    tracep->declBus(c+162,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+163,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+164,"wcsrno_WB", false,-1, 3,0);
    tracep->declBit(c+165,"wr_csr_WB", false,-1);
    tracep->declBus(c+80,"rd_AGEX", false,-1, 4,0);
    tracep->declBus(c+166,"rd_MEM", false,-1, 4,0);
    tracep->declBus(c+167,"rd_WB", false,-1, 4,0);
    tracep->declBus(c+81,"type_I_AGEX", false,-1, 3,0);
    tracep->declBus(c+168,"type_I_MEM", false,-1, 3,0);
    tracep->declBus(c+169,"type_I_WB", false,-1, 3,0);
    tracep->declBit(c+82,"br_cond_AGEX_in_DE", false,-1);
    tracep->declBit(c+83,"is_type_I_AGEX_Valid", false,-1);
    tracep->declBit(c+84,"is_type_I_MEM_Valid", false,-1);
    tracep->declBit(c+85,"is_type_I_WB_Valid", false,-1);
    tracep->declBit(c+66,"pipeline_stall_DE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBus(c+66,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+67,"from_AGEX_to_FE", false,-1, 92,0);
    tracep->declBus(c+309,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+310,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+31,"bhr_from_AGEX_to_FE", false,-1, 7,0);
    tracep->declArray(c+94,"FE_latch_out", false,-1, 131,0);
    tracep->declQuad(c+64,"from_FE_to_AGEX", false,-1, 45,0);
    tracep->declArray(c+94,"FE_latch", false,-1, 131,0);
    tracep->declBus(c+4,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+5,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+6,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+66,"stall_pipe_FE", false,-1);
    tracep->declArray(c+7,"FE_latch_contents", false,-1, 131,0);
    tracep->declBus(c+12,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+315,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBit(c+86,"br_cond_AGEX_in_FE", false,-1);
    tracep->declBus(c+87,"newpc_AGEX", false,-1, 31,0);
    tracep->declBus(c+13,"memaddr_pt_FE", false,-1, 7,0);
    tracep->declBus(c+14,"memaddr_btb_FE", false,-1, 3,0);
    tracep->declBus(c+31,"rd_val_bhr_FE", false,-1, 7,0);
    tracep->declBus(c+88,"rd_val_pt_FE", false,-1, 1,0);
    tracep->declBus(c+89,"rd_val_btb_tag_FE", false,-1, 25,0);
    tracep->declBus(c+90,"rd_val_btb_value_FE", false,-1, 31,0);
    tracep->declBit(c+91,"is_BTB_hit_FE", false,-1);
    tracep->declBit(c+92,"guessed_br_direction_FE", false,-1);
    tracep->declBus(c+93,"guessed_br_address_FE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBus(c+313,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+107,"from_AGEX_latch", false,-1, 180,0);
    tracep->declArray(c+113,"MEM_latch_out", false,-1, 147,0);
    tracep->declBus(c+309,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+118,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declBus(c+311,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+113,"MEM_latch", false,-1, 147,0);
    tracep->declArray(c+192,"MEM_latch_contents", false,-1, 147,0);
    tracep->declBus(c+170,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+171,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+172,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+173,"PC_MEM", false,-1, 31,0);
    tracep->declBus(c+174,"bus_canary_MEM", false,-1, 3,0);
    tracep->declBus(c+175,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+197,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+176,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+177,"wr_mem_MEM", false,-1);
    tracep->declBus(c+175,"temp_aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+198,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+178,"rd_MEM", false,-1, 4,0);
    tracep->declBit(c+179,"wr_reg_MEM", false,-1);
    tracep->declBus(c+180,"type_I_MEM", false,-1, 3,0);
>>>>>>> Stashed changes
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__my_WB_stage__0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
<<<<<<< Updated upstream
    tracep->declBit(c+172,"clk", false,-1);
    tracep->declBit(c+173,"reset", false,-1);
    tracep->declArray(c+45,"from_MEM_latch", false,-1, 147,0);
    tracep->declBus(c+240,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+55,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+242,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+243,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBus(c+121,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+122,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+123,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+124,"inst_count_WB", false,-1, 31,0);
    tracep->declBus(c+125,"bus_canary_WB", false,-1, 3,0);
    tracep->declBus(c+126,"type_I_WB", false,-1, 3,0);
    tracep->declBit(c+127,"wr_reg_WB", false,-1);
    tracep->declBus(c+128,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+128,"rd_WB", false,-1, 4,0);
    tracep->declBus(c+129,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+248,"wcsrno_WB", false,-1, 3,0);
    tracep->declBit(c+249,"wr_csr_WB", false,-1);
    tracep->declBus(c+129,"aluout_WB", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+175+i*1,"last_WB_value", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+207+i*1,"WB_counters", true,(i+0), 31,0);
=======
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declArray(c+113,"from_MEM_latch", false,-1, 147,0);
    tracep->declQuad(c+121,"from_AGEX_to_WB", false,-1, 63,0);
    tracep->declBus(c+310,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+119,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+312,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+313,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBus(c+181,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+182,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+183,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+184,"inst_count_WB", false,-1, 31,0);
    tracep->declBus(c+185,"bus_canary_WB", false,-1, 3,0);
    tracep->declBus(c+186,"type_I_WB", false,-1, 3,0);
    tracep->declBus(c+187,"hit_prediction_WB", false,-1, 31,0);
    tracep->declBus(c+188,"branch_count_WB", false,-1, 31,0);
    tracep->declBit(c+189,"wr_reg_WB", false,-1);
    tracep->declBus(c+190,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+190,"rd_WB", false,-1, 4,0);
    tracep->declBus(c+191,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+316,"wcsrno_WB", false,-1, 3,0);
    tracep->declBit(c+317,"wr_csr_WB", false,-1);
    tracep->declBus(c+191,"aluout_WB", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+245+i*1,"last_WB_value", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+277+i*1,"WB_counters", true,(i+0), 31,0);
>>>>>>> Stashed changes
    }
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_init_top(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_init_top\n"); );
    // Body
    Vproject2_frame___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("project2_frame ");
    Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__0(vlSelf, tracep);
    tracep->pushNamePrefix("my_WB_stage ");
    Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__my_WB_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vproject2_frame___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vproject2_frame___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vproject2_frame___024root__trace_register(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vproject2_frame___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vproject2_frame___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vproject2_frame___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_full_sub_0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vproject2_frame___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_full_top_0\n"); );
    // Init
    Vproject2_frame___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproject2_frame___024root*>(voidSelf);
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vproject2_frame___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_full_sub_0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h83c4c2bf__0;
<<<<<<< Updated upstream
    VlWide<5>/*159:0*/ __Vtemp_hcce6bf99__0;
    VlWide<8>/*255:0*/ __Vtemp_hff3a9c92__0;
=======
    VlWide<4>/*127:0*/ __Vtemp_h2b13a149__0;
    VlWide<6>/*191:0*/ __Vtemp_h35bfdd85__0;
    VlWide<3>/*95:0*/ __Vtemp_hfabb119d__0;
    VlWide<5>/*159:0*/ __Vtemp_h02dc9f9b__0;
    VlWide<8>/*255:0*/ __Vtemp_h5dd3a101__0;
>>>>>>> Stashed changes
    // Body
    tracep->fullIData(oldp+1,(vlSymsp->TOP__project2_frame.__PVT__cycle_count),32);
    tracep->fullIData(oldp+2,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    tracep->fullIData(oldp+3,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                              [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))]),32);
<<<<<<< Updated upstream
    tracep->fullIData(oldp+4,(((IData)(4U) + vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
=======
    tracep->fullIData(oldp+6,(((IData)(4U) + vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
>>>>>>> Stashed changes
    __Vtemp_h83c4c2bf__0[0U] = (0xfU | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_FE 
                                        << 4U));
    __Vtemp_h83c4c2bf__0[1U] = ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 >> 0x1cU) | (((IData)(4U) 
                                               + vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                              << 4U));
    __Vtemp_h83c4c2bf__0[2U] = ((((IData)(4U) + vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0x1cU) | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                                                                        [
                                                                        (0x3fffU 
                                                                         & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                            >> 2U))])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                              << 4U));
    __Vtemp_h83c4c2bf__0[3U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                               >> 2U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                                                                         [
                                                                         (0x3fffU 
                                                                          & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                             >> 2U))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h83c4c2bf__0[4U] = ((IData)(((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                               >> 2U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                         >> 0x20U)) 
                                >> 0x1cU);
<<<<<<< Updated upstream
    tracep->fullWData(oldp+5,(__Vtemp_h83c4c2bf__0),132);
    tracep->fullIData(oldp+10,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_FE),32);
    tracep->fullIData(oldp+11,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
    tracep->fullIData(oldp+12,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
    tracep->fullIData(oldp+13,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
    tracep->fullIData(oldp+14,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
    tracep->fullIData(oldp+15,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
    tracep->fullIData(oldp+16,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
    tracep->fullIData(oldp+17,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
    tracep->fullIData(oldp+18,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
    tracep->fullIData(oldp+19,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
    tracep->fullIData(oldp+20,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
    tracep->fullIData(oldp+21,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
    tracep->fullIData(oldp+22,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
    tracep->fullIData(oldp+23,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
    tracep->fullIData(oldp+24,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
    tracep->fullIData(oldp+25,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
    tracep->fullIData(oldp+26,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
    tracep->fullWData(oldp+27,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch),132);
    tracep->fullWData(oldp+32,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch),244);
    tracep->fullWData(oldp+40,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch),148);
    tracep->fullWData(oldp+45,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch),148);
    tracep->fullBit(oldp+50,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__pipeline_stall_DE));
    tracep->fullQData(oldp+51,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE),33);
    tracep->fullSData(oldp+53,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE),10);
    tracep->fullSData(oldp+54,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE),9);
    tracep->fullQData(oldp+55,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE),52);
    __Vtemp_hcce6bf99__0[0U] = (((IData)((((QData)((IData)(
=======
    tracep->fullWData(oldp+7,(__Vtemp_h83c4c2bf__0),132);
    tracep->fullIData(oldp+12,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_FE),32);
    tracep->fullCData(oldp+13,((0xffU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                         >> 2U))),8);
    tracep->fullCData(oldp+14,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))),4);
    tracep->fullIData(oldp+15,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
    tracep->fullIData(oldp+16,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
    tracep->fullIData(oldp+17,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
    tracep->fullIData(oldp+18,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
    tracep->fullIData(oldp+19,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
    tracep->fullIData(oldp+20,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
    tracep->fullIData(oldp+21,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
    tracep->fullIData(oldp+22,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
    tracep->fullIData(oldp+23,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
    tracep->fullIData(oldp+24,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
    tracep->fullIData(oldp+25,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
    tracep->fullIData(oldp+26,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
    tracep->fullIData(oldp+27,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
    tracep->fullIData(oldp+28,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
    tracep->fullIData(oldp+29,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
    tracep->fullIData(oldp+30,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
    tracep->fullCData(oldp+31,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__bhr_AGEX),8);
    tracep->fullIData(oldp+32,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[0]),26);
    tracep->fullIData(oldp+33,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[1]),26);
    tracep->fullIData(oldp+34,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[2]),26);
    tracep->fullIData(oldp+35,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[3]),26);
    tracep->fullIData(oldp+36,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[4]),26);
    tracep->fullIData(oldp+37,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[5]),26);
    tracep->fullIData(oldp+38,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[6]),26);
    tracep->fullIData(oldp+39,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[7]),26);
    tracep->fullIData(oldp+40,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[8]),26);
    tracep->fullIData(oldp+41,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[9]),26);
    tracep->fullIData(oldp+42,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[10]),26);
    tracep->fullIData(oldp+43,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[11]),26);
    tracep->fullIData(oldp+44,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[12]),26);
    tracep->fullIData(oldp+45,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[13]),26);
    tracep->fullIData(oldp+46,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[14]),26);
    tracep->fullIData(oldp+47,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[15]),26);
    tracep->fullIData(oldp+48,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[0]),32);
    tracep->fullIData(oldp+49,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[1]),32);
    tracep->fullIData(oldp+50,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[2]),32);
    tracep->fullIData(oldp+51,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[3]),32);
    tracep->fullIData(oldp+52,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[4]),32);
    tracep->fullIData(oldp+53,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[5]),32);
    tracep->fullIData(oldp+54,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[6]),32);
    tracep->fullIData(oldp+55,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[7]),32);
    tracep->fullIData(oldp+56,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[8]),32);
    tracep->fullIData(oldp+57,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[9]),32);
    tracep->fullIData(oldp+58,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[10]),32);
    tracep->fullIData(oldp+59,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[11]),32);
    tracep->fullIData(oldp+60,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[12]),32);
    tracep->fullIData(oldp+61,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[13]),32);
    tracep->fullIData(oldp+62,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[14]),32);
    tracep->fullIData(oldp+63,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[15]),32);
    tracep->fullQData(oldp+64,(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX),46);
    tracep->fullBit(oldp+66,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__pipeline_stall_DE));
    tracep->fullWData(oldp+67,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE),93);
    tracep->fullSData(oldp+70,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE),10);
    tracep->fullBit(oldp+71,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
    tracep->fullBit(oldp+72,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__actual_br_direction));
    tracep->fullCData(oldp+73,((0xffU & (IData)((vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX 
                                                 >> 4U)))),8);
    tracep->fullCData(oldp+74,((0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX))),4);
    tracep->fullCData(oldp+75,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__rd_val_pt_AGEX),2);
    tracep->fullBit(oldp+76,((1U & (IData)((vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX 
                                            >> 0x2dU)))));
    tracep->fullBit(oldp+77,((1U & (IData)((vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX 
                                            >> 0x2cU)))));
    tracep->fullIData(oldp+78,((IData)((vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX 
                                        >> 0xcU))),32);
    tracep->fullIData(oldp+79,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__newpc_AGEX),32);
    tracep->fullCData(oldp+80,((0x1fU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE) 
                                         >> 5U))),5);
    tracep->fullCData(oldp+81,((0xfU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE) 
                                        >> 1U))),4);
    tracep->fullBit(oldp+82,((1U & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE))));
    tracep->fullBit(oldp+83,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__is_type_I_AGEX_Valid));
    tracep->fullBit(oldp+84,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__is_type_I_MEM_Valid));
    tracep->fullBit(oldp+85,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__is_type_I_WB_Valid));
    tracep->fullBit(oldp+86,((1U & (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[2U] 
                                    >> 0x1cU))));
    tracep->fullIData(oldp+87,(((vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[2U] 
                                 << 4U) | (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U] 
                                           >> 0x1cU))),32);
    tracep->fullCData(oldp+88,((3U & (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U] 
                                      >> 0x1aU))),2);
    tracep->fullIData(oldp+89,((0x3ffffffU & vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U])),26);
    tracep->fullIData(oldp+90,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[0U]),32);
    tracep->fullBit(oldp+91,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__is_BTB_hit_FE));
    tracep->fullBit(oldp+92,(((2U <= (3U & (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U] 
                                            >> 0x1aU)))
                               ? 1U : 0U)));
    tracep->fullIData(oldp+93,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__guessed_br_address_FE),32);
    tracep->fullWData(oldp+94,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch),132);
    tracep->fullWData(oldp+99,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch),244);
    tracep->fullWData(oldp+107,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch),181);
    tracep->fullWData(oldp+113,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch),148);
    tracep->fullSData(oldp+118,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE),9);
    tracep->fullQData(oldp+119,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE),52);
    tracep->fullQData(oldp+121,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_WB),64);
    __Vtemp_h2b13a149__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                             >> 9U)))) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                >> 8U)))) 
                                            << 0x29U) 
                                           | (((QData)((IData)(
                                                               (0xfU 
                                                                & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                   >> 4U)))) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  ((0x18U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                        >> 0xeU)))
                                                                    ? 1U
                                                                    : 0U))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                       << 0x12U) 
                                                                      | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                         >> 0xeU)))) 
                                                     << 4U) 
                                                    | (QData)((IData)(
                                                                      (0xfU 
                                                                       & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U])))))))));
    __Vtemp_h2b13a149__0[1U] = (((IData)((((QData)((IData)(
>>>>>>> Stashed changes
                                                           ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             << 0x12U) 
                                                            | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               >> 0xeU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
<<<<<<< Updated upstream
                                 << 0xeU) | (0x3fffU 
                                             & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U]));
    __Vtemp_hcce6bf99__0[1U] = (((IData)((((QData)((IData)(
=======
                                 << 0xfU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                           >> 9U)))) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                              >> 8U)))) 
                                                          << 0x29U) 
                                                         | (((QData)((IData)(
                                                                             (0xfU 
                                                                              & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                                >> 4U)))) 
                                                             << 0x25U) 
                                                            | (((QData)((IData)(
                                                                                ((0x18U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                                >> 0xeU)))
                                                                                 ? 1U
                                                                                 : 0U))) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(
                                                                                ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                                << 0x12U) 
                                                                                | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 0xeU)))) 
                                                                   << 4U) 
                                                                  | (QData)((IData)(
                                                                                (0xfU 
                                                                                & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U])))))))) 
                                                     >> 0x20U)));
    __Vtemp_h35bfdd85__0[0U] = __Vtemp_h2b13a149__0[0U];
    __Vtemp_h35bfdd85__0[1U] = __Vtemp_h2b13a149__0[1U];
    __Vtemp_h35bfdd85__0[2U] = (((IData)((((QData)((IData)(
>>>>>>> Stashed changes
                                                           ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             << 0x12U) 
                                                            | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               >> 0xeU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 >> 0x12U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                           << 0x12U) 
                                                                          | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                             >> 0xeU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                       >> 0x20U)) 
<<<<<<< Updated upstream
                                              << 0xeU));
    __Vtemp_hcce6bf99__0[2U] = (((IData)((((QData)((IData)(
=======
                                              << 0xfU));
    __Vtemp_h35bfdd85__0[3U] = (((IData)((((QData)((IData)(
>>>>>>> Stashed changes
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                           << 0x2cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                >> 0x14U)))) 
<<<<<<< Updated upstream
                                 << 0x14U) | ((0xfc000U 
                                               & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U]) 
=======
                                 << 0x15U) | ((0x1f8000U 
                                               & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  << 1U)) 
>>>>>>> Stashed changes
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                              << 0x12U) 
                                                                             | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                                >> 0xeU)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                          >> 0x20U)) 
<<<<<<< Updated upstream
                                                 >> 0x12U)));
    __Vtemp_hcce6bf99__0[3U] = (((IData)((((QData)((IData)(
=======
                                                 >> 0x11U)));
    __Vtemp_h35bfdd85__0[4U] = (((IData)((((QData)((IData)(
>>>>>>> Stashed changes
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                           << 0x2cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                >> 0x14U)))) 
<<<<<<< Updated upstream
                                 >> 0xcU) | ((IData)(
=======
                                 >> 0xbU) | ((IData)(
>>>>>>> Stashed changes
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                           << 0xcU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                             >> 0x14U))) 
                                                      >> 0x20U)) 
<<<<<<< Updated upstream
                                             << 0x14U));
    __Vtemp_hcce6bf99__0[4U] = ((IData)(((((QData)((IData)(
=======
                                             << 0x15U));
    __Vtemp_h35bfdd85__0[5U] = ((IData)(((((QData)((IData)(
>>>>>>> Stashed changes
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                           << 0x2cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                >> 0x14U))) 
                                         >> 0x20U)) 
<<<<<<< Updated upstream
                                >> 0xcU);
    tracep->fullWData(oldp+57,(__Vtemp_hcce6bf99__0),148);
    tracep->fullIData(oldp+62,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                 << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 0x14U))),32);
    tracep->fullIData(oldp+63,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x14U))),32);
    tracep->fullIData(oldp+64,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0xeU))),32);
    tracep->fullIData(oldp+65,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x14U))),32);
    tracep->fullCData(oldp+66,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0xeU))),6);
    tracep->fullBit(oldp+67,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
    tracep->fullCData(oldp+68,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
    tracep->fullIData(oldp+69,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0xeU))),32);
    tracep->fullIData(oldp+70,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0xeU))),32);
    tracep->fullIData(oldp+71,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                 << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0xeU))),32);
    tracep->fullCData(oldp+72,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 9U))),5);
    tracep->fullBit(oldp+73,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                    >> 8U))));
    tracep->fullCData(oldp+74,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 4U))),4);
    tracep->fullIData(oldp+75,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    tracep->fullIData(oldp+76,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__newpc_AGEX),32);
    tracep->fullIData(oldp+77,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 4U))),32);
    tracep->fullIData(oldp+78,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                              >> 4U))),32);
    tracep->fullIData(oldp+79,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                 << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                              >> 4U))),32);
    tracep->fullIData(oldp+80,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                 << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                              >> 4U))),32);
    tracep->fullCData(oldp+81,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
    tracep->fullCData(oldp+82,((7U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x10U))),3);
    tracep->fullCData(oldp+83,((0x7fU & ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 3U) | 
                                         (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1dU)))),7);
    tracep->fullCData(oldp+84,((0x7fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 4U))),7);
    tracep->fullCData(oldp+85,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE),6);
    tracep->fullCData(oldp+86,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_I_DE),4);
    tracep->fullCData(oldp+87,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    tracep->fullIData(oldp+88,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
    tracep->fullBit(oldp+89,((1U & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                            >> 0x33U)))));
    tracep->fullCData(oldp+90,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0x13U))),5);
    tracep->fullCData(oldp+91,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0x18U))),5);
    tracep->fullCData(oldp+92,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0xbU))),5);
    tracep->fullBit(oldp+93,(((((((((0xcU == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                    | (1U == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                   | (0x16U == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                  | (0x19U == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                 | (0x1bU == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                | (0x15U == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                               | (2U == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE)))
                               ? 1U : 0U)));
    tracep->fullBit(oldp+94,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__rs1_read_DE));
    tracep->fullBit(oldp+95,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__rs2_read_DE));
    tracep->fullCData(oldp+96,((0x1fU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                 >> 0x2eU)))),5);
    tracep->fullIData(oldp+97,((IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                        >> 0xeU))),32);
    tracep->fullCData(oldp+98,((0xfU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 0xaU)))),4);
    tracep->fullBit(oldp+99,((1U & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                            >> 9U)))));
    tracep->fullCData(oldp+100,((0x1fU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE) 
                                          >> 5U))),5);
    tracep->fullCData(oldp+101,((0x1fU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE) 
                                          >> 4U))),5);
    tracep->fullCData(oldp+102,((0x1fU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 4U)))),5);
    tracep->fullCData(oldp+103,((0xfU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE) 
                                         >> 1U))),4);
    tracep->fullCData(oldp+104,((0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE))),4);
    tracep->fullCData(oldp+105,((0xfU & (IData)(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE))),4);
    tracep->fullBit(oldp+106,((1U & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE))));
    tracep->fullBit(oldp+107,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_AGEX_Valid));
    tracep->fullBit(oldp+108,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_MEM_Valid));
    tracep->fullBit(oldp+109,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_WB_Valid));
    tracep->fullBit(oldp+110,((1U & (IData)((vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE 
                                             >> 0x20U)))));
    tracep->fullIData(oldp+111,((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE)),32);
    tracep->fullCData(oldp+112,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                          >> 0xeU))),6);
    tracep->fullIData(oldp+113,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xeU))),32);
    tracep->fullIData(oldp+114,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                              >> 0x14U))),32);
    tracep->fullIData(oldp+115,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                              >> 0x14U))),32);
    tracep->fullCData(oldp+116,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
    tracep->fullIData(oldp+117,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                               >> 0xeU))),32);
    tracep->fullCData(oldp+118,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                          >> 9U))),5);
    tracep->fullBit(oldp+119,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                     >> 8U))));
    tracep->fullCData(oldp+120,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                         >> 4U))),4);
    tracep->fullCData(oldp+121,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                          >> 0xeU))),6);
    tracep->fullIData(oldp+122,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                              >> 0x14U))),32);
    tracep->fullIData(oldp+123,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                              >> 0x14U))),32);
    tracep->fullIData(oldp+124,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                               >> 0xeU))),32);
    tracep->fullCData(oldp+125,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
    tracep->fullCData(oldp+126,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                         >> 4U))),4);
    tracep->fullBit(oldp+127,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 8U))));
    tracep->fullCData(oldp+128,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                          >> 9U))),5);
    tracep->fullIData(oldp+129,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
=======
                                >> 0xbU);
    tracep->fullWData(oldp+123,(__Vtemp_h35bfdd85__0),181);
    tracep->fullIData(oldp+129,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                              >> 0x14U))),32);
    tracep->fullIData(oldp+130,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x14U))),32);
    tracep->fullIData(oldp+131,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0xeU))),32);
    tracep->fullIData(oldp+132,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x14U))),32);
    tracep->fullCData(oldp+133,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0xeU))),6);
    tracep->fullCData(oldp+134,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
    tracep->fullIData(oldp+135,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0xeU))),32);
    tracep->fullIData(oldp+136,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0xeU))),32);
    tracep->fullIData(oldp+137,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               >> 0xeU))),32);
    tracep->fullCData(oldp+138,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                          >> 9U))),5);
    tracep->fullBit(oldp+139,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 8U))));
    tracep->fullCData(oldp+140,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 4U))),4);
    tracep->fullIData(oldp+141,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    tracep->fullBit(oldp+142,(((0x18U == (0x3fU & (
                                                   vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0xeU)))
                                ? 1U : 0U)));
    tracep->fullIData(oldp+143,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 4U))),32);
    tracep->fullIData(oldp+144,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               >> 4U))),32);
    tracep->fullIData(oldp+145,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               >> 4U))),32);
    tracep->fullIData(oldp+146,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                               >> 4U))),32);
    tracep->fullCData(oldp+147,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
    tracep->fullCData(oldp+148,((7U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x10U))),3);
    tracep->fullCData(oldp+149,((0x7fU & ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 3U) | 
                                          (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x1dU)))),7);
    tracep->fullCData(oldp+150,((0x7fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 4U))),7);
    tracep->fullCData(oldp+151,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE),6);
    tracep->fullCData(oldp+152,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_I_DE),4);
    tracep->fullCData(oldp+153,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    tracep->fullIData(oldp+154,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
    tracep->fullBit(oldp+155,((1U & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 0x33U)))));
    tracep->fullCData(oldp+156,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x13U))),5);
    tracep->fullCData(oldp+157,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x18U))),5);
    tracep->fullCData(oldp+158,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0xbU))),5);
    tracep->fullBit(oldp+159,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__wr_reg_DE));
    tracep->fullBit(oldp+160,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__rs1_read_DE));
    tracep->fullBit(oldp+161,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__rs2_read_DE));
    tracep->fullCData(oldp+162,((0x1fU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x2eU)))),5);
    tracep->fullIData(oldp+163,((IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                         >> 0xeU))),32);
    tracep->fullCData(oldp+164,((0xfU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                 >> 0xaU)))),4);
    tracep->fullBit(oldp+165,((1U & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 9U)))));
    tracep->fullCData(oldp+166,((0x1fU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE) 
                                          >> 4U))),5);
    tracep->fullCData(oldp+167,((0x1fU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 4U)))),5);
    tracep->fullCData(oldp+168,((0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE))),4);
    tracep->fullCData(oldp+169,((0xfU & (IData)(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE))),4);
    tracep->fullCData(oldp+170,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                          >> 0xfU))),6);
    tracep->fullIData(oldp+171,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                  << 0x11U) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                               >> 0xfU))),32);
    tracep->fullIData(oldp+172,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                  << 0xbU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                              >> 0x15U))),32);
    tracep->fullIData(oldp+173,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                  << 0xbU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                              >> 0x15U))),32);
    tracep->fullCData(oldp+174,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
    tracep->fullIData(oldp+175,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                  << 0x11U) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xfU))),32);
    tracep->fullIData(oldp+176,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                  << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                               >> 4U))),32);
    tracep->fullBit(oldp+177,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                     >> 4U))));
    tracep->fullCData(oldp+178,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                          >> 0xaU))),5);
    tracep->fullBit(oldp+179,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                     >> 9U))));
    tracep->fullCData(oldp+180,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                         >> 5U))),4);
    tracep->fullCData(oldp+181,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                          >> 0xeU))),6);
    tracep->fullIData(oldp+182,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                              >> 0x14U))),32);
    tracep->fullIData(oldp+183,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                              >> 0x14U))),32);
    tracep->fullIData(oldp+184,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                               >> 0xeU))),32);
    tracep->fullCData(oldp+185,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
    tracep->fullCData(oldp+186,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                         >> 4U))),4);
    tracep->fullIData(oldp+187,((IData)((vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_WB 
                                         >> 0x20U))),32);
    tracep->fullIData(oldp+188,((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_WB)),32);
    tracep->fullBit(oldp+189,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 8U))));
    tracep->fullCData(oldp+190,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                          >> 9U))),5);
    tracep->fullIData(oldp+191,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
>>>>>>> Stashed changes
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                               >> 0xeU))),32);
    __Vtemp_hff3a9c92__0[0U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE 
                                 << 0xeU) | ((0x3e00U 
                                              & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 2U)) 
                                             | ((((((((((0xcU 
                                                         == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        | (1U 
                                                           == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                       | (0x16U 
                                                          == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                      | (0x19U 
                                                         == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                     | (0x1bU 
                                                        == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                    | (0x15U 
                                                       == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                   | (2U 
                                                      == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE)))
                                                   ? 1U
                                                   : 0U) 
                                                 << 8U) 
                                                | (((IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_I_DE) 
                                                    << 4U) 
                                                   | (0xfU 
<<<<<<< Updated upstream
                                                      & vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U])))));
    __Vtemp_hff3a9c92__0[1U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE 
=======
                                                      & vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])))));
    __Vtemp_h02dc9f9b__0[1U] = __Vtemp_hfabb119d__0[1U];
    __Vtemp_h02dc9f9b__0[2U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                              << 0xbU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                                >> 0x15U)))) 
                                 << 0x14U) | ((0xfc000U 
                                               & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 1U)) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                                              << 0x11U) 
                                                                             | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                                >> 0xfU)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((0x17U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                                                >> 0xfU)))
                                                                               ? 
                                                                              vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__dmem
                                                                              [
                                                                              (0x3fffU 
                                                                               & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                                >> 0x11U))]
                                                                               : 
                                                                              ((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                                << 0x11U) 
                                                                               | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                                >> 0xfU)))))) 
                                                          >> 0x20U)) 
                                                 >> 0x12U)));
    __Vtemp_h02dc9f9b__0[3U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                              << 0xbU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                                >> 0x15U)))) 
                                 >> 0xcU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                                        << 0x2bU) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                                           << 0xbU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                                             >> 0x15U))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h02dc9f9b__0[4U] = ((IData)(((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                              << 0xbU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                                >> 0x15U))) 
                                         >> 0x20U)) 
                                >> 0xcU);
    tracep->fullWData(oldp+192,(__Vtemp_h02dc9f9b__0),148);
    tracep->fullIData(oldp+197,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__dmem
                                [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 0x11U))]),32);
    tracep->fullIData(oldp+198,(((0x17U == (0x3fU & 
                                            (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xfU)))
                                  ? vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              >> 0x11U))]
                                  : ((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                      << 0x11U) | (
                                                   vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                   >> 0xfU)))),32);
    __Vtemp_h5dd3a101__0[0U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE 
                                 << 0xeU) | ((0x3e00U 
                                              & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 2U)) 
                                             | (((IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                 << 8U) 
                                                | (((IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_I_DE) 
                                                    << 4U) 
                                                   | (0xfU 
                                                      & vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U])))));
    __Vtemp_h5dd3a101__0[1U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE 
>>>>>>> Stashed changes
                                 >> 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                              [(0x1fU 
                                                & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x18U))] 
                                              << 0xeU));
<<<<<<< Updated upstream
    __Vtemp_hff3a9c92__0[2U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
=======
    __Vtemp_h5dd3a101__0[2U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
>>>>>>> Stashed changes
                                 [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x18U))] 
                                 >> 0x12U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                          << 0x1cU) 
                                                                         | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                            >> 4U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x13U))])))) 
                                              << 0xeU));
<<<<<<< Updated upstream
    __Vtemp_hff3a9c92__0[3U] = (((IData)((((QData)((IData)(
=======
    __Vtemp_h5dd3a101__0[3U] = (((IData)((((QData)((IData)(
>>>>>>> Stashed changes
                                                           ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                             << 0x1cU) 
                                                            | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                               >> 4U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x13U))])))) 
                                 >> 0x12U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                           << 0x1cU) 
                                                                          | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                             >> 4U)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x13U))]))) 
                                                       >> 0x20U)) 
                                              << 0xeU));
<<<<<<< Updated upstream
    __Vtemp_hff3a9c92__0[4U] = ((0xfff00000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
=======
    __Vtemp_h5dd3a101__0[4U] = ((0xfff00000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
>>>>>>> Stashed changes
                                                << 0x10U)) 
                                | (((IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE) 
                                    << 0xeU) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                             << 0x1cU) 
                                                                            | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                               >> 4U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                                                            [
                                                                            (0x1fU 
                                                                             & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x13U))]))) 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
<<<<<<< Updated upstream
    __Vtemp_hff3a9c92__0[5U] = (((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
=======
    __Vtemp_h5dd3a101__0[5U] = (((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
>>>>>>> Stashed changes
                                              << 0x10U)) 
                                 | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                    >> 0x10U)) | (0xfff00000U 
                                                  & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                     << 0x10U)));
<<<<<<< Updated upstream
    __Vtemp_hff3a9c92__0[6U] = (((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
=======
    __Vtemp_h5dd3a101__0[6U] = (((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
>>>>>>> Stashed changes
                                              << 0x10U)) 
                                 | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0x10U)) | (0xfff00000U 
                                                  & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 0x10U)));
<<<<<<< Updated upstream
    __Vtemp_hff3a9c92__0[7U] = ((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 0x10U)) 
                                | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   >> 0x10U));
    tracep->fullWData(oldp+130,(__Vtemp_hff3a9c92__0),244);
    tracep->fullIData(oldp+138,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x13U))]),32);
    tracep->fullIData(oldp+139,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x18U))]),32);
    tracep->fullIData(oldp+140,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[0]),32);
    tracep->fullIData(oldp+141,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[1]),32);
    tracep->fullIData(oldp+142,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[2]),32);
    tracep->fullIData(oldp+143,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[3]),32);
    tracep->fullIData(oldp+144,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[4]),32);
    tracep->fullIData(oldp+145,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[5]),32);
    tracep->fullIData(oldp+146,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[6]),32);
    tracep->fullIData(oldp+147,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[7]),32);
    tracep->fullIData(oldp+148,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[8]),32);
    tracep->fullIData(oldp+149,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[9]),32);
    tracep->fullIData(oldp+150,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[10]),32);
    tracep->fullIData(oldp+151,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[11]),32);
    tracep->fullIData(oldp+152,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[12]),32);
    tracep->fullIData(oldp+153,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[13]),32);
    tracep->fullIData(oldp+154,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[14]),32);
    tracep->fullIData(oldp+155,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[15]),32);
    tracep->fullIData(oldp+156,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[16]),32);
    tracep->fullIData(oldp+157,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[17]),32);
    tracep->fullIData(oldp+158,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[18]),32);
    tracep->fullIData(oldp+159,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[19]),32);
    tracep->fullIData(oldp+160,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[20]),32);
    tracep->fullIData(oldp+161,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[21]),32);
    tracep->fullIData(oldp+162,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[22]),32);
    tracep->fullIData(oldp+163,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[23]),32);
    tracep->fullIData(oldp+164,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[24]),32);
    tracep->fullIData(oldp+165,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[25]),32);
    tracep->fullIData(oldp+166,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[26]),32);
    tracep->fullIData(oldp+167,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[27]),32);
    tracep->fullIData(oldp+168,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[28]),32);
    tracep->fullIData(oldp+169,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[29]),32);
    tracep->fullIData(oldp+170,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[30]),32);
    tracep->fullIData(oldp+171,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[31]),32);
    tracep->fullBit(oldp+172,(vlSelf->clk));
    tracep->fullBit(oldp+173,(vlSelf->reset));
    tracep->fullIData(oldp+174,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__dmem
                                [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                             >> 2U))]),32);
    tracep->fullIData(oldp+175,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[0]),32);
    tracep->fullIData(oldp+176,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[1]),32);
    tracep->fullIData(oldp+177,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[2]),32);
    tracep->fullIData(oldp+178,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[3]),32);
    tracep->fullIData(oldp+179,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[4]),32);
    tracep->fullIData(oldp+180,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[5]),32);
    tracep->fullIData(oldp+181,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[6]),32);
    tracep->fullIData(oldp+182,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[7]),32);
    tracep->fullIData(oldp+183,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[8]),32);
    tracep->fullIData(oldp+184,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[9]),32);
    tracep->fullIData(oldp+185,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[10]),32);
    tracep->fullIData(oldp+186,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[11]),32);
    tracep->fullIData(oldp+187,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[12]),32);
    tracep->fullIData(oldp+188,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[13]),32);
    tracep->fullIData(oldp+189,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[14]),32);
    tracep->fullIData(oldp+190,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[15]),32);
    tracep->fullIData(oldp+191,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[16]),32);
    tracep->fullIData(oldp+192,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[17]),32);
    tracep->fullIData(oldp+193,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[18]),32);
    tracep->fullIData(oldp+194,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[19]),32);
    tracep->fullIData(oldp+195,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[20]),32);
    tracep->fullIData(oldp+196,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[21]),32);
    tracep->fullIData(oldp+197,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[22]),32);
    tracep->fullIData(oldp+198,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[23]),32);
    tracep->fullIData(oldp+199,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[24]),32);
    tracep->fullIData(oldp+200,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[25]),32);
    tracep->fullIData(oldp+201,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[26]),32);
    tracep->fullIData(oldp+202,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[27]),32);
    tracep->fullIData(oldp+203,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[28]),32);
    tracep->fullIData(oldp+204,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[29]),32);
    tracep->fullIData(oldp+205,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[30]),32);
    tracep->fullIData(oldp+206,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[31]),32);
    tracep->fullIData(oldp+207,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[0]),32);
    tracep->fullIData(oldp+208,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[1]),32);
    tracep->fullIData(oldp+209,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[2]),32);
    tracep->fullIData(oldp+210,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[3]),32);
    tracep->fullIData(oldp+211,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[4]),32);
    tracep->fullIData(oldp+212,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[5]),32);
    tracep->fullIData(oldp+213,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[6]),32);
    tracep->fullIData(oldp+214,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[7]),32);
    tracep->fullIData(oldp+215,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[8]),32);
    tracep->fullIData(oldp+216,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[9]),32);
    tracep->fullIData(oldp+217,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[10]),32);
    tracep->fullIData(oldp+218,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[11]),32);
    tracep->fullIData(oldp+219,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[12]),32);
    tracep->fullIData(oldp+220,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[13]),32);
    tracep->fullIData(oldp+221,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[14]),32);
    tracep->fullIData(oldp+222,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[15]),32);
    tracep->fullIData(oldp+223,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[16]),32);
    tracep->fullIData(oldp+224,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[17]),32);
    tracep->fullIData(oldp+225,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[18]),32);
    tracep->fullIData(oldp+226,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[19]),32);
    tracep->fullIData(oldp+227,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[20]),32);
    tracep->fullIData(oldp+228,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[21]),32);
    tracep->fullIData(oldp+229,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[22]),32);
    tracep->fullIData(oldp+230,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[23]),32);
    tracep->fullIData(oldp+231,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[24]),32);
    tracep->fullIData(oldp+232,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[25]),32);
    tracep->fullIData(oldp+233,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[26]),32);
    tracep->fullIData(oldp+234,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[27]),32);
    tracep->fullIData(oldp+235,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[28]),32);
    tracep->fullIData(oldp+236,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[29]),32);
    tracep->fullIData(oldp+237,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[30]),32);
    tracep->fullIData(oldp+238,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[31]),32);
    tracep->fullBit(oldp+239,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_FE));
    tracep->fullBit(oldp+240,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_FE));
    tracep->fullBit(oldp+241,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_AGEX));
    tracep->fullBit(oldp+242,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_AGEX));
    tracep->fullBit(oldp+243,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_MEM));
    tracep->fullIData(oldp+244,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
    tracep->fullIData(oldp+245,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__memaddr_MEM),32);
    tracep->fullIData(oldp+246,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__wr_val_MEM),32);
    tracep->fullBit(oldp+247,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__wr_mem_MEM));
    tracep->fullCData(oldp+248,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__wcsrno_WB),4);
    tracep->fullBit(oldp+249,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__wr_csr_WB));
=======
    __Vtemp_h5dd3a101__0[7U] = ((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 0x10U)) 
                                | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   >> 0x10U));
    tracep->fullWData(oldp+199,(__Vtemp_h5dd3a101__0),244);
    tracep->fullIData(oldp+207,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x13U))]),32);
    tracep->fullIData(oldp+208,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x18U))]),32);
    tracep->fullIData(oldp+209,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[0]),32);
    tracep->fullIData(oldp+210,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[1]),32);
    tracep->fullIData(oldp+211,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[2]),32);
    tracep->fullIData(oldp+212,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[3]),32);
    tracep->fullIData(oldp+213,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[4]),32);
    tracep->fullIData(oldp+214,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[5]),32);
    tracep->fullIData(oldp+215,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[6]),32);
    tracep->fullIData(oldp+216,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[7]),32);
    tracep->fullIData(oldp+217,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[8]),32);
    tracep->fullIData(oldp+218,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[9]),32);
    tracep->fullIData(oldp+219,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[10]),32);
    tracep->fullIData(oldp+220,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[11]),32);
    tracep->fullIData(oldp+221,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[12]),32);
    tracep->fullIData(oldp+222,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[13]),32);
    tracep->fullIData(oldp+223,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[14]),32);
    tracep->fullIData(oldp+224,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[15]),32);
    tracep->fullIData(oldp+225,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[16]),32);
    tracep->fullIData(oldp+226,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[17]),32);
    tracep->fullIData(oldp+227,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[18]),32);
    tracep->fullIData(oldp+228,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[19]),32);
    tracep->fullIData(oldp+229,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[20]),32);
    tracep->fullIData(oldp+230,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[21]),32);
    tracep->fullIData(oldp+231,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[22]),32);
    tracep->fullIData(oldp+232,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[23]),32);
    tracep->fullIData(oldp+233,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[24]),32);
    tracep->fullIData(oldp+234,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[25]),32);
    tracep->fullIData(oldp+235,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[26]),32);
    tracep->fullIData(oldp+236,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[27]),32);
    tracep->fullIData(oldp+237,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[28]),32);
    tracep->fullIData(oldp+238,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[29]),32);
    tracep->fullIData(oldp+239,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[30]),32);
    tracep->fullIData(oldp+240,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[31]),32);
    tracep->fullBit(oldp+241,(vlSelf->clk));
    tracep->fullBit(oldp+242,(vlSelf->reset));
    tracep->fullIData(oldp+243,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX
                                [(0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX))]),26);
    tracep->fullIData(oldp+244,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX
                                [(0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX))]),32);
    tracep->fullIData(oldp+245,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[0]),32);
    tracep->fullIData(oldp+246,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[1]),32);
    tracep->fullIData(oldp+247,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[2]),32);
    tracep->fullIData(oldp+248,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[3]),32);
    tracep->fullIData(oldp+249,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[4]),32);
    tracep->fullIData(oldp+250,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[5]),32);
    tracep->fullIData(oldp+251,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[6]),32);
    tracep->fullIData(oldp+252,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[7]),32);
    tracep->fullIData(oldp+253,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[8]),32);
    tracep->fullIData(oldp+254,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[9]),32);
    tracep->fullIData(oldp+255,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[10]),32);
    tracep->fullIData(oldp+256,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[11]),32);
    tracep->fullIData(oldp+257,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[12]),32);
    tracep->fullIData(oldp+258,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[13]),32);
    tracep->fullIData(oldp+259,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[14]),32);
    tracep->fullIData(oldp+260,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[15]),32);
    tracep->fullIData(oldp+261,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[16]),32);
    tracep->fullIData(oldp+262,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[17]),32);
    tracep->fullIData(oldp+263,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[18]),32);
    tracep->fullIData(oldp+264,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[19]),32);
    tracep->fullIData(oldp+265,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[20]),32);
    tracep->fullIData(oldp+266,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[21]),32);
    tracep->fullIData(oldp+267,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[22]),32);
    tracep->fullIData(oldp+268,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[23]),32);
    tracep->fullIData(oldp+269,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[24]),32);
    tracep->fullIData(oldp+270,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[25]),32);
    tracep->fullIData(oldp+271,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[26]),32);
    tracep->fullIData(oldp+272,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[27]),32);
    tracep->fullIData(oldp+273,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[28]),32);
    tracep->fullIData(oldp+274,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[29]),32);
    tracep->fullIData(oldp+275,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[30]),32);
    tracep->fullIData(oldp+276,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[31]),32);
    tracep->fullIData(oldp+277,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[0]),32);
    tracep->fullIData(oldp+278,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[1]),32);
    tracep->fullIData(oldp+279,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[2]),32);
    tracep->fullIData(oldp+280,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[3]),32);
    tracep->fullIData(oldp+281,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[4]),32);
    tracep->fullIData(oldp+282,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[5]),32);
    tracep->fullIData(oldp+283,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[6]),32);
    tracep->fullIData(oldp+284,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[7]),32);
    tracep->fullIData(oldp+285,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[8]),32);
    tracep->fullIData(oldp+286,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[9]),32);
    tracep->fullIData(oldp+287,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[10]),32);
    tracep->fullIData(oldp+288,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[11]),32);
    tracep->fullIData(oldp+289,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[12]),32);
    tracep->fullIData(oldp+290,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[13]),32);
    tracep->fullIData(oldp+291,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[14]),32);
    tracep->fullIData(oldp+292,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[15]),32);
    tracep->fullIData(oldp+293,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[16]),32);
    tracep->fullIData(oldp+294,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[17]),32);
    tracep->fullIData(oldp+295,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[18]),32);
    tracep->fullIData(oldp+296,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[19]),32);
    tracep->fullIData(oldp+297,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[20]),32);
    tracep->fullIData(oldp+298,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[21]),32);
    tracep->fullIData(oldp+299,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[22]),32);
    tracep->fullIData(oldp+300,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[23]),32);
    tracep->fullIData(oldp+301,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[24]),32);
    tracep->fullIData(oldp+302,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[25]),32);
    tracep->fullIData(oldp+303,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[26]),32);
    tracep->fullIData(oldp+304,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[27]),32);
    tracep->fullIData(oldp+305,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[28]),32);
    tracep->fullIData(oldp+306,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[29]),32);
    tracep->fullIData(oldp+307,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[30]),32);
    tracep->fullIData(oldp+308,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[31]),32);
    tracep->fullBit(oldp+309,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_FE));
    tracep->fullBit(oldp+310,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_FE));
    tracep->fullBit(oldp+311,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_AGEX));
    tracep->fullBit(oldp+312,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_AGEX));
    tracep->fullBit(oldp+313,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_MEM));
    tracep->fullCData(oldp+314,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__memaddr_btb_DE),4);
    tracep->fullIData(oldp+315,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
    tracep->fullCData(oldp+316,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__wcsrno_WB),4);
    tracep->fullBit(oldp+317,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__wr_csr_WB));
>>>>>>> Stashed changes
}
