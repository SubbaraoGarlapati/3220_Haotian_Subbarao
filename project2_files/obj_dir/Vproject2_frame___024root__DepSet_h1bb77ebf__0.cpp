// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame__Syms.h"
#include "Vproject2_frame___024root.h"

void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__1(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__2(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__3(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__1(Vproject2_frame_WB_STAGE* vlSelf);
void Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__2(Vproject2_frame_WB_STAGE* vlSelf);
void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__7(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_WB_STAGE___settle__TOP__project2_frame__my_WB_stage__3(Vproject2_frame_WB_STAGE* vlSelf);
void Vproject2_frame_project2_frame___settle__TOP__project2_frame__6(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__9(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__10(Vproject2_frame_project2_frame* vlSelf);

void Vproject2_frame___024root___eval(Vproject2_frame___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__1((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__2((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__3((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__1((&vlSymsp->TOP__project2_frame__my_WB_stage));
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__2((&vlSymsp->TOP__project2_frame__my_WB_stage));
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__7((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vproject2_frame_WB_STAGE___settle__TOP__project2_frame__my_WB_stage__3((&vlSymsp->TOP__project2_frame__my_WB_stage));
        Vproject2_frame_project2_frame___settle__TOP__project2_frame__6((&vlSymsp->TOP__project2_frame));
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__9((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__10((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}
