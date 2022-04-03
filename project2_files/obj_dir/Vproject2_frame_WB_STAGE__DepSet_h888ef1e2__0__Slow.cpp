// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame_WB_STAGE.h"

VL_ATTR_COLD void Vproject2_frame_WB_STAGE___ctor_var_reset(Vproject2_frame_WB_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vproject2_frame_WB_STAGE___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(148, vlSelf->__PVT__from_MEM_latch);
    vlSelf->__PVT__from_AGEX_to_WB = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__from_WB_to_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_WB_to_DE = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__from_WB_to_AGEX = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_WB_to_MEM = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wcsrno_WB = VL_RAND_RESET_I(4);
    vlSelf->__PVT__wr_csr_WB = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->last_WB_value[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->WB_counters[__Vi0] = VL_RAND_RESET_I(32);
    }
}
