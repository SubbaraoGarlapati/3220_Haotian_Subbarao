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
    tracep->declBit(c+172,"clk", false,-1);
    tracep->declBit(c+173,"reset", false,-1);
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
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
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+11+i*1,"csr_regs", true,(i+0), 31,0);
    }
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
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__my_WB_stage__0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
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
    VlWide<5>/*159:0*/ __Vtemp_hcce6bf99__0;
    VlWide<8>/*255:0*/ __Vtemp_hb8ff8a27__0;
    // Body
    tracep->fullIData(oldp+1,(vlSymsp->TOP__project2_frame.__PVT__cycle_count),32);
    tracep->fullIData(oldp+2,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    tracep->fullIData(oldp+3,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                              [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))]),32);
    tracep->fullIData(oldp+4,(((IData)(4U) + vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
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
                                                           ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             << 0x12U) 
                                                            | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               >> 0xeU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 << 0xeU) | (0x3fffU 
                                             & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U]));
    __Vtemp_hcce6bf99__0[1U] = (((IData)((((QData)((IData)(
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
                                              << 0xeU));
    __Vtemp_hcce6bf99__0[2U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                           << 0x2cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                >> 0x14U)))) 
                                 << 0x14U) | ((0xfc000U 
                                               & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U]) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                              << 0x12U) 
                                                                             | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                                >> 0xeU)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                          >> 0x20U)) 
                                                 >> 0x12U)));
    __Vtemp_hcce6bf99__0[3U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                           << 0x2cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                >> 0x14U)))) 
                                 >> 0xcU) | ((IData)(
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
                                             << 0x14U));
    __Vtemp_hcce6bf99__0[4U] = ((IData)(((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                           << 0x2cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                >> 0x14U))) 
                                         >> 0x20U)) 
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
    tracep->fullBit(oldp+93,((((((((0xcU == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                   | (1U == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                  | (0x16U == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                 | (0x19U == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                                | (0x1bU == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE))) 
                               | (0x15U == (IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE)))
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
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                               >> 0xeU))),32);
    __Vtemp_hb8ff8a27__0[0U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE 
                                 << 0xeU) | ((0x3e00U 
                                              & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 2U)) 
                                             | (((((((((0xcU 
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
                                                   ? 1U
                                                   : 0U) 
                                                 << 8U) 
                                                | (((IData)(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_I_DE) 
                                                    << 4U) 
                                                   | (0xfU 
                                                      & vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U])))));
    __Vtemp_hb8ff8a27__0[1U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE 
                                 >> 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                              [(0x1fU 
                                                & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x18U))] 
                                              << 0xeU));
    __Vtemp_hb8ff8a27__0[2U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
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
    __Vtemp_hb8ff8a27__0[3U] = (((IData)((((QData)((IData)(
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
    __Vtemp_hb8ff8a27__0[4U] = ((0xfff00000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
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
    __Vtemp_hb8ff8a27__0[5U] = (((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                              << 0x10U)) 
                                 | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                    >> 0x10U)) | (0xfff00000U 
                                                  & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                     << 0x10U)));
    __Vtemp_hb8ff8a27__0[6U] = (((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              << 0x10U)) 
                                 | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0x10U)) | (0xfff00000U 
                                                  & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 0x10U)));
    __Vtemp_hb8ff8a27__0[7U] = ((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 0x10U)) 
                                | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   >> 0x10U));
    tracep->fullWData(oldp+130,(__Vtemp_hb8ff8a27__0),244);
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
}
