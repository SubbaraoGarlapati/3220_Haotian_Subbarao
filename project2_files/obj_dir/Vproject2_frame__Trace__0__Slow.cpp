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
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declBus(c+1,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+27,"FE_latch_out", false,-1, 131,0);
    tracep->declArray(c+32,"DE_latch_out", false,-1, 243,0);
    tracep->declArray(c+40,"AGEX_latch_out", false,-1, 180,0);
    tracep->declArray(c+46,"MEM_latch_out", false,-1, 147,0);
    tracep->declBus(c+51,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+52,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+250,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+251,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+54,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declBus(c+55,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declQuad(c+56,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+252,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+253,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+254,"from_WB_to_MEM", false,-1, 0,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declBus(c+252,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+253,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+32,"from_DE_latch", false,-1, 243,0);
    tracep->declArray(c+40,"AGEX_latch_out", false,-1, 180,0);
    tracep->declQuad(c+52,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+54,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declArray(c+40,"AGEX_latch", false,-1, 180,0);
    tracep->declArray(c+58,"AGEX_latch_contents", false,-1, 180,0);
    tracep->declBus(c+64,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+65,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+66,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+67,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+68,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+69,"br_cond_AGEX", false,-1);
    tracep->declBus(c+70,"bus_canary_AGEX", false,-1, 3,0);
    tracep->declBus(c+71,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+72,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+73,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+74,"rd_AGEX", false,-1, 4,0);
    tracep->declBit(c+75,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+76,"type_I_AGEX", false,-1, 3,0);
    tracep->declBus(c+71,"s_regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+72,"s_regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+73,"s_sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+77,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+78,"newpc_AGEX", false,-1, 31,0);
    tracep->declBit(c+79,"wr_mem_AGEX", false,-1);
    tracep->declBus(c+72,"wr_val_AGEX", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declArray(c+27,"from_FE_latch", false,-1, 131,0);
    tracep->declBus(c+54,"from_AGEX_to_DE", false,-1, 9,0);
    tracep->declBus(c+55,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declQuad(c+56,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+51,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+32,"DE_latch_out", false,-1, 243,0);
    tracep->declArray(c+32,"DE_latch", false,-1, 243,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+152+i*1,"regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+11+i*1,"csr_regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+80,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+81,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+82,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+83,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+142,"DE_latch_contents", false,-1, 243,0);
    tracep->declBus(c+84,"bus_canary_DE", false,-1, 3,0);
    tracep->declBus(c+85,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+86,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+87,"op_DE", false,-1, 6,0);
    tracep->declBus(c+88,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+89,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+90,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+91,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBit(c+92,"wr_reg_WB", false,-1);
    tracep->declBus(c+93,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+94,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+95,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+150,"regval1_DE", false,-1, 31,0);
    tracep->declBus(c+151,"regval2_DE", false,-1, 31,0);
    tracep->declBit(c+96,"wr_reg_DE", false,-1);
    tracep->declBit(c+97,"rs1_read_DE", false,-1);
    tracep->declBit(c+98,"rs2_read_DE", false,-1);
    tracep->declBus(c+99,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+100,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+101,"wcsrno_WB", false,-1, 3,0);
    tracep->declBit(c+102,"wr_csr_WB", false,-1);
    tracep->declBus(c+103,"rd_AGEX", false,-1, 4,0);
    tracep->declBus(c+104,"rd_MEM", false,-1, 4,0);
    tracep->declBus(c+105,"rd_WB", false,-1, 4,0);
    tracep->declBus(c+106,"type_I_AGEX", false,-1, 3,0);
    tracep->declBus(c+107,"type_I_MEM", false,-1, 3,0);
    tracep->declBus(c+108,"type_I_WB", false,-1, 3,0);
    tracep->declBit(c+109,"br_cond_AGEX_in_DE", false,-1);
    tracep->declBit(c+51,"pipeline_stall_DE", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+110,"is_type_I_AGEX_Valid", false,-1);
    tracep->declBit(c+111,"is_type_I_MEM_Valid", false,-1);
    tracep->declBit(c+112,"is_type_I_WB_Valid", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declBus(c+51,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+52,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+250,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+251,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+27,"FE_latch_out", false,-1, 131,0);
    tracep->declArray(c+27,"FE_latch", false,-1, 131,0);
    tracep->declBus(c+2,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+3,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+4,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+51,"stall_pipe_FE", false,-1);
    tracep->declArray(c+5,"FE_latch_contents", false,-1, 131,0);
    tracep->declBus(c+10,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+255,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBit(c+113,"br_cond_AGEX_in_FE", false,-1);
    tracep->declBus(c+114,"newpc_AGEX", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declBus(c+254,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+40,"from_AGEX_latch", false,-1, 180,0);
    tracep->declArray(c+46,"MEM_latch_out", false,-1, 147,0);
    tracep->declBus(c+250,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+55,"from_MEM_to_DE", false,-1, 8,0);
    tracep->declBus(c+252,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+46,"MEM_latch", false,-1, 147,0);
    tracep->declArray(c+135,"MEM_latch_contents", false,-1, 147,0);
    tracep->declBus(c+115,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+116,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+117,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+118,"PC_MEM", false,-1, 31,0);
    tracep->declBus(c+119,"bus_canary_MEM", false,-1, 3,0);
    tracep->declBus(c+120,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+140,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+121,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+122,"wr_mem_MEM", false,-1);
    tracep->declBus(c+120,"temp_aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+141,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+123,"rd_MEM", false,-1, 4,0);
    tracep->declBit(c+124,"wr_reg_MEM", false,-1);
    tracep->declBus(c+125,"type_I_MEM", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__my_WB_stage__0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_init_sub__TOP__project2_frame__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+185,"reset", false,-1);
    tracep->declArray(c+46,"from_MEM_latch", false,-1, 147,0);
    tracep->declBus(c+251,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+56,"from_WB_to_DE", false,-1, 51,0);
    tracep->declBus(c+253,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+254,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBus(c+126,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+127,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+128,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+129,"inst_count_WB", false,-1, 31,0);
    tracep->declBus(c+130,"bus_canary_WB", false,-1, 3,0);
    tracep->declBus(c+131,"type_I_WB", false,-1, 3,0);
    tracep->declBit(c+132,"wr_reg_WB", false,-1);
    tracep->declBus(c+133,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+133,"rd_WB", false,-1, 4,0);
    tracep->declBus(c+134,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+256,"wcsrno_WB", false,-1, 3,0);
    tracep->declBit(c+257,"wr_csr_WB", false,-1);
    tracep->declBus(c+134,"aluout_WB", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+186+i*1,"last_WB_value", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+218+i*1,"WB_counters", true,(i+0), 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp_h2b13a149__0;
    VlWide<6>/*191:0*/ __Vtemp_h35bfdd85__0;
    VlWide<3>/*95:0*/ __Vtemp_hfabb119d__0;
    VlWide<5>/*159:0*/ __Vtemp_h02dc9f9b__0;
    VlWide<8>/*255:0*/ __Vtemp_h5dd3a101__0;
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
    tracep->fullWData(oldp+40,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch),181);
    tracep->fullWData(oldp+46,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch),148);
    tracep->fullBit(oldp+51,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__pipeline_stall_DE));
    tracep->fullQData(oldp+52,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE),33);
    tracep->fullSData(oldp+54,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE),10);
    tracep->fullSData(oldp+55,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE),9);
    tracep->fullQData(oldp+56,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE),52);
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
                                                           ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             << 0x12U) 
                                                            | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               >> 0xeU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
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
                                                           ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             << 0x12U) 
                                                            | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               >> 0xeU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 >> 0x11U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                           << 0x12U) 
                                                                          | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                             >> 0xeU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 0xfU));
    __Vtemp_h35bfdd85__0[3U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                           << 0x2cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                >> 0x14U)))) 
                                 << 0x15U) | ((0x1f8000U 
                                               & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  << 1U)) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                              << 0x12U) 
                                                                             | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                                >> 0xeU)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                          >> 0x20U)) 
                                                 >> 0x11U)));
    __Vtemp_h35bfdd85__0[4U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                           << 0x2cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                >> 0x14U)))) 
                                 >> 0xbU) | ((IData)(
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
                                             << 0x15U));
    __Vtemp_h35bfdd85__0[5U] = ((IData)(((((QData)((IData)(
                                                           vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                           << 0x2cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                >> 0x14U))) 
                                         >> 0x20U)) 
                                >> 0xbU);
    tracep->fullWData(oldp+58,(__Vtemp_h35bfdd85__0),181);
    tracep->fullIData(oldp+64,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                 << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 0x14U))),32);
    tracep->fullIData(oldp+65,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x14U))),32);
    tracep->fullIData(oldp+66,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0xeU))),32);
    tracep->fullIData(oldp+67,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x14U))),32);
    tracep->fullCData(oldp+68,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0xeU))),6);
    tracep->fullBit(oldp+69,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
    tracep->fullCData(oldp+70,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
    tracep->fullIData(oldp+71,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0xeU))),32);
    tracep->fullIData(oldp+72,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0xeU))),32);
    tracep->fullIData(oldp+73,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                 << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0xeU))),32);
    tracep->fullCData(oldp+74,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 9U))),5);
    tracep->fullBit(oldp+75,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                    >> 8U))));
    tracep->fullCData(oldp+76,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 4U))),4);
    tracep->fullIData(oldp+77,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    tracep->fullIData(oldp+78,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__newpc_AGEX),32);
    tracep->fullBit(oldp+79,(((0x18U == (0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0xeU)))
                               ? 1U : 0U)));
    tracep->fullIData(oldp+80,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 4U))),32);
    tracep->fullIData(oldp+81,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                              >> 4U))),32);
    tracep->fullIData(oldp+82,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                 << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                              >> 4U))),32);
    tracep->fullIData(oldp+83,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                 << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                              >> 4U))),32);
    tracep->fullCData(oldp+84,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
    tracep->fullCData(oldp+85,((7U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x10U))),3);
    tracep->fullCData(oldp+86,((0x7fU & ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 3U) | 
                                         (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1dU)))),7);
    tracep->fullCData(oldp+87,((0x7fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 4U))),7);
    tracep->fullCData(oldp+88,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE),6);
    tracep->fullCData(oldp+89,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_I_DE),4);
    tracep->fullCData(oldp+90,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    tracep->fullIData(oldp+91,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
    tracep->fullBit(oldp+92,((1U & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                            >> 0x33U)))));
    tracep->fullCData(oldp+93,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0x13U))),5);
    tracep->fullCData(oldp+94,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0x18U))),5);
    tracep->fullCData(oldp+95,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0xbU))),5);
    tracep->fullBit(oldp+96,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__wr_reg_DE));
    tracep->fullBit(oldp+97,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__rs1_read_DE));
    tracep->fullBit(oldp+98,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__rs2_read_DE));
    tracep->fullCData(oldp+99,((0x1fU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                 >> 0x2eU)))),5);
    tracep->fullIData(oldp+100,((IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                         >> 0xeU))),32);
    tracep->fullCData(oldp+101,((0xfU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                 >> 0xaU)))),4);
    tracep->fullBit(oldp+102,((1U & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 9U)))));
    tracep->fullCData(oldp+103,((0x1fU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE) 
                                          >> 5U))),5);
    tracep->fullCData(oldp+104,((0x1fU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE) 
                                          >> 4U))),5);
    tracep->fullCData(oldp+105,((0x1fU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 4U)))),5);
    tracep->fullCData(oldp+106,((0xfU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE) 
                                         >> 1U))),4);
    tracep->fullCData(oldp+107,((0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE))),4);
    tracep->fullCData(oldp+108,((0xfU & (IData)(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE))),4);
    tracep->fullBit(oldp+109,((1U & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE))));
    tracep->fullBit(oldp+110,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_AGEX_Valid));
    tracep->fullBit(oldp+111,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_MEM_Valid));
    tracep->fullBit(oldp+112,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_WB_Valid));
    tracep->fullBit(oldp+113,((1U & (IData)((vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE 
                                             >> 0x20U)))));
    tracep->fullIData(oldp+114,((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE)),32);
    tracep->fullCData(oldp+115,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                          >> 0xfU))),6);
    tracep->fullIData(oldp+116,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                  << 0x11U) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                               >> 0xfU))),32);
    tracep->fullIData(oldp+117,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                  << 0xbU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                              >> 0x15U))),32);
    tracep->fullIData(oldp+118,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                  << 0xbU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                              >> 0x15U))),32);
    tracep->fullCData(oldp+119,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
    tracep->fullIData(oldp+120,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                  << 0x11U) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xfU))),32);
    tracep->fullIData(oldp+121,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                  << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                               >> 4U))),32);
    tracep->fullBit(oldp+122,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                     >> 4U))));
    tracep->fullCData(oldp+123,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                          >> 0xaU))),5);
    tracep->fullBit(oldp+124,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                     >> 9U))));
    tracep->fullCData(oldp+125,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                         >> 5U))),4);
    tracep->fullCData(oldp+126,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                          >> 0xeU))),6);
    tracep->fullIData(oldp+127,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                              >> 0x14U))),32);
    tracep->fullIData(oldp+128,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                  << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                              >> 0x14U))),32);
    tracep->fullIData(oldp+129,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                  << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                               >> 0xeU))),32);
    tracep->fullCData(oldp+130,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
    tracep->fullCData(oldp+131,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                         >> 4U))),4);
    tracep->fullBit(oldp+132,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 8U))));
    tracep->fullCData(oldp+133,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                          >> 9U))),5);
    tracep->fullIData(oldp+134,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
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
    tracep->fullWData(oldp+135,(__Vtemp_h02dc9f9b__0),148);
    tracep->fullIData(oldp+140,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__dmem
                                [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 0x11U))]),32);
    tracep->fullIData(oldp+141,(((0x17U == (0x3fU & 
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
                                 >> 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                              [(0x1fU 
                                                & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x18U))] 
                                              << 0xeU));
    __Vtemp_h5dd3a101__0[2U] = ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
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
    __Vtemp_h5dd3a101__0[3U] = (((IData)((((QData)((IData)(
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
    __Vtemp_h5dd3a101__0[4U] = ((0xfff00000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
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
    __Vtemp_h5dd3a101__0[5U] = (((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                              << 0x10U)) 
                                 | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                    >> 0x10U)) | (0xfff00000U 
                                                  & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                     << 0x10U)));
    __Vtemp_h5dd3a101__0[6U] = (((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              << 0x10U)) 
                                 | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0x10U)) | (0xfff00000U 
                                                  & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 0x10U)));
    __Vtemp_h5dd3a101__0[7U] = ((0xf0000U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 0x10U)) 
                                | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   >> 0x10U));
    tracep->fullWData(oldp+142,(__Vtemp_h5dd3a101__0),244);
    tracep->fullIData(oldp+150,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x13U))]),32);
    tracep->fullIData(oldp+151,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x18U))]),32);
    tracep->fullIData(oldp+152,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[0]),32);
    tracep->fullIData(oldp+153,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[1]),32);
    tracep->fullIData(oldp+154,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[2]),32);
    tracep->fullIData(oldp+155,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[3]),32);
    tracep->fullIData(oldp+156,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[4]),32);
    tracep->fullIData(oldp+157,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[5]),32);
    tracep->fullIData(oldp+158,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[6]),32);
    tracep->fullIData(oldp+159,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[7]),32);
    tracep->fullIData(oldp+160,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[8]),32);
    tracep->fullIData(oldp+161,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[9]),32);
    tracep->fullIData(oldp+162,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[10]),32);
    tracep->fullIData(oldp+163,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[11]),32);
    tracep->fullIData(oldp+164,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[12]),32);
    tracep->fullIData(oldp+165,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[13]),32);
    tracep->fullIData(oldp+166,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[14]),32);
    tracep->fullIData(oldp+167,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[15]),32);
    tracep->fullIData(oldp+168,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[16]),32);
    tracep->fullIData(oldp+169,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[17]),32);
    tracep->fullIData(oldp+170,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[18]),32);
    tracep->fullIData(oldp+171,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[19]),32);
    tracep->fullIData(oldp+172,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[20]),32);
    tracep->fullIData(oldp+173,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[21]),32);
    tracep->fullIData(oldp+174,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[22]),32);
    tracep->fullIData(oldp+175,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[23]),32);
    tracep->fullIData(oldp+176,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[24]),32);
    tracep->fullIData(oldp+177,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[25]),32);
    tracep->fullIData(oldp+178,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[26]),32);
    tracep->fullIData(oldp+179,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[27]),32);
    tracep->fullIData(oldp+180,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[28]),32);
    tracep->fullIData(oldp+181,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[29]),32);
    tracep->fullIData(oldp+182,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[30]),32);
    tracep->fullIData(oldp+183,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[31]),32);
    tracep->fullBit(oldp+184,(vlSelf->clk));
    tracep->fullBit(oldp+185,(vlSelf->reset));
    tracep->fullIData(oldp+186,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[0]),32);
    tracep->fullIData(oldp+187,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[1]),32);
    tracep->fullIData(oldp+188,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[2]),32);
    tracep->fullIData(oldp+189,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[3]),32);
    tracep->fullIData(oldp+190,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[4]),32);
    tracep->fullIData(oldp+191,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[5]),32);
    tracep->fullIData(oldp+192,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[6]),32);
    tracep->fullIData(oldp+193,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[7]),32);
    tracep->fullIData(oldp+194,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[8]),32);
    tracep->fullIData(oldp+195,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[9]),32);
    tracep->fullIData(oldp+196,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[10]),32);
    tracep->fullIData(oldp+197,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[11]),32);
    tracep->fullIData(oldp+198,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[12]),32);
    tracep->fullIData(oldp+199,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[13]),32);
    tracep->fullIData(oldp+200,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[14]),32);
    tracep->fullIData(oldp+201,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[15]),32);
    tracep->fullIData(oldp+202,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[16]),32);
    tracep->fullIData(oldp+203,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[17]),32);
    tracep->fullIData(oldp+204,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[18]),32);
    tracep->fullIData(oldp+205,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[19]),32);
    tracep->fullIData(oldp+206,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[20]),32);
    tracep->fullIData(oldp+207,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[21]),32);
    tracep->fullIData(oldp+208,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[22]),32);
    tracep->fullIData(oldp+209,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[23]),32);
    tracep->fullIData(oldp+210,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[24]),32);
    tracep->fullIData(oldp+211,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[25]),32);
    tracep->fullIData(oldp+212,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[26]),32);
    tracep->fullIData(oldp+213,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[27]),32);
    tracep->fullIData(oldp+214,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[28]),32);
    tracep->fullIData(oldp+215,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[29]),32);
    tracep->fullIData(oldp+216,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[30]),32);
    tracep->fullIData(oldp+217,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[31]),32);
    tracep->fullIData(oldp+218,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[0]),32);
    tracep->fullIData(oldp+219,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[1]),32);
    tracep->fullIData(oldp+220,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[2]),32);
    tracep->fullIData(oldp+221,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[3]),32);
    tracep->fullIData(oldp+222,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[4]),32);
    tracep->fullIData(oldp+223,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[5]),32);
    tracep->fullIData(oldp+224,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[6]),32);
    tracep->fullIData(oldp+225,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[7]),32);
    tracep->fullIData(oldp+226,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[8]),32);
    tracep->fullIData(oldp+227,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[9]),32);
    tracep->fullIData(oldp+228,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[10]),32);
    tracep->fullIData(oldp+229,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[11]),32);
    tracep->fullIData(oldp+230,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[12]),32);
    tracep->fullIData(oldp+231,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[13]),32);
    tracep->fullIData(oldp+232,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[14]),32);
    tracep->fullIData(oldp+233,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[15]),32);
    tracep->fullIData(oldp+234,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[16]),32);
    tracep->fullIData(oldp+235,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[17]),32);
    tracep->fullIData(oldp+236,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[18]),32);
    tracep->fullIData(oldp+237,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[19]),32);
    tracep->fullIData(oldp+238,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[20]),32);
    tracep->fullIData(oldp+239,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[21]),32);
    tracep->fullIData(oldp+240,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[22]),32);
    tracep->fullIData(oldp+241,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[23]),32);
    tracep->fullIData(oldp+242,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[24]),32);
    tracep->fullIData(oldp+243,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[25]),32);
    tracep->fullIData(oldp+244,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[26]),32);
    tracep->fullIData(oldp+245,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[27]),32);
    tracep->fullIData(oldp+246,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[28]),32);
    tracep->fullIData(oldp+247,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[29]),32);
    tracep->fullIData(oldp+248,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[30]),32);
    tracep->fullIData(oldp+249,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[31]),32);
    tracep->fullBit(oldp+250,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_FE));
    tracep->fullBit(oldp+251,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_FE));
    tracep->fullBit(oldp+252,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_AGEX));
    tracep->fullBit(oldp+253,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_AGEX));
    tracep->fullBit(oldp+254,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_MEM));
    tracep->fullIData(oldp+255,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
    tracep->fullCData(oldp+256,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__wcsrno_WB),4);
    tracep->fullBit(oldp+257,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__wr_csr_WB));
}
