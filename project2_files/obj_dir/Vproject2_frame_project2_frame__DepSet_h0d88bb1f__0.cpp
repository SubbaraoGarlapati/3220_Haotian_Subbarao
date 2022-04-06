// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame_project2_frame.h"

VL_INLINE_OPT void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__3(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___sequent__TOP__project2_frame__3\n"); );
    // Body
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    if (((((((((0x1cU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                    << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU)))) 
               | (0x1dU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                      << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x1cU))))) 
              | (0x1eU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x1cU))))) 
             | (0x1fU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                    << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU))))) 
            | (0x20U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x1cU))))) 
           | (0x21U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x1cU))))) 
          | (0x19U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU))))) 
         | (0x1bU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[(0xfU 
                                                         & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                            >> 4U))] 
            = (0x3ffffffU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                              << 0x18U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 8U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__btb_value_AGEX[(0xfU 
                                                           & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                              >> 4U))] 
            = vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX;
        if (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction) 
             & (3U > vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX
                [(0xffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                           >> 8U))]))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX[(0xffU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                           >> 8U))] 
                = (3U & ((IData)(1U) + vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX
                         [(0xffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                    >> 8U))]));
        } else if (((~ (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)) 
                    & (0U < vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX
                       [(0xffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 8U))]))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX[(0xffU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                           >> 8U))] 
                = (3U & (vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX
                         [(0xffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                    >> 8U))] - (IData)(1U)));
        }
        vlSelf->__PVT__my_AGEX_stage__DOT__bhr_AGEX 
            = (0xffU & (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__bhr_AGEX) 
                         << 1U) | (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)));
    }
    if ((0x10U & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])) {
        vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 
            = ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                << 0x1cU) | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                             >> 4U));
        vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 
            = (0x3fffU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                          >> 0x11U));
    }
}

VL_INLINE_OPT void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__9(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___sequent__TOP__project2_frame__9\n"); );
    // Body
    if (vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
}

VL_INLINE_OPT void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__10(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___sequent__TOP__project2_frame__10\n"); );
    // Body
    if (vlSelf->__Vdlyvset__my_DE_stage__DOT__regs__v0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[0U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[1U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[2U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[3U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[4U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[6U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[7U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[8U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[9U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xaU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xbU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xcU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xdU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xeU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xfU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x10U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x11U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x12U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x13U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x14U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x15U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x16U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x17U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x18U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x19U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1aU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1bU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1cU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1dU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1eU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__my_DE_stage__DOT__regs__v32) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[vlSelf->__Vdlyvdim0__my_DE_stage__DOT__regs__v32] 
            = vlSelf->__Vdlyvval__my_DE_stage__DOT__regs__v32;
    }
}
