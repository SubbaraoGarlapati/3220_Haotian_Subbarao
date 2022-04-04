// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame___024root.h"

VL_ATTR_COLD void Vproject2_frame___024root___final(Vproject2_frame___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root___final\n"); );
}

VL_ATTR_COLD void Vproject2_frame___024root___ctor_var_reset(Vproject2_frame___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vproject2_frame___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
<<<<<<< Updated upstream
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
=======
    VL_RAND_RESET_W(93, vlSelf->__Vchglast__TOP__project2_frame__from_AGEX_to_FE);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
>>>>>>> Stashed changes
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
