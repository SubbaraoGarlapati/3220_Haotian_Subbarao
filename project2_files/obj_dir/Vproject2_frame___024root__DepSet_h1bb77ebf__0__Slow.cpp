// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame__Syms.h"
#include "Vproject2_frame___024root.h"

VL_ATTR_COLD void Vproject2_frame_project2_frame___initial__TOP__project2_frame__4(Vproject2_frame_project2_frame* vlSelf);

VL_ATTR_COLD void Vproject2_frame___024root___eval_initial(Vproject2_frame___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
    Vproject2_frame_project2_frame___initial__TOP__project2_frame__4((&vlSymsp->TOP__project2_frame));
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vproject2_frame_project2_frame___settle__TOP__project2_frame__5(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_WB_STAGE___settle__TOP__project2_frame__my_WB_stage__3(Vproject2_frame_WB_STAGE* vlSelf);
void Vproject2_frame_project2_frame___settle__TOP__project2_frame__6(Vproject2_frame_project2_frame* vlSelf);

VL_ATTR_COLD void Vproject2_frame___024root___eval_settle(Vproject2_frame___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root___eval_settle\n"); );
    // Body
    Vproject2_frame_project2_frame___settle__TOP__project2_frame__5((&vlSymsp->TOP__project2_frame));
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vproject2_frame_WB_STAGE___settle__TOP__project2_frame__my_WB_stage__3((&vlSymsp->TOP__project2_frame__my_WB_stage));
    Vproject2_frame_project2_frame___settle__TOP__project2_frame__6((&vlSymsp->TOP__project2_frame));
}
