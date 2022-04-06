// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame__Syms.h"
#include "Vproject2_frame_project2_frame.h"

VL_INLINE_OPT void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__1(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___sequent__TOP__project2_frame__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__PC_FE_latch;
    IData/*31:0*/ __Vdly__my_AGEX_stage__DOT__hit_prediction_AGEX;
    IData/*31:0*/ __Vdly__my_AGEX_stage__DOT__branch_count_AGEX;
    // Body
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch;
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U];
    __Vdly__my_AGEX_stage__DOT__branch_count_AGEX = vlSelf->__PVT__my_AGEX_stage__DOT__branch_count_AGEX;
    __Vdly__my_AGEX_stage__DOT__hit_prediction_AGEX 
        = vlSelf->__PVT__my_AGEX_stage__DOT__hit_prediction_AGEX;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
        __Vdly__my_FE_stage__DOT__PC_FE_latch = 0x200U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] = 0U;
        __Vdly__my_AGEX_stage__DOT__branch_count_AGEX = 0U;
    } else {
        vlSelf->__PVT__cycle_count = ((IData)(1U) + vlSelf->__PVT__cycle_count);
        if ((0x10000000U & vlSelf->__PVT__from_AGEX_to_FE[2U])) {
            __Vdly__my_FE_stage__DOT__inst_count_FE 
                = ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE);
            __Vdly__my_FE_stage__DOT__PC_FE_latch = 
                ((vlSelf->__PVT__from_AGEX_to_FE[2U] 
                  << 4U) | (vlSelf->__PVT__from_AGEX_to_FE[1U] 
                            >> 0x1cU));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE)))) {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_BTB_hit_FE)
                        ? ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE)
                        : ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE));
            }
            if (vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE) {
                __Vdly__my_FE_stage__DOT__PC_FE_latch 
                    = vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch;
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U];
            } else {
                __Vdly__my_FE_stage__DOT__PC_FE_latch 
                    = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_BTB_hit_FE)
                        ? (((2U <= (3U & (vlSelf->__PVT__from_AGEX_to_FE[1U] 
                                          >> 0x1aU)))
                             ? 1U : 0U) ? vlSelf->__PVT__my_FE_stage__DOT__guessed_br_address
                            : vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE)
                        : vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE);
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                    = (IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_BTB_hit_FE)) 
                                << 0x31U) | (((QData)((IData)(
                                                              ((2U 
                                                                <= 
                                                                (3U 
                                                                 & (vlSelf->__PVT__from_AGEX_to_FE[1U] 
                                                                    >> 0x1aU)))
                                                                ? 1U
                                                                : 0U))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__guessed_br_address)) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xfU 
                                                                   | (((IData)(vlSelf->__PVT__my_FE_stage__DOT__memaddr_pt_FE) 
                                                                       << 8U) 
                                                                      | (0xf0U 
                                                                         & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                            << 2U))))))))));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                    = ((vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
                        << 0x12U) | (IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_BTB_hit_FE)) 
                                               << 0x31U) 
                                              | (((QData)((IData)(
                                                                  ((2U 
                                                                    <= 
                                                                    (3U 
                                                                     & (vlSelf->__PVT__from_AGEX_to_FE[1U] 
                                                                        >> 0x1aU)))
                                                                    ? 1U
                                                                    : 0U))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__guessed_br_address)) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xfU 
                                                                       | (((IData)(vlSelf->__PVT__my_FE_stage__DOT__memaddr_pt_FE) 
                                                                           << 8U) 
                                                                          | (0xf0U 
                                                                             & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                << 2U))))))))) 
                                             >> 0x20U)));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                    = ((vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
                        >> 0xeU) | (((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                    << 0x12U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                    = ((((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                        >> 0xeU) | ((IData)((((QData)((IData)(
                                                              vlSelf->__PVT__my_FE_stage__DOT__imem
                                                              [
                                                              (0x3fffU 
                                                               & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                  >> 2U))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                    << 0x12U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                    = (((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__imem
                                                  [
                                                  (0x3fffU 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))])) 
                                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                        >> 0xeU) | ((IData)(((((QData)((IData)(
                                                               vlSelf->__PVT__my_FE_stage__DOT__imem
                                                               [
                                                               (0x3fffU 
                                                                & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                   >> 2U))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                             >> 0x20U)) 
                                    << 0x12U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
                    = ((IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__imem
                                                  [
                                                  (0x3fffU 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))])) 
                                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                >> 0x20U)) >> 0xeU);
            }
        }
    }
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
        __Vdly__my_AGEX_stage__DOT__branch_count_AGEX 
            = ((IData)(1U) + vlSelf->__PVT__my_AGEX_stage__DOT__branch_count_AGEX);
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__my_AGEX_stage__DOT__hit_prediction_AGEX = 0U;
    }
    if ((0x20000U & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U])) {
        if (((((1U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                      >> 0x10U)) == (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)) 
              & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                   << 0x10U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                >> 0x10U)) == vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX)) 
             & (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction))) {
            __Vdly__my_AGEX_stage__DOT__hit_prediction_AGEX 
                = ((IData)(1U) + vlSelf->__PVT__my_AGEX_stage__DOT__hit_prediction_AGEX);
        }
    }
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = __Vdly__my_FE_stage__DOT__PC_FE_latch;
    vlSelf->__PVT__my_AGEX_stage__DOT__branch_count_AGEX 
        = __Vdly__my_AGEX_stage__DOT__branch_count_AGEX;
    vlSelf->__PVT__my_AGEX_stage__DOT__hit_prediction_AGEX 
        = __Vdly__my_AGEX_stage__DOT__hit_prediction_AGEX;
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = ((IData)(4U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
}

VL_INLINE_OPT void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__2(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___sequent__TOP__project2_frame__2\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__csr_regs__v0;
    CData/*3:0*/ __Vdlyvdim0__my_DE_stage__DOT__csr_regs__v16;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__csr_regs__v16;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__csr_regs__v16;
    // Body
    __Vdlyvset__my_DE_stage__DOT__csr_regs__v0 = 0U;
    __Vdlyvset__my_DE_stage__DOT__csr_regs__v16 = 0U;
    vlSelf->__Vdlyvset__my_DE_stage__DOT__regs__v0 = 0U;
    vlSelf->__Vdlyvset__my_DE_stage__DOT__regs__v32 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdlyvset__my_DE_stage__DOT__csr_regs__v0 = 1U;
        vlSelf->__Vdlyvset__my_DE_stage__DOT__regs__v0 = 1U;
    } else {
        if ((1U & (~ ((IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                               >> 0x33U)) & (0U != 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                         >> 0x2eU)))))))) {
            if ((1U & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                               >> 9U)))) {
                __Vdlyvval__my_DE_stage__DOT__csr_regs__v16 
                    = (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                               >> 0xeU));
                __Vdlyvset__my_DE_stage__DOT__csr_regs__v16 = 1U;
                __Vdlyvdim0__my_DE_stage__DOT__csr_regs__v16 
                    = (0xfU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                       >> 0xaU)));
            }
        }
        if (((IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                      >> 0x33U)) & (0U != (0x1fU & (IData)(
                                                           (vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                            >> 0x2eU)))))) {
            vlSelf->__Vdlyvval__my_DE_stage__DOT__regs__v32 
                = (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                           >> 0xeU));
            vlSelf->__Vdlyvset__my_DE_stage__DOT__regs__v32 = 1U;
            vlSelf->__Vdlyvdim0__my_DE_stage__DOT__regs__v32 
                = (0x1fU & (IData)((vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                    >> 0x2eU)));
        }
    }
    if (__Vdlyvset__my_DE_stage__DOT__csr_regs__v0) {
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[0U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[1U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[2U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[3U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[4U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[6U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[7U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[8U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[9U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[0xaU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[0xbU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[0xcU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[0xdU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[0xeU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[0xfU] = 0U;
    }
    if (__Vdlyvset__my_DE_stage__DOT__csr_regs__v16) {
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[__Vdlyvdim0__my_DE_stage__DOT__csr_regs__v16] 
            = __Vdlyvval__my_DE_stage__DOT__csr_regs__v16;
    }
}

VL_INLINE_OPT void Vproject2_frame_project2_frame___settle__TOP__project2_frame__6(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___settle__TOP__project2_frame__6\n"); );
    // Body
    vlSelf->__PVT__my_DE_stage__DOT__is_type_I_AGEX_Valid 
        = ((((1U == (0xfU & ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                             >> 1U))) | (2U == (0xfU 
                                                & ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                                   >> 1U)))) 
            | (4U == (0xfU & ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                              >> 1U)))) ? 1U : 0U);
    vlSelf->__PVT__my_DE_stage__DOT__is_type_I_MEM_Valid 
        = ((((1U == (0xfU & (IData)(vlSelf->__PVT__from_MEM_to_DE))) 
             | (2U == (0xfU & (IData)(vlSelf->__PVT__from_MEM_to_DE)))) 
            | (4U == (0xfU & (IData)(vlSelf->__PVT__from_MEM_to_DE))))
            ? 1U : 0U);
    vlSelf->__PVT__my_DE_stage__DOT__is_type_I_WB_Valid 
        = ((((1U == (0xfU & (IData)(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE))) 
             | (2U == (0xfU & (IData)(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE)))) 
            | (4U == (0xfU & (IData)(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE))))
            ? 1U : 0U);
    vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE 
        = ((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE)
            ? ((((((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                             >> 1U)) == (0x1fU & ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                                  >> 5U))) 
                  & (IData)(vlSelf->__PVT__my_DE_stage__DOT__is_type_I_AGEX_Valid)) 
                 | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                               >> 1U)) == (0x1fU & 
                                           ((IData)(vlSelf->__PVT__from_MEM_to_DE) 
                                            >> 4U))) 
                    & (IData)(vlSelf->__PVT__my_DE_stage__DOT__is_type_I_MEM_Valid))) 
                | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                              >> 1U)) == (0x1fU & (IData)(
                                                          (vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                           >> 4U)))) 
                   & (IData)(vlSelf->__PVT__my_DE_stage__DOT__is_type_I_WB_Valid))) 
               | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE) 
                  & (((((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  >> 6U)) == (0x1fU 
                                              & ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                                 >> 5U))) 
                       & (IData)(vlSelf->__PVT__my_DE_stage__DOT__is_type_I_AGEX_Valid)) 
                      | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                    >> 6U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__from_MEM_to_DE) 
                                                   >> 4U))) 
                         & (IData)(vlSelf->__PVT__my_DE_stage__DOT__is_type_I_MEM_Valid))) 
                     | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                   >> 6U)) == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                          >> 4U)))) 
                        & (IData)(vlSelf->__PVT__my_DE_stage__DOT__is_type_I_WB_Valid)))))
            : ((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE) 
               & (((((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                               >> 6U)) == (0x1fU & 
                                           ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                            >> 5U))) 
                    & (IData)(vlSelf->__PVT__my_DE_stage__DOT__is_type_I_AGEX_Valid)) 
                   | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                 >> 6U)) == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__from_MEM_to_DE) 
                                                >> 4U))) 
                      & (IData)(vlSelf->__PVT__my_DE_stage__DOT__is_type_I_MEM_Valid))) 
                  | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                >> 6U)) == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                             >> 4U)))) 
                     & (IData)(vlSelf->__PVT__my_DE_stage__DOT__is_type_I_WB_Valid)))));
}

