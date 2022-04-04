// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame_project2_frame.h"

VL_INLINE_OPT void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__2(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___sequent__TOP__project2_frame__2\n"); );
    // Init
    SData/*13:0*/ __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0;
    IData/*31:0*/ __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    CData/*0:0*/ __Vdlyvset__my_MEM_stage__DOT__dmem__v0;
    // Body
<<<<<<< Updated upstream
    __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    if (vlSelf->__PVT__my_MEM_stage__DOT__wr_mem_MEM) {
        __Vdlyvval__my_MEM_stage__DOT__dmem__v0 = vlSelf->__PVT__my_MEM_stage__DOT__wr_val_MEM;
        __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 
            (0x3fffU & (vlSelf->__PVT__my_MEM_stage__DOT__memaddr_MEM 
                        >> 2U));
=======
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    if (((((((((0x1cU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0xeU))) | (0x1dU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0xeU)))) 
              | (0x1eU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0xeU)))) | (0x1fU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0xeU)))) 
            | (0x20U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  >> 0xeU)))) | (0x21U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0xeU)))) 
          | (0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0xeU)))) | (0x1bU 
                                               == (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0xeU))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__bhr_AGEX 
            = (0xffU & (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__bhr_AGEX) 
                         << 1U) | (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)));
        vlSelf->__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[(0xfU 
                                                         & (IData)(vlSelf->__PVT__from_FE_to_AGEX))] 
            = (0x3ffffffU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                              << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x1aU)));
        vlSelf->__PVT__my_AGEX_stage__DOT__btb_value_AGEX[(0xfU 
                                                           & (IData)(vlSelf->__PVT__from_FE_to_AGEX))] 
            = vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX;
        if (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction) 
             & (3U > vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX
                [(0xffU & (IData)((vlSelf->__PVT__from_FE_to_AGEX 
                                   >> 4U)))]))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX[(0xffU 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__from_FE_to_AGEX 
                                                                   >> 4U)))] 
                = (3U & ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__rd_val_pt_AGEX) 
                         - (IData)(1U)));
        } else if (((~ (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)) 
                    & (0U < vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX
                       [(0xffU & (IData)((vlSelf->__PVT__from_FE_to_AGEX 
                                          >> 4U)))]))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX[(0xffU 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__from_FE_to_AGEX 
                                                                   >> 4U)))] 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__rd_val_pt_AGEX)));
        }
>>>>>>> Stashed changes
    }
    if (__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
}

VL_INLINE_OPT void Vproject2_frame_project2_frame___combo__TOP__project2_frame__7(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___combo__TOP__project2_frame__7\n"); );
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__is_BTB_hit_FE 
        = (((0x3ffffffU & vlSelf->__PVT__from_AGEX_to_FE[1U]) 
            == (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                >> 6U)) ? 1U : 0U);
    vlSelf->__PVT__my_FE_stage__DOT__guessed_br_address_FE 
        = ((2U <= (3U & (vlSelf->__PVT__from_AGEX_to_FE[1U] 
                         >> 0x1aU))) ? vlSelf->__PVT__from_AGEX_to_FE[0U]
            : ((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch));
    vlSelf->__PVT__from_FE_to_AGEX = (((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_BTB_hit_FE)) 
                                       << 0x2dU) | 
                                      (((QData)((IData)(
                                                        ((2U 
                                                          <= 
                                                          (3U 
                                                           & (vlSelf->__PVT__from_AGEX_to_FE[1U] 
                                                              >> 0x1aU)))
                                                          ? 1U
                                                          : 0U))) 
                                        << 0x2cU) | 
                                       (((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__guessed_br_address_FE)) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xff0U 
                                                                      & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                         << 2U)) 
                                                                     | (0xfU 
                                                                        & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                           >> 2U))))))));
    vlSelf->__PVT__my_AGEX_stage__DOT__rd_val_pt_AGEX 
        = vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX
        [(0xffU & (IData)((vlSelf->__PVT__from_FE_to_AGEX 
                           >> 4U)))];
}

VL_INLINE_OPT void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__9(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___sequent__TOP__project2_frame__9\n"); );
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
