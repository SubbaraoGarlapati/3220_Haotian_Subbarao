// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vproject2_frame__Syms.h"


void Vproject2_frame___024root__trace_chg_sub_0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep);

void Vproject2_frame___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_chg_top_0\n"); );
    // Init
    Vproject2_frame___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproject2_frame___024root*>(voidSelf);
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vproject2_frame___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vproject2_frame___024root__trace_chg_sub_0(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<6>/*191:0*/ __Vtemp_hfc0f6a2f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc247e411__0;
    VlWide<6>/*191:0*/ __Vtemp_hf0130e58__0;
    VlWide<3>/*95:0*/ __Vtemp_hfabb119d__0;
    VlWide<5>/*159:0*/ __Vtemp_h02dc9f9b__0;
    VlWide<10>/*319:0*/ __Vtemp_h812b39df__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSymsp->TOP__project2_frame.__PVT__cycle_count),32);
        tracep->chgIData(oldp+1,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__hit_prediction_AGEX),32);
        tracep->chgIData(oldp+2,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__branch_count_AGEX),32);
        tracep->chgIData(oldp+3,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        tracep->chgIData(oldp+4,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__imem
                                 [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                              >> 2U))]),32);
        tracep->chgIData(oldp+5,(((IData)(4U) + vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        tracep->chgIData(oldp+6,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        tracep->chgCData(oldp+7,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                          >> 2U))),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
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
        tracep->chgWData(oldp+8,(__Vtemp_hfc0f6a2f__0),178);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+14,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
        tracep->chgIData(oldp+15,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
        tracep->chgIData(oldp+16,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
        tracep->chgIData(oldp+17,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
        tracep->chgIData(oldp+18,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
        tracep->chgIData(oldp+19,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
        tracep->chgIData(oldp+20,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
        tracep->chgIData(oldp+21,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
        tracep->chgIData(oldp+22,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
        tracep->chgIData(oldp+23,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
        tracep->chgIData(oldp+24,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
        tracep->chgIData(oldp+25,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
        tracep->chgIData(oldp+26,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
        tracep->chgIData(oldp+27,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
        tracep->chgIData(oldp+28,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
        tracep->chgIData(oldp+29,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgCData(oldp+30,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__bhr_AGEX),8);
        tracep->chgIData(oldp+31,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[0]),26);
        tracep->chgIData(oldp+32,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[1]),26);
        tracep->chgIData(oldp+33,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[2]),26);
        tracep->chgIData(oldp+34,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[3]),26);
        tracep->chgIData(oldp+35,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[4]),26);
        tracep->chgIData(oldp+36,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[5]),26);
        tracep->chgIData(oldp+37,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[6]),26);
        tracep->chgIData(oldp+38,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[7]),26);
        tracep->chgIData(oldp+39,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[8]),26);
        tracep->chgIData(oldp+40,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[9]),26);
        tracep->chgIData(oldp+41,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[10]),26);
        tracep->chgIData(oldp+42,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[11]),26);
        tracep->chgIData(oldp+43,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[12]),26);
        tracep->chgIData(oldp+44,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[13]),26);
        tracep->chgIData(oldp+45,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[14]),26);
        tracep->chgIData(oldp+46,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[15]),26);
        tracep->chgIData(oldp+47,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[0]),32);
        tracep->chgIData(oldp+48,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[1]),32);
        tracep->chgIData(oldp+49,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[2]),32);
        tracep->chgIData(oldp+50,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[3]),32);
        tracep->chgIData(oldp+51,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[4]),32);
        tracep->chgIData(oldp+52,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[5]),32);
        tracep->chgIData(oldp+53,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[6]),32);
        tracep->chgIData(oldp+54,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[7]),32);
        tracep->chgIData(oldp+55,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[8]),32);
        tracep->chgIData(oldp+56,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[9]),32);
        tracep->chgIData(oldp+57,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[10]),32);
        tracep->chgIData(oldp+58,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[11]),32);
        tracep->chgIData(oldp+59,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[12]),32);
        tracep->chgIData(oldp+60,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[13]),32);
        tracep->chgIData(oldp+61,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[14]),32);
        tracep->chgIData(oldp+62,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX[15]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgSData(oldp+63,(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX),12);
        tracep->chgWData(oldp+64,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch),178);
        tracep->chgWData(oldp+70,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch),290);
        tracep->chgWData(oldp+80,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch),181);
        tracep->chgWData(oldp+86,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch),148);
        tracep->chgBit(oldp+91,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__pipeline_stall_DE));
        tracep->chgWData(oldp+92,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE),93);
        tracep->chgSData(oldp+95,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE),10);
        tracep->chgSData(oldp+96,(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE),9);
        tracep->chgQData(oldp+97,(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE),52);
        tracep->chgQData(oldp+99,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_WB),64);
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
        tracep->chgWData(oldp+101,(__Vtemp_hf0130e58__0),181);
        tracep->chgIData(oldp+107,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[9U] 
                                     << 0x1eU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  >> 2U))),32);
        tracep->chgIData(oldp+108,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     << 0x1eU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 2U))),32);
        tracep->chgIData(oldp+109,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 4U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1cU))),32);
        tracep->chgIData(oldp+110,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                     << 0x1eU) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 2U))),32);
        tracep->chgCData(oldp+111,((0x3fU & ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                              << 4U) 
                                             | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x1cU)))),6);
        tracep->chgBit(oldp+112,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
        tracep->chgBit(oldp+113,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__actual_br_direction));
        tracep->chgCData(oldp+114,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
        tracep->chgCData(oldp+115,((0xffU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX) 
                                             >> 4U))),8);
        tracep->chgCData(oldp+116,((0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX))),4);
        tracep->chgCData(oldp+117,((0xffU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 8U))),8);
        tracep->chgCData(oldp+118,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 4U))),4);
        tracep->chgBit(oldp+119,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x11U))));
        tracep->chgBit(oldp+120,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x10U))));
        tracep->chgIData(oldp+121,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     << 0x10U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0x10U))),32);
        tracep->chgIData(oldp+122,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 4U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x1cU))),32);
        tracep->chgIData(oldp+123,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 4U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x1cU))),32);
        tracep->chgIData(oldp+124,(((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     << 4U) | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x1cU))),32);
        tracep->chgCData(oldp+125,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x17U))),5);
        tracep->chgBit(oldp+126,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x16U))));
        tracep->chgCData(oldp+127,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x12U))),4);
        tracep->chgIData(oldp+128,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX),32);
        tracep->chgIData(oldp+129,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
        tracep->chgIData(oldp+130,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__newpc_AGEX),32);
        tracep->chgBit(oldp+131,(((0x18U == (0x3fU 
                                             & ((vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+132,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                     << 0xeU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 >> 0x12U))),32);
        tracep->chgIData(oldp+133,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     << 0xeU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x12U))),32);
        tracep->chgIData(oldp+134,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     << 0xeU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                 >> 0x12U))),32);
        tracep->chgIData(oldp+135,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                     << 0xeU) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                 >> 0x12U))),32);
        tracep->chgBit(oldp+136,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        >> 0x11U))));
        tracep->chgBit(oldp+137,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        >> 0x10U))));
        tracep->chgIData(oldp+138,(((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                     << 0x10U) | (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                  >> 0x10U))),32);
        tracep->chgCData(oldp+139,((0xffU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                             >> 8U))),8);
        tracep->chgCData(oldp+140,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                            >> 4U))),4);
        tracep->chgCData(oldp+141,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
        tracep->chgCData(oldp+142,((7U & ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                           << 2U) | 
                                          (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+143,((0x7fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             >> 0xbU))),7);
        tracep->chgCData(oldp+144,((0x7fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0x12U))),7);
        tracep->chgCData(oldp+145,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__op_I_DE),6);
        tracep->chgCData(oldp+146,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_I_DE),4);
        tracep->chgCData(oldp+147,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        tracep->chgIData(oldp+148,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
        tracep->chgBit(oldp+149,((1U & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 0x33U)))));
        tracep->chgCData(oldp+150,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             >> 1U))),5);
        tracep->chgCData(oldp+151,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             >> 6U))),5);
        tracep->chgCData(oldp+152,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0x19U))),5);
        tracep->chgBit(oldp+153,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__wr_reg_DE));
        tracep->chgBit(oldp+154,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__rs1_read_DE));
        tracep->chgBit(oldp+155,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__rs2_read_DE));
        tracep->chgCData(oldp+156,((0x1fU & (IData)(
                                                    (vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                     >> 0x2eU)))),5);
        tracep->chgIData(oldp+157,((IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                            >> 0xeU))),32);
        tracep->chgCData(oldp+158,((0xfU & (IData)(
                                                   (vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                    >> 0xaU)))),4);
        tracep->chgBit(oldp+159,((1U & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 9U)))));
        tracep->chgCData(oldp+160,((0x1fU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE) 
                                             >> 5U))),5);
        tracep->chgCData(oldp+161,((0x1fU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE) 
                                             >> 4U))),5);
        tracep->chgCData(oldp+162,((0x1fU & (IData)(
                                                    (vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                     >> 4U)))),5);
        tracep->chgCData(oldp+163,((0xfU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE) 
                                            >> 1U))),4);
        tracep->chgCData(oldp+164,((0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_MEM_to_DE))),4);
        tracep->chgCData(oldp+165,((0xfU & (IData)(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE))),4);
        tracep->chgBit(oldp+166,((1U & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_DE))));
        tracep->chgBit(oldp+167,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__is_type_I_AGEX_Valid));
        tracep->chgBit(oldp+168,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__is_type_I_MEM_Valid));
        tracep->chgBit(oldp+169,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__is_type_I_WB_Valid));
        tracep->chgBit(oldp+170,((1U & (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[2U] 
                                        >> 0x1cU))));
        tracep->chgIData(oldp+171,(((vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[2U] 
                                     << 4U) | (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U] 
                                               >> 0x1cU))),32);
        tracep->chgCData(oldp+172,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__memaddr_pt_FE),8);
        tracep->chgCData(oldp+173,((3U & (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U] 
                                          >> 0x1aU))),2);
        tracep->chgIData(oldp+174,((0x3ffffffU & vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U])),26);
        tracep->chgIData(oldp+175,(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[0U]),32);
        tracep->chgBit(oldp+176,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__is_BTB_hit_FE));
        tracep->chgBit(oldp+177,(((2U <= (3U & (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U] 
                                                >> 0x1aU)))
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+178,(vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__guessed_br_address),32);
        tracep->chgCData(oldp+179,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xfU))),6);
        tracep->chgIData(oldp+180,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                     << 0x11U) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                  >> 0xfU))),32);
        tracep->chgIData(oldp+181,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                     << 0xbU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                 >> 0x15U))),32);
        tracep->chgIData(oldp+182,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                     << 0xbU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                 >> 0x15U))),32);
        tracep->chgCData(oldp+183,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
        tracep->chgIData(oldp+184,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                     << 0x11U) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  >> 0xfU))),32);
        tracep->chgIData(oldp+185,(((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                     << 0x1cU) | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                  >> 4U))),32);
        tracep->chgBit(oldp+186,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        >> 4U))));
        tracep->chgCData(oldp+187,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 0xaU))),5);
        tracep->chgBit(oldp+188,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        >> 9U))));
        tracep->chgCData(oldp+189,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                            >> 5U))),4);
        tracep->chgCData(oldp+190,((0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 0xeU))),6);
        tracep->chgIData(oldp+191,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                     << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                 >> 0x14U))),32);
        tracep->chgIData(oldp+192,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                     << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                 >> 0x14U))),32);
        tracep->chgIData(oldp+193,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                     << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                  >> 0xeU))),32);
        tracep->chgCData(oldp+194,((0xfU & vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
        tracep->chgCData(oldp+195,((0xfU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                            >> 4U))),4);
        tracep->chgIData(oldp+196,((IData)((vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_WB 
                                            >> 0x20U))),32);
        tracep->chgIData(oldp+197,((IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_WB)),32);
        tracep->chgBit(oldp+198,((1U & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                        >> 8U))));
        tracep->chgCData(oldp+199,((0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 9U))),5);
        tracep->chgIData(oldp+200,(((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                     << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                  >> 0xeU))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
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
        tracep->chgWData(oldp+201,(__Vtemp_h02dc9f9b__0),148);
        tracep->chgIData(oldp+206,(vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__dmem
                                   [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 0x11U))]),32);
        tracep->chgIData(oldp+207,(((0x17U == (0x3fU 
                                               & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 0xfU)))
                                     ? vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__dmem
                                    [(0x3fffU & (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                 >> 0x11U))]
                                     : ((vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                         << 0x11U) 
                                        | (vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xfU)))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
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
                                           >> 0x10U)) 
                                    | ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x10U) | 
                                       (0xfffcU & (
                                                   vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x10U))));
        __Vtemp_h812b39df__0[8U] = ((3U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 0x10U)) 
                                    | ((vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                        << 0x10U) | 
                                       (0xfffcU & (
                                                   vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x10U))));
        __Vtemp_h812b39df__0[9U] = (3U & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          >> 0x10U));
        tracep->chgWData(oldp+208,(__Vtemp_h812b39df__0),290);
        tracep->chgIData(oldp+218,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                   [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                              >> 1U))]),32);
        tracep->chgIData(oldp+219,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs
                                   [(0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                              >> 6U))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        tracep->chgIData(oldp+220,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[0]),32);
        tracep->chgIData(oldp+221,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[1]),32);
        tracep->chgIData(oldp+222,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[2]),32);
        tracep->chgIData(oldp+223,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[3]),32);
        tracep->chgIData(oldp+224,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[4]),32);
        tracep->chgIData(oldp+225,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[5]),32);
        tracep->chgIData(oldp+226,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[6]),32);
        tracep->chgIData(oldp+227,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[7]),32);
        tracep->chgIData(oldp+228,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[8]),32);
        tracep->chgIData(oldp+229,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[9]),32);
        tracep->chgIData(oldp+230,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[10]),32);
        tracep->chgIData(oldp+231,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[11]),32);
        tracep->chgIData(oldp+232,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[12]),32);
        tracep->chgIData(oldp+233,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[13]),32);
        tracep->chgIData(oldp+234,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[14]),32);
        tracep->chgIData(oldp+235,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[15]),32);
        tracep->chgIData(oldp+236,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[16]),32);
        tracep->chgIData(oldp+237,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[17]),32);
        tracep->chgIData(oldp+238,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[18]),32);
        tracep->chgIData(oldp+239,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[19]),32);
        tracep->chgIData(oldp+240,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[20]),32);
        tracep->chgIData(oldp+241,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[21]),32);
        tracep->chgIData(oldp+242,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[22]),32);
        tracep->chgIData(oldp+243,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[23]),32);
        tracep->chgIData(oldp+244,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[24]),32);
        tracep->chgIData(oldp+245,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[25]),32);
        tracep->chgIData(oldp+246,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[26]),32);
        tracep->chgIData(oldp+247,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[27]),32);
        tracep->chgIData(oldp+248,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[28]),32);
        tracep->chgIData(oldp+249,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[29]),32);
        tracep->chgIData(oldp+250,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[30]),32);
        tracep->chgIData(oldp+251,(vlSymsp->TOP__project2_frame.__PVT__my_DE_stage__DOT__regs[31]),32);
    }
    tracep->chgBit(oldp+252,(vlSelf->clk));
    tracep->chgBit(oldp+253,(vlSelf->reset));
    tracep->chgCData(oldp+254,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__pt_AGEX
                               [(0xffU & ((IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX) 
                                          >> 4U))]),2);
    tracep->chgIData(oldp+255,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_tag_AGEX
                               [(0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX))]),26);
    tracep->chgIData(oldp+256,(vlSymsp->TOP__project2_frame.__PVT__my_AGEX_stage__DOT__btb_value_AGEX
                               [(0xfU & (IData)(vlSymsp->TOP__project2_frame.__PVT__from_FE_to_AGEX))]),32);
    tracep->chgIData(oldp+257,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[0]),32);
    tracep->chgIData(oldp+258,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[1]),32);
    tracep->chgIData(oldp+259,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[2]),32);
    tracep->chgIData(oldp+260,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[3]),32);
    tracep->chgIData(oldp+261,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[4]),32);
    tracep->chgIData(oldp+262,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[5]),32);
    tracep->chgIData(oldp+263,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[6]),32);
    tracep->chgIData(oldp+264,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[7]),32);
    tracep->chgIData(oldp+265,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[8]),32);
    tracep->chgIData(oldp+266,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[9]),32);
    tracep->chgIData(oldp+267,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[10]),32);
    tracep->chgIData(oldp+268,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[11]),32);
    tracep->chgIData(oldp+269,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[12]),32);
    tracep->chgIData(oldp+270,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[13]),32);
    tracep->chgIData(oldp+271,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[14]),32);
    tracep->chgIData(oldp+272,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[15]),32);
    tracep->chgIData(oldp+273,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[16]),32);
    tracep->chgIData(oldp+274,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[17]),32);
    tracep->chgIData(oldp+275,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[18]),32);
    tracep->chgIData(oldp+276,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[19]),32);
    tracep->chgIData(oldp+277,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[20]),32);
    tracep->chgIData(oldp+278,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[21]),32);
    tracep->chgIData(oldp+279,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[22]),32);
    tracep->chgIData(oldp+280,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[23]),32);
    tracep->chgIData(oldp+281,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[24]),32);
    tracep->chgIData(oldp+282,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[25]),32);
    tracep->chgIData(oldp+283,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[26]),32);
    tracep->chgIData(oldp+284,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[27]),32);
    tracep->chgIData(oldp+285,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[28]),32);
    tracep->chgIData(oldp+286,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[29]),32);
    tracep->chgIData(oldp+287,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[30]),32);
    tracep->chgIData(oldp+288,(vlSymsp->TOP__project2_frame__my_WB_stage.last_WB_value[31]),32);
    tracep->chgIData(oldp+289,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[0]),32);
    tracep->chgIData(oldp+290,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[1]),32);
    tracep->chgIData(oldp+291,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[2]),32);
    tracep->chgIData(oldp+292,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[3]),32);
    tracep->chgIData(oldp+293,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[4]),32);
    tracep->chgIData(oldp+294,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[5]),32);
    tracep->chgIData(oldp+295,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[6]),32);
    tracep->chgIData(oldp+296,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[7]),32);
    tracep->chgIData(oldp+297,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[8]),32);
    tracep->chgIData(oldp+298,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[9]),32);
    tracep->chgIData(oldp+299,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[10]),32);
    tracep->chgIData(oldp+300,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[11]),32);
    tracep->chgIData(oldp+301,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[12]),32);
    tracep->chgIData(oldp+302,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[13]),32);
    tracep->chgIData(oldp+303,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[14]),32);
    tracep->chgIData(oldp+304,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[15]),32);
    tracep->chgIData(oldp+305,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[16]),32);
    tracep->chgIData(oldp+306,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[17]),32);
    tracep->chgIData(oldp+307,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[18]),32);
    tracep->chgIData(oldp+308,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[19]),32);
    tracep->chgIData(oldp+309,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[20]),32);
    tracep->chgIData(oldp+310,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[21]),32);
    tracep->chgIData(oldp+311,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[22]),32);
    tracep->chgIData(oldp+312,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[23]),32);
    tracep->chgIData(oldp+313,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[24]),32);
    tracep->chgIData(oldp+314,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[25]),32);
    tracep->chgIData(oldp+315,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[26]),32);
    tracep->chgIData(oldp+316,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[27]),32);
    tracep->chgIData(oldp+317,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[28]),32);
    tracep->chgIData(oldp+318,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[29]),32);
    tracep->chgIData(oldp+319,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[30]),32);
    tracep->chgIData(oldp+320,(vlSymsp->TOP__project2_frame__my_WB_stage.WB_counters[31]),32);
}

void Vproject2_frame___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root__trace_cleanup\n"); );
    // Init
    Vproject2_frame___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproject2_frame___024root*>(voidSelf);
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
