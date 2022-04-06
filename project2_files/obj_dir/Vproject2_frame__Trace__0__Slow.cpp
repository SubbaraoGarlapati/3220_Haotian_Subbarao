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
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"reset", false,-1);
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"reset", false,-1);
    tracep->declBus(c+1,"cycle_count", false,-1, 31,0);
    tracep->declBus(c+64,"from_FE_to_AGEX", false,-1, 11,0);
    tracep->declBus(c+31,"bhr_from_AGEX_to_FE", false,-1, 7,0);
    tracep->declArray(c+65,"FE_latch_out", false,-1, 177,0);
    tracep->declArray(c+71,"DE_latch_out", false,-1, 289,0);
    tracep->declArray(c+81,"AGEX_latch_out", false,-1, 180,0);
    tracep->declArray(c+87,"MEM_latch_out", false,-1, 147,0);
    tracep->declBus(c+92,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+93,"from_AGEX_to_FE", false,-1, 92,0);
    tracep->declBus(c+322,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+323,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+96,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declBus(c+97,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declQuad(c+98,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+324,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+325,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+326,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declQuad(c+100,"from_AGEX_to_WB", false,-1, 63,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"reset", false,-1);
    tracep->declBus(c+324,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+325,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+71,"from_DE_latch", false,-1, 289,0);
    tracep->declBus(c+64,"from_FE_to_AGEX", false,-1, 11,0);
    tracep->declArray(c+81,"AGEX_latch_out", false,-1, 180,0);
    tracep->declArray(c+93,"from_AGEX_to_FE", false,-1, 92,0);
    tracep->declBus(c+96,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declBus(c+31,"bhr_from_AGEX_to_FE", false,-1, 7,0);
    tracep->declQuad(c+100,"from_AGEX_to_WB", false,-1, 63,0);
    tracep->declArray(c+81,"AGEX_latch", false,-1, 180,0);
    tracep->declArray(c+102,"AGEX_latch_contents", false,-1, 180,0);
    tracep->declBus(c+108,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+109,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+110,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+111,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+112,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+113,"br_cond_AGEX", false,-1);
    tracep->declBit(c+114,"actual_br_direction", false,-1);
    tracep->declBus(c+115,"bus_canary_AGEX", false,-1, 3,0);
    tracep->declBus(c+31,"bhr_AGEX", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+32+i*1,"btb_tag_AGEX", true,(i+0), 25,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+48+i*1,"btb_value_AGEX", true,(i+0), 31,0);
    }
    tracep->declBus(c+116,"memaddr_pt_AGEX", false,-1, 7,0);
    tracep->declBus(c+117,"memaddr_btb_AGEX", false,-1, 3,0);
    tracep->declBus(c+118,"curr_memaddr_pt_AGEX", false,-1, 7,0);
    tracep->declBus(c+119,"curr_memaddr_btb_AGEX", false,-1, 3,0);
    tracep->declBus(c+31,"rd_val_bhr_AGEX", false,-1, 7,0);
    tracep->declBus(c+255,"rd_val_pt_AGEX", false,-1, 1,0);
    tracep->declBus(c+256,"rd_val_btb_tag_AGEX", false,-1, 25,0);
    tracep->declBus(c+257,"rd_val_btb_value_AGEX", false,-1, 31,0);
    tracep->declBit(c+120,"is_BTB_hit_AGEX", false,-1);
    tracep->declBit(c+121,"guessed_br_direction_AGEX", false,-1);
    tracep->declBus(c+122,"guessed_br_address_AGEX", false,-1, 31,0);
    tracep->declBus(c+123,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+124,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+125,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+126,"rd_AGEX", false,-1, 4,0);
    tracep->declBit(c+127,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+128,"type_I_AGEX", false,-1, 3,0);
    tracep->declBus(c+2,"hit_prediction_AGEX", false,-1, 31,0);
    tracep->declBus(c+3,"branch_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+123,"s_regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+124,"s_regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+125,"s_sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+129,"actual_branch_address_AGEX", false,-1, 31,0);
    tracep->declBus(c+130,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+131,"newpc_AGEX", false,-1, 31,0);
    tracep->declBit(c+132,"wr_mem_AGEX", false,-1);
    tracep->declBus(c+124,"wr_val_AGEX", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"reset", false,-1);
    tracep->declArray(c+65,"from_FE_latch", false,-1, 177,0);
    tracep->declBus(c+96,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declBus(c+97,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declQuad(c+98,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+92,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+71,"DE_latch_out", false,-1, 289,0);
    tracep->declArray(c+71,"DE_latch", false,-1, 289,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+221+i*1,"regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+15+i*1,"csr_regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+133,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+134,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+135,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+136,"inst_count_DE", false,-1, 31,0);
    tracep->declBit(c+137,"is_BTB_hit_DE", false,-1);
    tracep->declBit(c+138,"guessed_br_direction_DE", false,-1);
    tracep->declBus(c+139,"guessed_br_address_DE", false,-1, 31,0);
    tracep->declBus(c+140,"memaddr_pt_DE", false,-1, 7,0);
    tracep->declBus(c+141,"memaddr_btb_DE", false,-1, 3,0);
    tracep->declArray(c+209,"DE_latch_contents", false,-1, 289,0);
    tracep->declBus(c+142,"bus_canary_DE", false,-1, 3,0);
    tracep->declBus(c+143,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+144,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+145,"op_DE", false,-1, 6,0);
    tracep->declBus(c+146,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+147,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+148,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+149,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBit(c+150,"wr_reg_WB", false,-1);
    tracep->declBus(c+151,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+152,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+153,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+219,"regval1_DE", false,-1, 31,0);
    tracep->declBus(c+220,"regval2_DE", false,-1, 31,0);
    tracep->declBit(c+154,"wr_reg_DE", false,-1);
    tracep->declBit(c+155,"rs1_read_DE", false,-1);
    tracep->declBit(c+156,"rs2_read_DE", false,-1);
    tracep->declBus(c+157,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+158,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+159,"wcsrno_WB", false,-1, 3,0);
    tracep->declBit(c+160,"wr_csr_WB", false,-1);
    tracep->declBus(c+161,"rd_AGEX", false,-1, 4,0);
    tracep->declBus(c+162,"rd_MEM", false,-1, 4,0);
    tracep->declBus(c+163,"rd_WB", false,-1, 4,0);
    tracep->declBus(c+164,"type_I_AGEX", false,-1, 3,0);
    tracep->declBus(c+165,"type_I_MEM", false,-1, 3,0);
    tracep->declBus(c+166,"type_I_WB", false,-1, 3,0);
    tracep->declBit(c+167,"br_cond_AGEX_in_DE", false,-1);
    tracep->declBit(c+168,"is_type_I_AGEX_Valid", false,-1);
    tracep->declBit(c+169,"is_type_I_MEM_Valid", false,-1);
    tracep->declBit(c+170,"is_type_I_WB_Valid", false,-1);
    tracep->declBit(c+92,"pipeline_stall_DE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"reset", false,-1);
    tracep->declBus(c+92,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+93,"from_AGEX_to_FE", false,-1, 92,0);
    tracep->declBus(c+322,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+323,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+31,"bhr_from_AGEX_to_FE", false,-1, 7,0);
    tracep->declArray(c+65,"FE_latch_out", false,-1, 177,0);
    tracep->declBus(c+64,"from_FE_to_AGEX", false,-1, 11,0);
    tracep->declArray(c+65,"FE_latch", false,-1, 177,0);
    tracep->declBus(c+4,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+5,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+6,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+92,"stall_pipe_FE", false,-1);
    tracep->declArray(c+9,"FE_latch_contents", false,-1, 177,0);
    tracep->declBus(c+7,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+327,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBit(c+171,"br_cond_AGEX_in_FE", false,-1);
    tracep->declBus(c+172,"newpc_AGEX", false,-1, 31,0);
    tracep->declBus(c+173,"memaddr_pt_FE", false,-1, 7,0);
    tracep->declBus(c+8,"memaddr_btb_FE", false,-1, 3,0);
    tracep->declBus(c+31,"rd_val_bhr_FE", false,-1, 7,0);
    tracep->declBus(c+174,"rd_val_pt_FE", false,-1, 1,0);
    tracep->declBus(c+175,"rd_val_btb_tag_FE", false,-1, 25,0);
    tracep->declBus(c+176,"rd_val_btb_value_FE", false,-1, 31,0);
    tracep->declBit(c+177,"is_BTB_hit_FE", false,-1);
    tracep->declBit(c+178,"guessed_br_direction_FE", false,-1);
    tracep->declBus(c+179,"guessed_br_address", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"reset", false,-1);
    tracep->declBus(c+326,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+81,"from_AGEX_latch", false,-1, 180,0);
    tracep->declArray(c+87,"MEM_latch_out", false,-1, 147,0);
    tracep->declBus(c+322,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+97,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declBus(c+324,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+87,"MEM_latch", false,-1, 147,0);
    tracep->declArray(c+202,"MEM_latch_contents", false,-1, 147,0);
    tracep->declBus(c+180,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+181,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+182,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+183,"PC_MEM", false,-1, 31,0);
    tracep->declBus(c+184,"bus_canary_MEM", false,-1, 3,0);
    tracep->declBus(c+185,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+207,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+186,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+187,"wr_mem_MEM", false,-1);
    tracep->declBus(c+185,"temp_aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+208,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+188,"rd_MEM", false,-1, 4,0);
    tracep->declBit(c+189,"wr_reg_MEM", false,-1);
    tracep->declBus(c+190,"type_I_MEM", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__my_WB_stage__0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"reset", false,-1);
    tracep->declArray(c+87,"from_MEM_latch", false,-1, 147,0);
    tracep->declQuad(c+100,"from_AGEX_to_WB", false,-1, 63,0);
    tracep->declBus(c+323,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+98,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+325,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+326,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBus(c+191,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+192,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+193,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+194,"inst_count_WB", false,-1, 31,0);
    tracep->declBus(c+195,"bus_canary_WB", false,-1, 3,0);
    tracep->declBus(c+196,"type_I_WB", false,-1, 3,0);
    tracep->declBus(c+197,"hit_prediction_WB", false,-1, 31,0);
    tracep->declBus(c+198,"branch_count_WB", false,-1, 31,0);
    tracep->declBit(c+199,"wr_reg_WB", false,-1);
    tracep->declBus(c+200,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+200,"rd_WB", false,-1, 4,0);
    tracep->declBus(c+201,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+328,"wcsrno_WB", false,-1, 3,0);
    tracep->declBit(c+329,"wr_csr_WB", false,-1);
    tracep->declBus(c+201,"aluout_WB", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+258+i*1,"last_WB_value", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+290+i*1,"WB_counters", true,(i+0), 31,0);
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
    VlWide<6>/*191:0*/ __Vtemp_hfc0f6a2f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc247e411__0;
    VlWide<6>/*191:0*/ __Vtemp_hf0130e58__0;
    VlWide<3>/*95:0*/ __Vtemp_hfabb119d__0;
    VlWide<5>/*159:0*/ __Vtemp_h02dc9f9b__0;
    VlWide<10>/*319:0*/ __Vtemp_h812b39df__0;
    // Body
    tracep->fullIData(oldp+1,(vlSymsp->TOP__project2_frame.__PVT__cycle_count),32);
    tracep->fullIData(oldp+2,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__hit_prediction_AGEX),32);
    tracep->fullIData(oldp+3,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__branch_count_AGEX),32);
    tracep->fullIData(oldp+4,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    tracep->fullIData(oldp+5,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                              [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))]),32);
    tracep->fullIData(oldp+6,(((IData)(4U) + vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    tracep->fullIData(oldp+7,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_FE),32);
    tracep->fullCData(oldp+8,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                       >> 2U))),4);
    __Vtemp_hfc0f6a2f__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__is_BTB_hit_FE)) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            ((2U 
                                                              <= 
                                                              (3U 
                                                               & (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U] 
                                                                  >> 0x1aU)))
                                                              ? 1U
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__guessed_br_address)) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xfU 
                                                                 | (((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__memaddr_pt_FE) 
                                                                     << 8U) 
                                                                    | (0xf0U 
                                                                       & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                          << 2U))))))))));
    __Vtemp_hfc0f6a2f__0[1U] = ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 << 0x12U) | (IData)(
                                                     ((((QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__is_BTB_hit_FE)) 
                                                        << 0x31U) 
                                                       | (((QData)((IData)(
                                                                           ((2U 
                                                                             <= 
                                                                             (3U 
                                                                              & (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U] 
                                                                                >> 0x1aU)))
                                                                             ? 1U
                                                                             : 0U))) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__guessed_br_address)) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xfU 
                                                                                | (((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__memaddr_pt_FE) 
                                                                                << 8U) 
                                                                                | (0xf0U 
                                                                                & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                << 2U))))))))) 
                                                      >> 0x20U)));
    __Vtemp_hfc0f6a2f__0[2U] = ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 >> 0xeU) | (((IData)(4U) 
                                              + vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                             << 0x12U));
    __Vtemp_hfc0f6a2f__0[3U] = ((((IData)(4U) + vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0xeU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                                                                       [
                                                                       (0x3fffU 
                                                                        & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                           >> 2U))])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                             << 0x12U));
    __Vtemp_hfc0f6a2f__0[4U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                               >> 2U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0xeU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                                                                        [
                                                                        (0x3fffU 
                                                                         & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                            >> 2U))])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_hfc0f6a2f__0[5U] = ((IData)(((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                               >> 2U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                         >> 0x20U)) 
                                >> 0xeU);
    tracep->fullWData(oldp+9,(__Vtemp_hfc0f6a2f__0),178);
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
    tracep->fullSData(oldp+64,(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX),12);
    tracep->fullWData(oldp+65,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch),178);
    tracep->fullWData(oldp+71,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch),290);
    tracep->fullWData(oldp+81,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch),181);
    tracep->fullWData(oldp+87,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch),148);
    tracep->fullBit(oldp+92,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__pipeline_stall_DE));
    tracep->fullWData(oldp+93,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE),93);
    tracep->fullSData(oldp+96,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE),10);
    tracep->fullSData(oldp+97,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE),9);
    tracep->fullQData(oldp+98,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE),52);
    tracep->fullQData(oldp+100,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_WB),64);
    __Vtemp_hc247e411__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                             >> 0x17U)))) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                >> 0x16U)))) 
                                            << 0x29U) 
                                           | (((QData)((IData)(
                                                               (0xfU 
                                                                & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                   >> 0x12U)))) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  ((0x18U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                         << 4U) 
                                                                        | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                           >> 0x1cU))))
                                                                    ? 1U
                                                                    : 0U))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                       << 4U) 
                                                                      | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                         >> 0x1cU)))) 
                                                     << 4U) 
                                                    | (QData)((IData)(
                                                                      (0xfU 
                                                                       & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U])))))))));
    __Vtemp_hc247e411__0[1U] = (((IData)((((QData)((IData)(
                                                           ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                             << 4U) 
                                                            | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                               >> 0x1cU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 << 0xfU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                           >> 0x17U)))) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                              >> 0x16U)))) 
                                                          << 0x29U) 
                                                         | (((QData)((IData)(
                                                                             (0xfU 
                                                                              & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 0x12U)))) 
                                                             << 0x25U) 
                                                            | (((QData)((IData)(
                                                                                ((0x18U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                                >> 0x1cU))))
                                                                                 ? 1U
                                                                                 : 0U))) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(
                                                                                ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                                >> 0x1cU)))) 
                                                                   << 4U) 
                                                                  | (QData)((IData)(
                                                                                (0xfU 
                                                                                & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U])))))))) 
                                                     >> 0x20U)));
    __Vtemp_hf0130e58__0[0U] = __Vtemp_hc247e411__0[0U];
    __Vtemp_hf0130e58__0[1U] = __Vtemp_hc247e411__0[1U];
    __Vtemp_hf0130e58__0[2U] = (((IData)((((QData)((IData)(
                                                           ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                             << 4U) 
                                                            | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                               >> 0x1cU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 >> 0x11U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                           << 4U) 
                                                                          | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                             >> 0x1cU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 0xfU));
    __Vtemp_hf0130e58__0[3U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[9U])) 
                                           << 0x3eU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                >> 2U)))) 
                                 << 0x15U) | ((0x1f8000U 
                                               & ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                   << 0x13U) 
                                                  | (0x78000U 
                                                     & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        >> 0xdU)))) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                              << 4U) 
                                                                             | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                                >> 0x1cU)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                          >> 0x20U)) 
                                                 >> 0x11U)));
    __Vtemp_hf0130e58__0[4U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[9U])) 
                                           << 0x3eU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                >> 2U)))) 
                                 >> 0xbU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[9U])) 
                                                        << 0x3eU) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                                           << 0x1eU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                             >> 2U))) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_hf0130e58__0[5U] = ((IData)(((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[9U])) 
                                           << 0x3eU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                >> 2U))) 
                                         >> 0x20U)) 
                                >> 0xbU);
    tracep->fullWData(oldp+102,(__Vtemp_hf0130e58__0),181);
    tracep->fullIData(oldp+108,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[9U] 
                                  << 0x1eU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                               >> 2U))),32);
    tracep->fullIData(oldp+109,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                  << 0x1eU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 2U))),32);
    tracep->fullIData(oldp+110,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 4U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1cU))),32);
    tracep->fullIData(oldp+111,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0x1eU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                               >> 2U))),32);
    tracep->fullCData(oldp+112,((0x3fU & ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU)))),6);
    tracep->fullBit(oldp+113,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
    tracep->fullBit(oldp+114,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__actual_br_direction));
    tracep->fullCData(oldp+115,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
    tracep->fullCData(oldp+116,((0xffU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX) 
                                          >> 4U))),8);
    tracep->fullCData(oldp+117,((0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX))),4);
    tracep->fullCData(oldp+118,((0xffU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                          >> 8U))),8);
    tracep->fullCData(oldp+119,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 4U))),4);
    tracep->fullBit(oldp+120,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x11U))));
    tracep->fullBit(oldp+121,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x10U))));
    tracep->fullIData(oldp+122,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  << 0x10U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               >> 0x10U))),32);
    tracep->fullIData(oldp+123,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 4U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x1cU))),32);
    tracep->fullIData(oldp+124,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 4U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x1cU))),32);
    tracep->fullIData(oldp+125,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 4U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x1cU))),32);
    tracep->fullCData(oldp+126,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x17U))),5);
    tracep->fullBit(oldp+127,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x16U))));
    tracep->fullCData(oldp+128,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         >> 0x12U))),4);
    tracep->fullIData(oldp+129,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX),32);
    tracep->fullIData(oldp+130,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    tracep->fullIData(oldp+131,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__newpc_AGEX),32);
    tracep->fullBit(oldp+132,(((0x18U == (0x3fU & (
                                                   (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x1cU))))
                                ? 1U : 0U)));
    tracep->fullIData(oldp+133,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  << 0xeU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              >> 0x12U))),32);
    tracep->fullIData(oldp+134,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0xeU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x12U))),32);
    tracep->fullIData(oldp+135,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0xeU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                              >> 0x12U))),32);
    tracep->fullIData(oldp+136,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0xeU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                              >> 0x12U))),32);
    tracep->fullBit(oldp+137,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                     >> 0x11U))));
    tracep->fullBit(oldp+138,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                     >> 0x10U))));
    tracep->fullIData(oldp+139,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  << 0x10U) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                               >> 0x10U))),32);
    tracep->fullCData(oldp+140,((0xffU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                          >> 8U))),8);
    tracep->fullCData(oldp+141,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                         >> 4U))),4);
    tracep->fullCData(oldp+142,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
    tracep->fullCData(oldp+143,((7U & ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                        << 2U) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x1eU)))),3);
    tracep->fullCData(oldp+144,((0x7fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          >> 0xbU))),7);
    tracep->fullCData(oldp+145,((0x7fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x12U))),7);
    tracep->fullCData(oldp+146,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE),6);
    tracep->fullCData(oldp+147,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_I_DE),4);
    tracep->fullCData(oldp+148,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    tracep->fullIData(oldp+149,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
    tracep->fullBit(oldp+150,((1U & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 0x33U)))));
    tracep->fullCData(oldp+151,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          >> 1U))),5);
    tracep->fullCData(oldp+152,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          >> 6U))),5);
    tracep->fullCData(oldp+153,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x19U))),5);
    tracep->fullBit(oldp+154,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__wr_reg_DE));
    tracep->fullBit(oldp+155,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__rs1_read_DE));
    tracep->fullBit(oldp+156,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__rs2_read_DE));
    tracep->fullCData(oldp+157,((0x1fU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x2eU)))),5);
    tracep->fullIData(oldp+158,((IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                         >> 0xeU))),32);
    tracep->fullCData(oldp+159,((0xfU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                 >> 0xaU)))),4);
    tracep->fullBit(oldp+160,((1U & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 9U)))));
    tracep->fullCData(oldp+161,((0x1fU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE) 
                                          >> 5U))),5);
    tracep->fullCData(oldp+162,((0x1fU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE) 
                                          >> 4U))),5);
    tracep->fullCData(oldp+163,((0x1fU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 4U)))),5);
    tracep->fullCData(oldp+164,((0xfU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE) 
                                         >> 1U))),4);
    tracep->fullCData(oldp+165,((0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE))),4);
    tracep->fullCData(oldp+166,((0xfU & (IData)(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE))),4);
    tracep->fullBit(oldp+167,((1U & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE))));
    tracep->fullBit(oldp+168,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__is_type_I_AGEX_Valid));
    tracep->fullBit(oldp+169,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__is_type_I_MEM_Valid));
    tracep->fullBit(oldp+170,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__is_type_I_WB_Valid));
    tracep->fullBit(oldp+171,((1U & (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[2U] 
                                     >> 0x1cU))));
    tracep->fullIData(oldp+172,(((vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[2U] 
                                  << 4U) | (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U] 
                                            >> 0x1cU))),32);
    tracep->fullCData(oldp+173,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__memaddr_pt_FE),8);
    tracep->fullCData(oldp+174,((3U & (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U] 
                                       >> 0x1aU))),2);
    tracep->fullIData(oldp+175,((0x3ffffffU & vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U])),26);
    tracep->fullIData(oldp+176,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[0U]),32);
    tracep->fullBit(oldp+177,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__is_BTB_hit_FE));
    tracep->fullBit(oldp+178,(((2U <= (3U & (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U] 
                                             >> 0x1aU)))
                                ? 1U : 0U)));
    tracep->fullIData(oldp+179,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__guessed_br_address),32);
    tracep->fullCData(oldp+180,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                          >> 0xfU))),6);
    tracep->fullIData(oldp+181,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                  << 0x11U) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                               >> 0xfU))),32);
    tracep->fullIData(oldp+182,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                  << 0xbU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                              >> 0x15U))),32);
    tracep->fullIData(oldp+183,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                  << 0xbU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                              >> 0x15U))),32);
    tracep->fullCData(oldp+184,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
    tracep->fullIData(oldp+185,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                  << 0x11U) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xfU))),32);
    tracep->fullIData(oldp+186,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                  << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                               >> 4U))),32);
    tracep->fullBit(oldp+187,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                     >> 4U))));
    tracep->fullCData(oldp+188,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                          >> 0xaU))),5);
    tracep->fullBit(oldp+189,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                     >> 9U))));
    tracep->fullCData(oldp+190,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                         >> 5U))),4);
    tracep->fullCData(oldp+191,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                          >> 0xeU))),6);
    tracep->fullIData(oldp+192,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                              >> 0x14U))),32);
    tracep->fullIData(oldp+193,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                              >> 0x14U))),32);
    tracep->fullIData(oldp+194,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                               >> 0xeU))),32);
    tracep->fullCData(oldp+195,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
    tracep->fullCData(oldp+196,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                         >> 4U))),4);
    tracep->fullIData(oldp+197,((IData)((vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_WB 
                                         >> 0x20U))),32);
    tracep->fullIData(oldp+198,((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_WB)),32);
    tracep->fullBit(oldp+199,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 8U))));
    tracep->fullCData(oldp+200,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                          >> 9U))),5);
    tracep->fullIData(oldp+201,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                               >> 0xeU))),32);
    __Vtemp_hfabb119d__0[1U] = (((IData)((((QData)((IData)(
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
                                                                 >> 0xfU))))))) 
                                 >> 0x12U) | ((IData)(
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
                                              << 0xeU));
    __Vtemp_h02dc9f9b__0[0U] = (((IData)((((QData)((IData)(
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
                                                                 >> 0xfU))))))) 
                                 << 0xeU) | ((0x3e00U 
                                              & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                 >> 1U)) 
                                             | ((0x100U 
                                                 & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                    >> 1U)) 
                                                | ((0xf0U 
                                                    & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                       >> 1U)) 
                                                   | (0xfU 
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
    tracep->fullWData(oldp+202,(__Vtemp_h02dc9f9b__0),148);
    tracep->fullIData(oldp+207,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__dmem
                                [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 0x11U))]),32);
    tracep->fullIData(oldp+208,(((0x17U == (0x3fU & 
                                            (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xfU)))
                                  ? vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              >> 0x11U))]
                                  : ((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                      << 0x11U) | (
                                                   vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                   >> 0xfU)))),32);
    __Vtemp_h812b39df__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x19U)))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                            << 0x36U) 
                                           | (((QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_I_DE)) 
                                               << 0x32U) 
                                              | (0x3ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U]))))))));
    __Vtemp_h812b39df__0[1U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE 
                                 << 0x1cU) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x19U)))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_I_DE)) 
                                                              << 0x32U) 
                                                             | (0x3ffffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U]))))))) 
                                                      >> 0x20U)));
    __Vtemp_h812b39df__0[2U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE 
                                 >> 4U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                           [(0x1fU 
                                             & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                >> 6U))] 
                                           << 0x1cU));
    __Vtemp_h812b39df__0[3U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                            >> 6U))] 
                                 >> 4U) | ((IData)(
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                       << 0xeU) 
                                                                      | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                         >> 0x12U)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                                                      [
                                                                      (0x1fU 
                                                                       & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                          >> 1U))])))) 
                                           << 0x1cU));
    __Vtemp_h812b39df__0[4U] = (((IData)((((QData)((IData)(
                                                           ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                             << 0xeU) 
                                                            | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                               >> 0x12U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                >> 1U))])))) 
                                 >> 4U) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                        << 0xeU) 
                                                                       | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                          >> 0x12U)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                                                       [
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                           >> 1U))]))) 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    __Vtemp_h812b39df__0[5U] = (((IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE) 
                                 << 0x1cU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                           << 0xeU) 
                                                                          | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                             >> 0x12U)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                              >> 1U))]))) 
                                                       >> 0x20U)) 
                                              >> 4U));
    __Vtemp_h812b39df__0[6U] = (((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x10U) | (0xfffcU 
                                               & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                  >> 0x10U))) 
                                | ((IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE) 
                                   >> 4U));
    __Vtemp_h812b39df__0[7U] = ((3U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x10U)) | 
                                ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x10U) | (0xfffcU 
                                               & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x10U))));
    __Vtemp_h812b39df__0[8U] = ((3U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x10U)) | 
                                ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  << 0x10U) | (0xfffcU 
                                               & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x10U))));
    __Vtemp_h812b39df__0[9U] = (3U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                      >> 0x10U));
    tracep->fullWData(oldp+209,(__Vtemp_h812b39df__0),290);
    tracep->fullIData(oldp+219,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                           >> 1U))]),32);
    tracep->fullIData(oldp+220,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                           >> 6U))]),32);
    tracep->fullIData(oldp+221,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[0]),32);
    tracep->fullIData(oldp+222,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[1]),32);
    tracep->fullIData(oldp+223,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[2]),32);
    tracep->fullIData(oldp+224,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[3]),32);
    tracep->fullIData(oldp+225,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[4]),32);
    tracep->fullIData(oldp+226,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[5]),32);
    tracep->fullIData(oldp+227,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[6]),32);
    tracep->fullIData(oldp+228,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[7]),32);
    tracep->fullIData(oldp+229,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[8]),32);
    tracep->fullIData(oldp+230,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[9]),32);
    tracep->fullIData(oldp+231,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[10]),32);
    tracep->fullIData(oldp+232,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[11]),32);
    tracep->fullIData(oldp+233,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[12]),32);
    tracep->fullIData(oldp+234,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[13]),32);
    tracep->fullIData(oldp+235,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[14]),32);
    tracep->fullIData(oldp+236,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[15]),32);
    tracep->fullIData(oldp+237,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[16]),32);
    tracep->fullIData(oldp+238,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[17]),32);
    tracep->fullIData(oldp+239,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[18]),32);
    tracep->fullIData(oldp+240,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[19]),32);
    tracep->fullIData(oldp+241,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[20]),32);
    tracep->fullIData(oldp+242,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[21]),32);
    tracep->fullIData(oldp+243,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[22]),32);
    tracep->fullIData(oldp+244,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[23]),32);
    tracep->fullIData(oldp+245,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[24]),32);
    tracep->fullIData(oldp+246,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[25]),32);
    tracep->fullIData(oldp+247,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[26]),32);
    tracep->fullIData(oldp+248,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[27]),32);
    tracep->fullIData(oldp+249,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[28]),32);
    tracep->fullIData(oldp+250,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[29]),32);
    tracep->fullIData(oldp+251,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[30]),32);
    tracep->fullIData(oldp+252,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[31]),32);
    tracep->fullBit(oldp+253,(vlSelf->clk));
    tracep->fullBit(oldp+254,(vlSelf->reset));
    tracep->fullCData(oldp+255,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__pt_AGEX
                                [(0xffU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX) 
                                           >> 4U))]),2);
    tracep->fullIData(oldp+256,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX
                                [(0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX))]),26);
    tracep->fullIData(oldp+257,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX
                                [(0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX))]),32);
    tracep->fullIData(oldp+258,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[0]),32);
    tracep->fullIData(oldp+259,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[1]),32);
    tracep->fullIData(oldp+260,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[2]),32);
    tracep->fullIData(oldp+261,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[3]),32);
    tracep->fullIData(oldp+262,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[4]),32);
    tracep->fullIData(oldp+263,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[5]),32);
    tracep->fullIData(oldp+264,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[6]),32);
    tracep->fullIData(oldp+265,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[7]),32);
    tracep->fullIData(oldp+266,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[8]),32);
    tracep->fullIData(oldp+267,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[9]),32);
    tracep->fullIData(oldp+268,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[10]),32);
    tracep->fullIData(oldp+269,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[11]),32);
    tracep->fullIData(oldp+270,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[12]),32);
    tracep->fullIData(oldp+271,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[13]),32);
    tracep->fullIData(oldp+272,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[14]),32);
    tracep->fullIData(oldp+273,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[15]),32);
    tracep->fullIData(oldp+274,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[16]),32);
    tracep->fullIData(oldp+275,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[17]),32);
    tracep->fullIData(oldp+276,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[18]),32);
    tracep->fullIData(oldp+277,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[19]),32);
    tracep->fullIData(oldp+278,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[20]),32);
    tracep->fullIData(oldp+279,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[21]),32);
    tracep->fullIData(oldp+280,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[22]),32);
    tracep->fullIData(oldp+281,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[23]),32);
    tracep->fullIData(oldp+282,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[24]),32);
    tracep->fullIData(oldp+283,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[25]),32);
    tracep->fullIData(oldp+284,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[26]),32);
    tracep->fullIData(oldp+285,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[27]),32);
    tracep->fullIData(oldp+286,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[28]),32);
    tracep->fullIData(oldp+287,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[29]),32);
    tracep->fullIData(oldp+288,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[30]),32);
    tracep->fullIData(oldp+289,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[31]),32);
    tracep->fullIData(oldp+290,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[0]),32);
    tracep->fullIData(oldp+291,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[1]),32);
    tracep->fullIData(oldp+292,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[2]),32);
    tracep->fullIData(oldp+293,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[3]),32);
    tracep->fullIData(oldp+294,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[4]),32);
    tracep->fullIData(oldp+295,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[5]),32);
    tracep->fullIData(oldp+296,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[6]),32);
    tracep->fullIData(oldp+297,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[7]),32);
    tracep->fullIData(oldp+298,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[8]),32);
    tracep->fullIData(oldp+299,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[9]),32);
    tracep->fullIData(oldp+300,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[10]),32);
    tracep->fullIData(oldp+301,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[11]),32);
    tracep->fullIData(oldp+302,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[12]),32);
    tracep->fullIData(oldp+303,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[13]),32);
    tracep->fullIData(oldp+304,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[14]),32);
    tracep->fullIData(oldp+305,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[15]),32);
    tracep->fullIData(oldp+306,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[16]),32);
    tracep->fullIData(oldp+307,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[17]),32);
    tracep->fullIData(oldp+308,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[18]),32);
    tracep->fullIData(oldp+309,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[19]),32);
    tracep->fullIData(oldp+310,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[20]),32);
    tracep->fullIData(oldp+311,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[21]),32);
    tracep->fullIData(oldp+312,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[22]),32);
    tracep->fullIData(oldp+313,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[23]),32);
    tracep->fullIData(oldp+314,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[24]),32);
    tracep->fullIData(oldp+315,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[25]),32);
    tracep->fullIData(oldp+316,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[26]),32);
    tracep->fullIData(oldp+317,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[27]),32);
    tracep->fullIData(oldp+318,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[28]),32);
    tracep->fullIData(oldp+319,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[29]),32);
    tracep->fullIData(oldp+320,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[30]),32);
    tracep->fullIData(oldp+321,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[31]),32);
    tracep->fullBit(oldp+322,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_FE));
    tracep->fullBit(oldp+323,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_FE));
    tracep->fullBit(oldp+324,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_AGEX));
    tracep->fullBit(oldp+325,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_AGEX));
    tracep->fullBit(oldp+326,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_MEM));
    tracep->fullIData(oldp+327,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
    tracep->fullCData(oldp+328,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__wcsrno_WB),4);
    tracep->fullBit(oldp+329,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__wr_csr_WB));
}