extern const VlWide<10>/*319:0*/ Vproject2_frame__ConstPool__CONST_h15f111bd_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vproject2_frame__ConstPool__TABLE_h2b6e92a2_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vproject2_frame__ConstPool__TABLE_h5338f905_0;

VL_INLINE_OPT void Vproject2_frame_project2_frame___sequent__TOP__project2_frame__7(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___sequent__TOP__project2_frame__7\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp_hebb393eb__0;
    VlWide<5>/*159:0*/ __Vtemp_he8d12b9a__0;
    VlWide<5>/*159:0*/ __Vtemp_h08284233__0;
    VlWide<4>/*127:0*/ __Vtemp_h4171a32c__0;
    VlWide<6>/*191:0*/ __Vtemp_h4cc06404__0;
    VlWide<10>/*319:0*/ __Vtemp_h961f5a61__0;
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__memaddr_pt_FE 
        = (0xffU & ((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U) ^ (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__bhr_AGEX)));
    vlSelf->__PVT__from_AGEX_to_WB = (((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__hit_prediction_AGEX)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__branch_count_AGEX)));
    vlSelf->__PVT__from_FE_to_AGEX = (((IData)(vlSelf->__PVT__my_FE_stage__DOT__memaddr_pt_FE) 
                                       << 4U) | (0xfU 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                    >> 2U)));
    __Vtemp_hebb393eb__0[1U] = (((IData)((((QData)((IData)(
                                                           ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                             << 0x11U) 
                                                            | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                               >> 0xfU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0x17U 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                                  >> 0xfU)))
                                                              ? 
                                                             vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                                             [
                                                             (0x3fffU 
                                                              & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                 >> 0x11U))]
                                                              : 
                                                             ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                               << 0x11U) 
                                                              | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                 >> 0xfU))))))) 
                                 >> 0x12U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                                           << 0x11U) 
                                                                          | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                             >> 0xfU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0x17U 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                                                >> 0xfU)))
                                                                            ? 
                                                                           vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                                                           [
                                                                           (0x3fffU 
                                                                            & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                               >> 0x11U))]
                                                                            : 
                                                                           ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                             << 0x11U) 
                                                                            | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                               >> 0xfU)))))) 
                                                       >> 0x20U)) 
                                              << 0xeU));
    __Vtemp_he8d12b9a__0[2U] = (((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                              << 0xbU) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                                >> 0x15U)))) 
                                 << 0x14U) | ((0xfc000U 
                                               & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 1U)) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                                              << 0x11U) 
                                                                             | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                                >> 0xfU)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((0x17U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                                                >> 0xfU)))
                                                                               ? 
                                                                              vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                                                              [
                                                                              (0x3fffU 
                                                                               & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                                >> 0x11U))]
                                                                               : 
                                                                              ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                                << 0x11U) 
                                                                               | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                                >> 0xfU)))))) 
                                                          >> 0x20U)) 
                                                 >> 0x12U)));
    __Vtemp_h08284233__0[0U] = ((0U == ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                         << 0xbU) | 
                                        (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                         >> 0x15U)))
                                 ? 0U : (((IData)((
                                                   ((QData)((IData)(
                                                                    ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                                      << 0x11U) 
                                                                     | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                        >> 0xfU)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x17U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                                           >> 0xfU)))
                                                                       ? 
                                                                      vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                                                      [
                                                                      (0x3fffU 
                                                                       & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                          >> 0x11U))]
                                                                       : 
                                                                      ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                                        << 0x11U) 
                                                                       | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                          >> 0xfU))))))) 
                                          << 0xeU) 
                                         | ((0x3e00U 
                                             & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 1U)) 
                                            | ((0x100U 
                                                & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                   >> 1U)) 
                                               | ((0xf0U 
                                                   & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                      >> 1U)) 
                                                  | (0xfU 
                                                     & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]))))));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = __Vtemp_h08284233__0[0U];
        if ((0U == ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                     << 0xbU) | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                 >> 0x15U)))) {
            vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
            vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
            vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
            vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        } else {
            vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                = __Vtemp_hebb393eb__0[1U];
            vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                = __Vtemp_he8d12b9a__0[2U];
            vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                              << 0x2bU) | (((QData)((IData)(
                                                            vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                              >> 0x15U)))) 
                    >> 0xcU) | ((IData)(((((QData)((IData)(
                                                           vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                              << 0xbU) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                                >> 0x15U))) 
                                         >> 0x20U)) 
                                << 0x14U));
            vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U])) 
                              << 0x2bU) | (((QData)((IData)(
                                                            vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U])) 
                                              >> 0x15U))) 
                            >> 0x20U)) >> 0xcU);
        }
    }
    __Vtemp_h4171a32c__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                             >> 0x17U)))) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                >> 0x16U)))) 
                                            << 0x29U) 
                                           | (((QData)((IData)(
                                                               (0xfU 
                                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                   >> 0x12U)))) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  ((0x18U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                         << 4U) 
                                                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                           >> 0x1cU))))
                                                                    ? 1U
                                                                    : 0U))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                       << 4U) 
                                                                      | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                         >> 0x1cU)))) 
                                                     << 4U) 
                                                    | (QData)((IData)(
                                                                      (0xfU 
                                                                       & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])))))))));
    __Vtemp_h4171a32c__0[1U] = (((IData)((((QData)((IData)(
                                                           ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                             << 4U) 
                                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                               >> 0x1cU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 << 0xfU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                           >> 0x17U)))) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                              >> 0x16U)))) 
                                                          << 0x29U) 
                                                         | (((QData)((IData)(
                                                                             (0xfU 
                                                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 0x12U)))) 
                                                             << 0x25U) 
                                                            | (((QData)((IData)(
                                                                                ((0x18U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                                >> 0x1cU))))
                                                                                 ? 1U
                                                                                 : 0U))) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(
                                                                                ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                                >> 0x1cU)))) 
                                                                   << 4U) 
                                                                  | (QData)((IData)(
                                                                                (0xfU 
                                                                                & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])))))))) 
                                                     >> 0x20U)));
    __Vtemp_h4cc06404__0[3U] = ((0U == ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[9U] 
                                         << 0x1eU) 
                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                           >> 2U)))
                                 ? 0U : (((IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__my_DE_stage__DOT__DE_latch[9U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                         >> 2U)))) 
                                          << 0x15U) 
                                         | ((0x1f8000U 
                                             & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 << 0x13U) 
                                                | (0x78000U 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0xdU)))) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                            << 4U) 
                                                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                              >> 0x1cU)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                        >> 0x20U)) 
                                               >> 0x11U))));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] = 0U;
    } else if ((0U == ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[9U] 
                        << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     >> 2U)))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = __Vtemp_h4cc06404__0[3U];
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] = 0U;
    } else {
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = __Vtemp_h4171a32c__0[0U];
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = __Vtemp_h4171a32c__0[1U];
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = (((IData)((((QData)((IData)(((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            << 4U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1cU)))) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                >> 0x11U) | ((IData)(((((QData)((IData)(
                                                        ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                          << 4U) 
                                                         | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                            >> 0x1cU)))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                      >> 0x20U)) << 0xfU));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = __Vtemp_h4cc06404__0[3U];
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__DE_latch[9U])) 
                          << 0x3eU) | (((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                        >> 2U)))) >> 0xbU) 
               | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__DE_latch[9U])) 
                             << 0x3eU) | (((QData)((IData)(
                                                           vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                             >> 2U))) 
                           >> 0x20U)) << 0x15U));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
            = ((IData)(((((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__DE_latch[9U])) 
                          << 0x3eU) | (((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                        >> 2U))) >> 0x20U)) 
               >> 0xbU);
    }
    vlSelf->__PVT__from_MEM_to_DE = ((0x1f0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 6U)) 
                                     | (0xfU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 5U)));
    __Vtemp_h961f5a61__0[4U] = ((1U & (((IData)(vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE) 
                                        | (IData)(vlSelf->__PVT__from_AGEX_to_DE)) 
                                       | (0U == ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                  << 0xeU) 
                                                 | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 0x12U)))))
                                 ? Vproject2_frame__ConstPool__CONST_h15f111bd_0[4U]
                                 : (((IData)((((QData)((IData)(
                                                               ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                 << 0xeU) 
                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                   >> 0x12U)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                [
                                                                (0x1fU 
                                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                    >> 1U))])))) 
                                     >> 4U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                            << 0xeU) 
                                                                           | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                              >> 0x12U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                           [
                                                                           (0x1fU 
                                                                            & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                               >> 1U))]))) 
                                                        >> 0x20U)) 
                                               << 0x1cU)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[7U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[8U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[9U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[9U];
    } else if ((1U & (((IData)(vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE) 
                       | (IData)(vlSelf->__PVT__from_AGEX_to_DE)) 
                      | (0U == ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                 << 0xeU) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0x12U)))))) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = __Vtemp_h961f5a61__0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[7U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[8U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[9U] 
            = Vproject2_frame__ConstPool__CONST_h15f111bd_0[9U];
    } else {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = (IData)((((QData)((IData)((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x19U)))) 
                        << 0x37U) | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__type_I_DE)) 
                                                    << 0x32U) 
                                                   | (0x3ffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U]))))))));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__sxt_imm_DE 
                << 0x1cU) | (IData)(((((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0x19U)))) 
                                       << 0x37U) | 
                                      (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                        << 0x36U) | 
                                       (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__type_I_DE)) 
                                         << 0x32U) 
                                        | (0x3ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U]))))))) 
                                     >> 0x20U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__sxt_imm_DE 
                >> 4U) | (vlSelf->__PVT__my_DE_stage__DOT__regs
                          [(0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                     >> 6U))] << 0x1cU));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__regs
                [(0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                           >> 6U))] >> 4U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                            >> 0x12U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                             >> 1U))])))) 
                                              << 0x1cU));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = __Vtemp_h961f5a61__0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = (((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                << 0x1cU) | ((IData)(((((QData)((IData)(
                                                        ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                          << 0xeU) 
                                                         | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                            >> 0x12U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                    [
                                                                    (0x1fU 
                                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                        >> 1U))]))) 
                                      >> 0x20U)) >> 4U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = (((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                 << 0x10U) | (0xfffcU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                         >> 0x10U))) 
               | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                  >> 4U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = ((3U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                      >> 0x10U)) | ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     << 0x10U) | (0xfffcU 
                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x10U))));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = ((3U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                      >> 0x10U)) | ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                     << 0x10U) | (0xfffcU 
                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x10U))));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[9U] 
            = (3U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                     >> 0x10U));
    }
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U];
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = ((IData)(
                                                        (((0xcc0000U 
                                                           == 
                                                           (0x1fc0000U 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                          & (0U 
                                                             == 
                                                             (0x3f800U 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                         & (0U 
                                                            == 
                                                            (7U 
                                                             & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                 << 2U) 
                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   >> 0x1eU))))))
                                                 ? 1U
                                                 : 
                                                ((IData)(
                                                         (((0xcc0000U 
                                                            == 
                                                            (0x1fc0000U 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                           & (0x10000U 
                                                              == 
                                                              (0x3f800U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                  << 2U) 
                                                                 | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    >> 0x1eU))))))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          (((0xcc0000U 
                                                             == 
                                                             (0x1fc0000U 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                            & (0U 
                                                               == 
                                                               (0x3f800U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                           & (7U 
                                                              == 
                                                              (7U 
                                                               & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                   << 2U) 
                                                                  | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     >> 0x1eU))))))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           (((0xcc0000U 
                                                              == 
                                                              (0x1fc0000U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                             & (0U 
                                                                == 
                                                                (0x3f800U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                            & (6U 
                                                               == 
                                                               (7U 
                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                    << 2U) 
                                                                   | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      >> 0x1eU))))))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            (((0xcc0000U 
                                                               == 
                                                               (0x1fc0000U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0x3f800U 
                                                                  & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                             & (4U 
                                                                == 
                                                                (7U 
                                                                 & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                     << 2U) 
                                                                    | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 0x1eU))))))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             (((0xcc0000U 
                                                                == 
                                                                (0x1fc0000U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x3f800U 
                                                                   & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                              & (2U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                      << 2U) 
                                                                     | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        >> 0x1eU))))))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              (((0xcc0000U 
                                                                 == 
                                                                 (0x1fc0000U 
                                                                  & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                & (0U 
                                                                   == 
                                                                   (0x3f800U 
                                                                    & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                               & (3U 
                                                                  == 
                                                                  (7U 
                                                                   & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                       << 2U) 
                                                                      | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 0x1eU))))))
                                                       ? 7U
                                                       : 
                                                      ((IData)(
                                                               (((0xcc0000U 
                                                                  == 
                                                                  (0x1fc0000U 
                                                                   & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                 & (0x10000U 
                                                                    == 
                                                                    (0x3f800U 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                                & (5U 
                                                                   == 
                                                                   (7U 
                                                                    & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                        << 2U) 
                                                                       | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 0x1eU))))))
                                                        ? 8U
                                                        : 
                                                       ((IData)(
                                                                (((0xcc0000U 
                                                                   == 
                                                                   (0x1fc0000U 
                                                                    & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                  & (0U 
                                                                     == 
                                                                     (0x3f800U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                                 & (5U 
                                                                    == 
                                                                    (7U 
                                                                     & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           >> 0x1eU))))))
                                                         ? 9U
                                                         : 
                                                        ((IData)(
                                                                 (((0xcc0000U 
                                                                    == 
                                                                    (0x1fc0000U 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x3f800U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                                  & (1U 
                                                                     == 
                                                                     (7U 
                                                                      & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                          << 2U) 
                                                                         | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x1eU))))))
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(
                                                                  (((0xcc0000U 
                                                                     == 
                                                                     (0x1fc0000U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                    & (0x800U 
                                                                       == 
                                                                       (0x3f800U 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                                   & (0U 
                                                                      == 
                                                                      (7U 
                                                                       & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                           << 2U) 
                                                                          | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0x1eU))))))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   ((0x4c0000U 
                                                                     == 
                                                                     (0x1fc0000U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                    & (0U 
                                                                       == 
                                                                       (7U 
                                                                        & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                            << 2U) 
                                                                           | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              >> 0x1eU))))))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    ((0x4c0000U 
                                                                      == 
                                                                      (0x1fc0000U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                             << 2U) 
                                                                            | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               >> 0x1eU))))))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     ((0x4c0000U 
                                                                       == 
                                                                       (0x1fc0000U 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                      & (6U 
                                                                         == 
                                                                         (7U 
                                                                          & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                              << 2U) 
                                                                             | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      ((0x4c0000U 
                                                                        == 
                                                                        (0x1fc0000U 
                                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                       & (4U 
                                                                          == 
                                                                          (7U 
                                                                           & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                               << 2U) 
                                                                              | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       ((0x4c0000U 
                                                                         == 
                                                                         (0x1fc0000U 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                        & (2U 
                                                                           == 
                                                                           (7U 
                                                                            & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                               | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        ((0x4c0000U 
                                                                          == 
                                                                          (0x1fc0000U 
                                                                           & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                         & (3U 
                                                                            == 
                                                                            (7U 
                                                                             & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                 ? 0x11U
                                                                 : 
                                                                ((IData)(
                                                                         (((0x4c0000U 
                                                                            == 
                                                                            (0x1fc0000U 
                                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                           & (0x10000U 
                                                                              == 
                                                                              (0x3f800U 
                                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                                          & (5U 
                                                                             == 
                                                                             (7U 
                                                                              & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                  ? 0x12U
                                                                  : 
                                                                 ((IData)(
                                                                          (((0x4c0000U 
                                                                             == 
                                                                             (0x1fc0000U 
                                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                            & (0U 
                                                                               == 
                                                                               (0x3f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                                           & (5U 
                                                                              == 
                                                                              (7U 
                                                                               & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(
                                                                           (((0x4c0000U 
                                                                              == 
                                                                              (0x1fc0000U 
                                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                             & (0U 
                                                                                == 
                                                                                (0x3f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))) 
                                                                            & (1U 
                                                                               == 
                                                                               (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 0x12U)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 0x12U)))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              ((0xc0000U 
                                                                                == 
                                                                                (0x1fc0000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                               & (2U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               ((0x8c0000U 
                                                                                == 
                                                                                (0x1fc0000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                                & (2U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0x12U)))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                ((0x19c0000U 
                                                                                == 
                                                                                (0x1fc0000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                                & (0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                ((0x18c0000U 
                                                                                == 
                                                                                (0x1fc0000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                                & (0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                ((0x18c0000U 
                                                                                == 
                                                                                (0x1fc0000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                                & (1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                ((0x18c0000U 
                                                                                == 
                                                                                (0x1fc0000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                                & (4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                ((0x18c0000U 
                                                                                == 
                                                                                (0x1fc0000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                                & (5U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                ((0x18c0000U 
                                                                                == 
                                                                                (0x1fc0000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                                & (6U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                ((0x18c0000U 
                                                                                == 
                                                                                (0x1fc0000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                                & (7U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                ((0x1cc0000U 
                                                                                == 
                                                                                (0x1fc0000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                                & (2U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                ((0x1cc0000U 
                                                                                == 
                                                                                (0x1fc0000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                                & (1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1eU))))))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    if (((((((((0x17U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                    << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU)))) 
               | (0x18U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                      << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x1cU))))) 
              | (8U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x1cU))))) 
             | (0x12U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                    << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU))))) 
            | (9U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x1cU))))) 
           | (0x13U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x1cU))))) 
          | (0xaU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x1cU))))) 
         | (0x14U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x17U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                    << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU))))
                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x1cU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1cU)))
                : ((0x18U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))
                    ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                         << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0x1cU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 0x1cU)))
                    : ((8U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))
                        ? VL_SHIFTRS_III(32,32,5, (
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    << 4U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x1cU)), 
                                         (0x1fU & (
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 4U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x1cU))))
                        : ((0x12U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))
                            ? ((0x1fU >= ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x1cU)))
                                ? VL_SHIFTRS_III(32,32,32, 
                                                 ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x1cU)), 
                                                 ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 0x1cU)))
                                : (- (1U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1bU))))
                            : ((9U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 << 4U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x1cU)) 
                                   >> (0x1fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 4U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x1cU))))
                                : ((0x13U == (0x3fU 
                                              & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x1cU))))
                                    ? ((0x1fU >= ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 0x1cU)))
                                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x1cU)) 
                                           >> ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1cU)))
                                        : 0U) : ((0xaU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                       << 4U) 
                                                      | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x1cU))))
                                                  ? 
                                                 (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    << 4U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x1cU)) 
                                                  << 
                                                  (0x1fU 
                                                   & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 4U) 
                                                      | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 0x1cU))))
                                                  : 
                                                 ((0x1fU 
                                                   >= 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x1cU)))
                                                   ? 
                                                  (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       >> 0x1cU)) 
                                                   << 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x1cU)))
                                                   : 0U))))))));
    } else if (((((((((6U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU)))) 
                      | (7U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                          << 4U) | 
                                         (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x1cU))))) 
                     | (0x10U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            << 4U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU))))) 
                    | (0x11U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU))))) 
                   | (5U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1cU))))) 
                  | (3U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                      << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x1cU))))) 
                 | (4U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x1cU))))) 
                | (2U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                    << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU)))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((6U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU))))
                ? (VL_LTS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x1cU)), 
                              ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 0x1cU)))
                    ? 1U : 0U) : ((7U == (0x3fU & (
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    << 4U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x1cU))))
                                   ? ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x1cU)) 
                                       < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x1cU)))
                                       ? 1U : 0U) : 
                                  ((0x10U == (0x3fU 
                                              & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x1cU))))
                                    ? (VL_LTS_III(32, 
                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    << 4U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x1cU)), 
                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 4U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 0x1cU)))
                                        ? 1U : 0U) : 
                                   ((0x11U == (0x3fU 
                                               & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x1cU))))
                                     ? ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x1cU)) 
                                         < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x1cU)))
                                         ? 1U : 0U)
                                     : ((5U == (0x3fU 
                                                & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    << 4U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x1cU))))
                                         ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x1cU)) 
                                            ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x1cU)))
                                         : ((3U == 
                                             (0x3fU 
                                              & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x1cU))))
                                             ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    >> 0x1cU)) 
                                                & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 4U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x1cU)))
                                             : ((4U 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                      << 4U) 
                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        >> 0x1cU))))
                                                 ? 
                                                (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x1cU)) 
                                                 | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x1cU)))
                                                 : 
                                                (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x1cU)) 
                                                 - 
                                                 ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x1cU))))))))));
    } else if (((((((((1U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU)))) 
                      | (0xcU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            << 4U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU))))) 
                     | (0xbU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU))))) 
                    | (0xdU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                          << 4U) | 
                                         (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x1cU))))) 
                   | (0xeU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))) 
                  | (0xfU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) 
                 | (0x16U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) 
                | (0x1cU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1cU)))))) {
        if ((1U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                              << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x1cU))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x1cU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x1cU)));
        } else if ((0xcU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1cU))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x1cU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1cU)));
        } else if ((0xbU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1cU))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x1cU)) * ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x1cU)));
        } else if ((0xdU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1cU))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x1cU)) & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1cU)));
        } else if ((0xeU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1cU))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x1cU)) | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1cU)));
        } else if ((0xfU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1cU))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x1cU)) ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1cU)));
        } else if ((0x16U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                     << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  >> 2U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1cU)));
        }
    } else if (((((((((0x1dU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU)))) 
                      | (0x1eU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x1cU))))) 
                     | (0x1fU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            << 4U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU))))) 
                    | (0x20U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU))))) 
                   | (0x21U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                          << 4U) | 
                                         (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x1cU))))) 
                  | (0x19U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))) 
                 | (0x1bU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) 
                | (0x15U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1cU)))))) {
        if ((0x1dU != (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU))))) {
            if ((0x1eU != (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x1cU))))) {
                if ((0x1fU != (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))) {
                    if ((0x20U != (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x1cU))))) {
                        if ((0x21U != (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 << 4U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))) {
                            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                                = ((0x19U == (0x3fU 
                                              & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x1cU))))
                                    ? ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                        << 0x1eU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        >> 2U)) : (
                                                   (0x1bU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                         << 4U) 
                                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                       >> 2U))
                                                    : 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x1cU))));
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction 
        = (((((((((0x1cU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1cU)))) 
                  | (0x1dU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
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
                                             >> 0x1cU))))) 
           & ((0x1cU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x1cU))))
               ? ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x1cU)) == ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 4U) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x1cU)))
                   ? 1U : 0U) : ((0x1dU == (0x3fU & 
                                            ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x1cU))))
                                  ? ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x1cU)) 
                                      == ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x1cU)))
                                      ? 0U : 1U) : 
                                 ((0x1eU == (0x3fU 
                                             & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 << 4U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))
                                   ? (VL_LTS_III(32, 
                                                 ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x1cU)), 
                                                 ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x1cU)))
                                       ? 1U : 0U) : 
                                  ((0x1fU == (0x3fU 
                                              & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x1cU))))
                                    ? (VL_GTES_III(32, 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       >> 0x1cU)), 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x1cU)))
                                        ? 1U : 0U) : 
                                   ((0x20U == (0x3fU 
                                               & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x1cU))))
                                     ? ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x1cU)) 
                                         < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x1cU)))
                                         ? 1U : 0U)
                                     : ((0x21U != (0x3fU 
                                                   & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                       << 4U) 
                                                      | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x1cU)))) 
                                        | ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x1cU)) 
                                            >= ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 4U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x1cU)))
                                            ? 1U : 0U))))))));
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = ((
                                                   ((((((((((((((((((((((((0xcU 
                                                                           == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                          | (1U 
                                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                                         | (0x16U 
                                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                                        | (0x19U 
                                                                           == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                                       | (0x1bU 
                                                                          == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                                      | (0x15U 
                                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                                     | (2U 
                                                                        == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                                    | (0xbU 
                                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                                   | (3U 
                                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                                  | (0xdU 
                                                                     == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                                 | (4U 
                                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                                | (0xeU 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                               | (5U 
                                                                  == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                              | (0xfU 
                                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                             | (6U 
                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                            | (0x10U 
                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                           | (7U 
                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                          | (0x11U 
                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                         | (8U 
                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                        | (0x12U 
                                                           == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                       | (9U 
                                                          == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                      | (0x13U 
                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                     | (0xaU 
                                                        == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                    | (0x14U 
                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                                                   | (0x17U 
                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))
                                                   ? 1U
                                                   : 0U);
    __Vtableidx1 = vlSelf->__PVT__my_DE_stage__DOT__op_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = Vproject2_frame__ConstPool__TABLE_h2b6e92a2_0
        [__Vtableidx1];
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = Vproject2_frame__ConstPool__TABLE_h5338f905_0
        [__Vtableidx1];
    if ((1U & (~ ((((((((0x17U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x1cU)))) 
                        | (0x18U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                               << 4U) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1cU))))) 
                       | (8U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU))))) 
                      | (0x12U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x1cU))))) 
                     | (9U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))) 
                    | (0x13U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU))))) 
                   | (0xaU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))) 
                  | (0x14U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU)))))))) {
        if ((1U & (~ ((((((((6U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x1cU)))) 
                            | (7U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) 
                           | (0x10U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x1cU))))) 
                          | (0x11U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 << 4U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))) 
                         | (5U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x1cU))))) 
                        | (3U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            << 4U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU))))) 
                       | (4U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU))))) 
                      | (2U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                          << 4U) | 
                                         (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x1cU)))))))) {
            if (((((((((1U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU)))) 
                       | (0xcU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x1cU))))) 
                      | (0xbU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            << 4U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU))))) 
                     | (0xdU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 4U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1cU))))) 
                    | (0xeU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                          << 4U) | 
                                         (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x1cU))))) 
                   | (0xfU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))) 
                  | (0x16U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))) 
                 | (0x1cU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU)))))) {
                if ((1U != (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                      << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x1cU))))) {
                    if ((0xcU != (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            << 4U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x1cU))))) {
                        if ((0xbU != (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                            if ((0xdU != (0x3fU & (
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    << 4U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x1cU))))) {
                                if ((0xeU != (0x3fU 
                                              & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x1cU))))) {
                                    if ((0xfU != (0x3fU 
                                                  & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                      << 4U) 
                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        >> 0x1cU))))) {
                                        if ((0x16U 
                                             != (0x3fU 
                                                 & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0x1cU))))) {
                                            if (vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction) {
                                                vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                                                    = 
                                                    (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                       << 0x1eU) 
                                                      | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                         >> 2U)) 
                                                     + 
                                                     ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       << 4U) 
                                                      | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 0x1cU)));
                                                vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                                                    = 
                                                    (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                       << 0x1eU) 
                                                      | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                         >> 2U)) 
                                                     + 
                                                     ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       << 4U) 
                                                      | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 0x1cU)));
                                            } else {
                                                vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                                                    = 
                                                    ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                        >> 2U));
                                                vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                                                    = 
                                                    ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                        >> 2U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if (((((((((0x1dU == (0x3fU & ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x1cU)))) 
                              | (0x1eU == (0x3fU & 
                                           ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             << 4U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x1cU))))) 
                             | (0x1fU == (0x3fU & (
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    << 4U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x1cU))))) 
                            | (0x20U == (0x3fU & ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                   << 4U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x1cU))))) 
                           | (0x21U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x1cU))))) 
                          | (0x19U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 << 4U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))) 
                         | (0x1bU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) 
                        | (0x15U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                               << 4U) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x1cU)))))) {
                if ((0x1dU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         << 4U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1cU))))) {
                    if (vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction) {
                        vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)));
                        vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)));
                    } else {
                        vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U));
                        vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U));
                    }
                } else if ((0x1eU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    if (vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction) {
                        vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)));
                        vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)));
                    } else {
                        vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U));
                        vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U));
                    }
                } else if ((0x1fU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    if (vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction) {
                        vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)));
                        vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)));
                    } else {
                        vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U));
                        vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U));
                    }
                } else if ((0x20U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    if (vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction) {
                        vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)));
                        vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)));
                    } else {
                        vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U));
                        vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U));
                    }
                } else if ((0x21U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    if (vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction) {
                        vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)));
                        vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)));
                    } else {
                        vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U));
                        vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U));
                    }
                } else if ((0x19U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                             << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 2U)) + 
                           ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                             << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x1cU)));
                    vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                             << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 2U)) + 
                           ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                             << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x1cU)));
                } else if ((0x1bU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = (0xfffffffeU & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 4U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x1cU)) 
                                          + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 4U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1cU))));
                    vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX 
                        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                             << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 2U)) + 
                           ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                             << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x1cU)));
                }
            }
        }
    }
    vlSelf->__PVT__my_DE_stage__DOT__sxt_imm_DE = (
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                    >> 0x11U)))) 
                                                     << 0xbU) 
                                                    | (0x7ffU 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          >> 6U)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                     >> 0x11U)))) 
                                                      << 0xbU) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                            >> 6U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 0x19U))))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                      >> 0x11U)))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0xeU)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                >> 6U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  >> 0x19U)))))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                       ? 
                                                      (0xfffff000U 
                                                       & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                           << 0xeU) 
                                                          | (0x3000U 
                                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 0x12U))))
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                        >> 0x11U)))) 
                                                         << 0x14U) 
                                                        | ((0xff000U 
                                                            & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                << 0xeU) 
                                                               | (0x3000U 
                                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     >> 0x12U)))) 
                                                           | ((0x800U 
                                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                  << 5U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                     >> 6U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                       >> 6U))))))
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                         ? 
                                                        (0x1fU 
                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                            >> 6U))
                                                         : 0U))))));
    if ((2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE 
            = (1U & (~ ((0x16U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                        | (0x15U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))));
    } else if ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE = 1U;
        vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE = 1U;
    } else if ((3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE = 1U;
        vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE = 1U;
    } else if ((4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE = 0U;
    }
    vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX 
        = ((0x20000U & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U])
            ? (((1U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                       >> 0x10U)) != (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)) 
               | (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                    << 0x10U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                 >> 0x10U)) != vlSelf->__PVT__my_AGEX_stage__DOT__actual_branch_address_AGEX))
            : (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction));
    vlSelf->__PVT__from_AGEX_to_FE[0U] = (IData)((((QData)((IData)(
                                                                   vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(vlSelf->__PVT__from_FE_to_AGEX) 
                                                                       >> 4U))])) 
                                                   << 0x3aU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__my_AGEX_stage__DOT__btb_tag_AGEX
                                                                      [
                                                                      (0xfU 
                                                                       & (IData)(vlSelf->__PVT__from_FE_to_AGEX))])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__my_AGEX_stage__DOT__btb_value_AGEX
                                                                       [
                                                                       (0xfU 
                                                                        & (IData)(vlSelf->__PVT__from_FE_to_AGEX))])))));
    vlSelf->__PVT__from_AGEX_to_FE[1U] = ((vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                                           << 0x1cU) 
                                          | (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX
                                                                       [
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->__PVT__from_FE_to_AGEX) 
                                                                           >> 4U))])) 
                                                       << 0x3aU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__PVT__my_AGEX_stage__DOT__btb_tag_AGEX
                                                                          [
                                                                          (0xfU 
                                                                           & (IData)(vlSelf->__PVT__from_FE_to_AGEX))])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__my_AGEX_stage__DOT__btb_value_AGEX
                                                                           [
                                                                           (0xfU 
                                                                            & (IData)(vlSelf->__PVT__from_FE_to_AGEX))])))) 
                                                     >> 0x20U)));
    vlSelf->__PVT__from_AGEX_to_FE[2U] = (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                                           << 0x1cU) 
                                          | (vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                                             >> 4U));
    vlSelf->__PVT__from_AGEX_to_DE = ((0x3e0U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x12U)) 
                                      | ((0x1eU & (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x11U)) 
                                         | (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)));
    vlSelf->__PVT__my_FE_stage__DOT__is_BTB_hit_FE 
        = (((0x3ffffffU & vlSelf->__PVT__from_AGEX_to_FE[1U]) 
            == (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                >> 6U)) ? 1U : 0U);
    vlSelf->__PVT__my_FE_stage__DOT__guessed_br_address 
        = ((2U <= (3U & (vlSelf->__PVT__from_AGEX_to_FE[1U] 
                         >> 0x1aU))) ? vlSelf->__PVT__from_AGEX_to_FE[0U]
            : ((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch));
}
