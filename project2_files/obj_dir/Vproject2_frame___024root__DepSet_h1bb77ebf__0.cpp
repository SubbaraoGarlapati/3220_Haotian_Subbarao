// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame__Syms.h"
#include "Vproject2_frame___024root.h"

void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__2(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__1(Vproject2_frame_WB_STAGE* vlSelf);
void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__3(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__4(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__2(Vproject2_frame_WB_STAGE* vlSelf);
void Vproject2_frame_project2_frame___combo__TOP__project2_frame__7(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__8(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_WB_STAGE___settle__TOP__project2_frame__my_WB_stage__3(Vproject2_frame_WB_STAGE* vlSelf);
void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__9(Vproject2_frame_project2_frame* vlSelf);
<<<<<<< Updated upstream
=======
void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__10(Vproject2_frame_project2_frame* vlSelf);
void Vproject2_frame_project2_frame___combo__TOP__project2_frame__11(Vproject2_frame_project2_frame* vlSelf);
>>>>>>> Stashed changes

void Vproject2_frame___024root___eval(Vproject2_frame___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__2((&vlSymsp->TOP__project2_frame));
        Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__1((&vlSymsp->TOP__project2_frame__my_WB_stage));
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__3((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__4((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vproject2_frame_WB_STAGE___sequent__TOP__project2_frame__my_WB_stage__2((&vlSymsp->TOP__project2_frame__my_WB_stage));
    }
    Vproject2_frame_project2_frame___combo__TOP__project2_frame__7((&vlSymsp->TOP__project2_frame));
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
<<<<<<< Updated upstream
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__7((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[3U] = 1U;
=======
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__8((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[5U] = 1U;
>>>>>>> Stashed changes
        Vproject2_frame_WB_STAGE___settle__TOP__project2_frame__my_WB_stage__3((&vlSymsp->TOP__project2_frame__my_WB_stage));
    }
<<<<<<< Updated upstream
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__9((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[4U] = 1U;
=======
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__9((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vproject2_frame_project2_frame___sequent__TOP__project2_frame__10((&vlSymsp->TOP__project2_frame));
        vlSelf->__Vm_traceActivity[7U] = 1U;
>>>>>>> Stashed changes
    }
    Vproject2_frame_project2_frame___combo__TOP__project2_frame__11((&vlSymsp->TOP__project2_frame));
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

VL_INLINE_OPT QData Vproject2_frame___024root___change_request_1(Vproject2_frame___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[0] ^ vlSelf->__Vchglast__TOP__project2_frame__from_AGEX_to_FE[0]) | (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1] ^ vlSelf->__Vchglast__TOP__project2_frame__from_AGEX_to_FE[1]) | (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[2] ^ vlSelf->__Vchglast__TOP__project2_frame__from_AGEX_to_FE[2]));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[0] ^ vlSelf->__Vchglast__TOP__project2_frame__from_AGEX_to_FE[0]) | (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1] ^ vlSelf->__Vchglast__TOP__project2_frame__from_AGEX_to_FE[1]) | (vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[2] ^ vlSelf->__Vchglast__TOP__project2_frame__from_AGEX_to_FE[2]))) VL_DBG_MSGF("        CHANGE: project2_frame.v:22: from_AGEX_to_FE\n"); );
    // Final
    vlSelf->__Vchglast__TOP__project2_frame__from_AGEX_to_FE[0U] 
        = vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[0U];
    vlSelf->__Vchglast__TOP__project2_frame__from_AGEX_to_FE[1U] 
        = vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[1U];
    vlSelf->__Vchglast__TOP__project2_frame__from_AGEX_to_FE[2U] 
        = vlSymsp->TOP__project2_frame.__PVT__from_AGEX_to_FE[2U];
    return __req;
}
