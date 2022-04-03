// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame_WB_STAGE.h"
#include "Vproject2_frame__Syms.h"

VL_INLINE_OPT void Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__1(Vproject2_frame_WB_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__1\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__WB_counters__v0;
    IData/*31:0*/ __Vdlyvval__WB_counters__v1;
    IData/*31:0*/ __Vdlyvval__WB_counters__v2;
    IData/*31:0*/ __Vdlyvval__WB_counters__v3;
    IData/*31:0*/ __Vdlyvval__WB_counters__v4;
    IData/*31:0*/ __Vdlyvval__WB_counters__v5;
    IData/*31:0*/ __Vdlyvval__WB_counters__v6;
    IData/*31:0*/ __Vdlyvval__WB_counters__v7;
    IData/*31:0*/ __Vdlyvval__WB_counters__v8;
    // Body
    __Vdlyvval__WB_counters__v0 = ((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                    << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 0x14U));
    __Vdlyvval__WB_counters__v1 = ((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                    << 0xcU) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0x14U));
    __Vdlyvval__WB_counters__v2 = (1U & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                         >> 8U));
    __Vdlyvval__WB_counters__v3 = ((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                    << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                 >> 0xeU));
    __Vdlyvval__WB_counters__v4 = ((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                    << 0x12U) | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                 >> 0xeU));
    __Vdlyvval__WB_counters__v5 = (0x3fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                            >> 0xeU));
    __Vdlyvval__WB_counters__v6 = (0x1fU & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                            >> 9U));
    __Vdlyvval__WB_counters__v7 = (IData)((vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_WB 
                                           >> 0x20U));
    __Vdlyvval__WB_counters__v8 = (IData)(vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_WB);
    vlSelf->WB_counters[1U] = __Vdlyvval__WB_counters__v0;
    vlSelf->WB_counters[2U] = __Vdlyvval__WB_counters__v1;
    vlSelf->WB_counters[3U] = __Vdlyvval__WB_counters__v2;
    vlSelf->WB_counters[4U] = __Vdlyvval__WB_counters__v3;
    vlSelf->WB_counters[5U] = __Vdlyvval__WB_counters__v4;
    vlSelf->WB_counters[6U] = __Vdlyvval__WB_counters__v5;
    vlSelf->WB_counters[7U] = __Vdlyvval__WB_counters__v6;
    vlSelf->WB_counters[8U] = __Vdlyvval__WB_counters__v7;
    vlSelf->WB_counters[9U] = __Vdlyvval__WB_counters__v8;
}

VL_INLINE_OPT void Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__2(Vproject2_frame_WB_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__2\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__last_WB_value__v0;
    IData/*31:0*/ __Vdlyvval__last_WB_value__v0;
    CData/*0:0*/ __Vdlyvset__last_WB_value__v0;
    // Body
    __Vdlyvset__last_WB_value__v0 = 0U;
    if ((0x100U & vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U])) {
        __Vdlyvval__last_WB_value__v0 = ((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                          << 0x12U) 
                                         | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                            >> 0xeU));
        __Vdlyvset__last_WB_value__v0 = 1U;
        __Vdlyvdim0__last_WB_value__v0 = (0x1fU & (
                                                   vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                   >> 9U));
    }
    if (__Vdlyvset__last_WB_value__v0) {
        vlSelf->last_WB_value[__Vdlyvdim0__last_WB_value__v0] 
            = __Vdlyvval__last_WB_value__v0;
    }
}

VL_INLINE_OPT void Vproject2_frame_WB_STAGE___settle__TOP__project2_frame__my_WB_stage__3(Vproject2_frame_WB_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vproject2_frame_WB_STAGE___settle__TOP__project2_frame__my_WB_stage__3\n"); );
    // Body
    vlSelf->__PVT__from_WB_to_DE = (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                         >> 8U)))) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                                       >> 9U)))) 
                                                   << 0x2eU) 
                                                  | (((QData)((IData)(
                                                                      ((vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                                        << 0x12U) 
                                                                       | (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                                          >> 0xeU)))) 
                                                      << 0xeU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->__PVT__wcsrno_WB) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->__PVT__wr_csr_WB) 
                                                                            << 9U) 
                                                                           | ((0x1f0U 
                                                                               & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                                                >> 5U)) 
                                                                              | (0xfU 
                                                                                & (vlSymsp->TOP__project2_frame.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                                                >> 4U))))))))));
}
