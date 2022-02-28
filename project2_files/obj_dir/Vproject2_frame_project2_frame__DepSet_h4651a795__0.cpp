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
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
        __Vdly__my_FE_stage__DOT__PC_FE_latch = 0x200U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
    } else {
        vlSelf->__PVT__cycle_count = ((IData)(1U) + vlSelf->__PVT__cycle_count);
        if ((1U & (IData)((vlSelf->__PVT__from_AGEX_to_FE 
                           >> 0x20U)))) {
            __Vdly__my_FE_stage__DOT__inst_count_FE 
                = ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE);
            __Vdly__my_FE_stage__DOT__PC_FE_latch = (IData)(vlSelf->__PVT__from_AGEX_to_FE);
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE)))) {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE);
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
            } else {
                __Vdly__my_FE_stage__DOT__PC_FE_latch 
                    = vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE;
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                    = (0xfU | (vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
                               << 4U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                    = ((vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
                        >> 0x1cU) | (((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                     << 4U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                    = ((((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                        >> 0x1cU) | ((IData)((((QData)((IData)(
                                                               vlSelf->__PVT__my_FE_stage__DOT__imem
                                                               [
                                                               (0x3fffU 
                                                                & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                   >> 2U))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                     << 4U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                    = (((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__imem
                                                  [
                                                  (0x3fffU 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))])) 
                                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                        >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->__PVT__my_FE_stage__DOT__imem
                                                                [
                                                                (0x3fffU 
                                                                 & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                    >> 2U))])) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                    = ((IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__imem
                                                  [
                                                  (0x3fffU 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))])) 
                                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                >> 0x20U)) >> 0x1cU);
            }
        }
    }
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = __Vdly__my_FE_stage__DOT__PC_FE_latch;
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
    vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_AGEX_Valid 
        = ((((1U == (0xfU & ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                             >> 1U))) | (2U == (0xfU 
                                                & ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                                   >> 1U)))) 
            | (4U == (0xfU & ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                              >> 1U)))) ? 1U : 0U);
    vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_MEM_Valid 
        = ((((1U == (0xfU & (IData)(vlSelf->__PVT__from_MEM_to_DE))) 
             | (2U == (0xfU & (IData)(vlSelf->__PVT__from_MEM_to_DE)))) 
            | (4U == (0xfU & (IData)(vlSelf->__PVT__from_MEM_to_DE))))
            ? 1U : 0U);
    vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_WB_Valid 
        = ((((1U == (0xfU & (IData)(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE))) 
             | (2U == (0xfU & (IData)(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE)))) 
            | (4U == (0xfU & (IData)(vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE))))
            ? 1U : 0U);
    vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE 
        = ((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE)
            ? ((((((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                             >> 0x13U)) == (0x1fU & 
                                            ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                             >> 5U))) 
                  & (IData)(vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_AGEX_Valid)) 
                 | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               >> 0x13U)) == (0x1fU 
                                              & ((IData)(vlSelf->__PVT__from_MEM_to_DE) 
                                                 >> 4U))) 
                    & (IData)(vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_MEM_Valid))) 
                | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                              >> 0x13U)) == (0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                        >> 4U)))) 
                   & (IData)(vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_WB_Valid))) 
               | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE) 
                  & (((((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  >> 0x18U)) == (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                                    >> 5U))) 
                       & (IData)(vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_AGEX_Valid)) 
                      | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0x18U)) == (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__from_MEM_to_DE) 
                                                      >> 4U))) 
                         & (IData)(vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_MEM_Valid))) 
                     | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   >> 0x18U)) == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                             >> 4U)))) 
                        & (IData)(vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_WB_Valid)))))
            : ((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE) 
               & (((((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               >> 0x18U)) == (0x1fU 
                                              & ((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                                 >> 5U))) 
                    & (IData)(vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_AGEX_Valid)) 
                   | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 >> 0x18U)) == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__from_MEM_to_DE) 
                                                   >> 4U))) 
                      & (IData)(vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_MEM_Valid))) 
                  | (((0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                >> 0x18U)) == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__project2_frame__my_WB_stage.__PVT__from_WB_to_DE 
                                                          >> 4U)))) 
                     & (IData)(vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_WB_Valid)))));
}

extern const VlWide<8>/*255:0*/ Vproject2_frame__ConstPool__CONST_h4737c94f_0;
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
    VlWide<4>/*127:0*/ __Vtemp_h99dbc4c0__0;
    VlWide<8>/*255:0*/ __Vtemp_h7d7c1332__0;
    // Body
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
    __Vtemp_h99dbc4c0__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                             >> 9U)))) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                >> 8U)))) 
                                            << 0x29U) 
                                           | (((QData)((IData)(
                                                               (0xfU 
                                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                   >> 4U)))) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  ((0x18U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                        >> 0xeU)))
                                                                    ? 1U
                                                                    : 0U))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                         >> 0xeU)))) 
                                                     << 4U) 
                                                    | (QData)((IData)(
                                                                      (0xfU 
                                                                       & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])))))))));
    __Vtemp_h99dbc4c0__0[1U] = (((IData)((((QData)((IData)(
                                                           ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             << 0x12U) 
                                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               >> 0xeU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 << 0xfU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                           >> 9U)))) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                              >> 8U)))) 
                                                          << 0x29U) 
                                                         | (((QData)((IData)(
                                                                             (0xfU 
                                                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                                >> 4U)))) 
                                                             << 0x25U) 
                                                            | (((QData)((IData)(
                                                                                ((0x18U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                                >> 0xeU)))
                                                                                 ? 1U
                                                                                 : 0U))) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(
                                                                                ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                                << 0x12U) 
                                                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 0xeU)))) 
                                                                   << 4U) 
                                                                  | (QData)((IData)(
                                                                                (0xfU 
                                                                                & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])))))))) 
                                                     >> 0x20U)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] = 0U;
    } else if ((0U == ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                        << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                    >> 0x14U)))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] = 0U;
    } else {
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = __Vtemp_h99dbc4c0__0[0U];
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = __Vtemp_h99dbc4c0__0[1U];
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = (((IData)((((QData)((IData)(((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0x12U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0xeU)))) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                >> 0x11U) | ((IData)(((((QData)((IData)(
                                                        ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          << 0x12U) 
                                                         | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            >> 0xeU)))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                      >> 0x20U)) << 0xfU));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                          << 0x2cU) | (((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                        >> 0x14U)))) 
                << 0x15U) | ((0x1f8000U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           << 1U)) 
                             | ((IData)(((((QData)((IData)(
                                                           ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             << 0x12U) 
                                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               >> 0xeU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                         >> 0x20U)) 
                                >> 0x11U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                          << 0x2cU) | (((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                        >> 0x14U)))) 
                >> 0xbU) | ((IData)(((((QData)((IData)(
                                                       vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                        >> 0x14U))) 
                                     >> 0x20U)) << 0x15U));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
            = ((IData)(((((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                          << 0x2cU) | (((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                        >> 0x14U))) 
                        >> 0x20U)) >> 0xbU);
    }
    vlSelf->__PVT__from_MEM_to_DE = ((0x1f0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 6U)) 
                                     | (0xfU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 5U)));
    __Vtemp_h7d7c1332__0[3U] = ((1U & (((IData)(vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE) 
                                        | (IData)(vlSelf->__PVT__from_AGEX_to_DE)) 
                                       | (0U == ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  << 0x1cU) 
                                                 | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 4U)))))
                                 ? Vproject2_frame__ConstPool__CONST_h4737c94f_0[3U]
                                 : (((IData)((((QData)((IData)(
                                                               ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                 << 0x1cU) 
                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                   >> 4U)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                [
                                                                (0x1fU 
                                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x13U))])))) 
                                     >> 0x12U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                               << 0x1cU) 
                                                                              | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                              [
                                                                              (0x1fU 
                                                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x13U))]))) 
                                                           >> 0x20U)) 
                                                  << 0xeU)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[7U];
    } else if ((1U & (((IData)(vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE) 
                       | (IData)(vlSelf->__PVT__from_AGEX_to_DE)) 
                      | (0U == ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 << 0x1cU) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 4U)))))) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = __Vtemp_h7d7c1332__0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vproject2_frame__ConstPool__CONST_h4737c94f_0[7U];
    } else {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__sxt_imm_DE 
                << 0xeU) | ((0x3e00U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 2U)) | (
                                                   ((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__type_I_DE) 
                                                       << 4U) 
                                                      | (0xfU 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U])))));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__sxt_imm_DE 
                >> 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__regs
                             [(0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x18U))] 
                             << 0xeU));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__regs
                [(0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                           >> 0x18U))] >> 0x12U) | 
               ((IData)((((QData)((IData)(((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            << 0x1cU) 
                                           | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                              >> 4U)))) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->__PVT__my_DE_stage__DOT__regs
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x13U))])))) 
                << 0xeU));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = __Vtemp_h7d7c1332__0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = ((0xfff00000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                               << 0x10U)) | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                                              << 0xeU) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                             << 0x1cU) 
                                                                            | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                               >> 4U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                            [
                                                                            (0x1fU 
                                                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x13U))]))) 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = (((0xf0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                             << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                           >> 0x10U)) 
               | (0xfff00000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                 << 0x10U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = (((0xf0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                             << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                           >> 0x10U)) 
               | (0xfff00000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 << 0x10U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = ((0xf0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                            << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
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
    if (((((((((0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0xeU))) | (0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0xeU)))) 
              | (8U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 >> 0xeU)))) | (0x12U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0xeU)))) 
            | (9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 0xeU)))) | (0x13U 
                                              == (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0xeU)))) 
          | (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 0xeU)))) | (0x14U 
                                              == (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0xeU))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0xeU))) ? (((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0x12U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0xeU)) 
                                                 + 
                                                 ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 0x12U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 0xeU)))
                : ((0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0xeU))) ? 
                   (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   >> 0xeU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 << 0x12U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0xeU)))
                    : ((8U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU))) ? 
                       VL_SHIFTRS_III(32,32,5, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 0x12U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0xeU)), 
                                      (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0xeU)))
                        : ((0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xeU)))
                            ? ((0x1fU >= ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 0x12U) 
                                          | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0xeU)))
                                ? VL_SHIFTRS_III(32,32,32, 
                                                 ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0x12U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0xeU)), 
                                                 ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 0x12U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 0xeU)))
                                : (- (1U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0xdU))))
                            : ((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0xeU)))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0xeU)) 
                                   >> (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0xeU)))
                                : ((0x13U == (0x3fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0xeU)))
                                    ? ((0x1fU >= ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 0x12U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 0xeU)))
                                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0x12U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0xeU)) 
                                           >> ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 0x12U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0xeU)))
                                        : 0U) : ((0xaU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0xeU)))
                                                  ? 
                                                 (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x12U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0xeU)) 
                                                  << 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 0xeU)))
                                                  : 
                                                 ((0x1fU 
                                                   >= 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     << 0x12U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                       >> 0xeU)))
                                                   ? 
                                                  (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x12U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0xeU)) 
                                                   << 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     << 0x12U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                       >> 0xeU)))
                                                   : 0U))))))));
    } else if (((((((((6U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0xeU))) | 
                      (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0xeU)))) 
                     | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xeU)))) 
                    | (0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0xeU)))) 
                   | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0xeU)))) | 
                  (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0xeU)))) | (4U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0xeU)))) 
                | (2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0xeU))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((6U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0xeU))) ? (VL_LTS_III(32, 
                                                         ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                           << 0x12U) 
                                                          | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                             >> 0xeU)), 
                                                         ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                           << 0x12U) 
                                                          | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                             >> 0xeU)))
                                               ? 1U
                                               : 0U)
                : ((7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0xeU))) ? ((
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x12U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0xeU)) 
                                                   < 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0x12U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0xeU)))
                                                   ? 1U
                                                   : 0U)
                    : ((0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xeU)))
                        ? (VL_LTS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x12U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0xeU)), 
                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        << 0x12U) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 0xeU))) ? 1U
                            : 0U) : ((0x11U == (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0xeU)))
                                      ? ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x12U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0xeU)) 
                                          < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              << 0x12U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0xeU)))
                                          ? 1U : 0U)
                                      : ((5U == (0x3fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0xeU)))
                                          ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 0x12U) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0xeU)) 
                                             ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 0x12U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0xeU)))
                                          : ((3U == 
                                              (0x3fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0xeU)))
                                              ? (((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0x12U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0xeU)) 
                                                 & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0x12U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0xeU)))
                                              : ((4U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0xeU)))
                                                  ? 
                                                 (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x12U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0xeU)) 
                                                  | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 0x12U) 
                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 0xeU)))
                                                  : 
                                                 (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x12U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0xeU)) 
                                                  - 
                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 0x12U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 0xeU))))))))));
    } else if (((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0xeU))) | 
                      (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0xeU)))) 
                     | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0xeU)))) 
                    | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0xeU)))) 
                   | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU)))) 
                  | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0xeU)))) 
                 | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0xeU)))) 
                | (0x1cU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0xeU))))) {
        if ((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                             >> 0xeU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0xeU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 0x12U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0xeU)));
        } else if ((0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0xeU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0xeU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 0x12U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0xeU)));
        } else if ((0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0xeU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0xeU)) * ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 0x12U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0xeU)));
        } else if ((0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0xeU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0xeU)) & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 0x12U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0xeU)));
        } else if ((0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0xeU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0xeU)) | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 0x12U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0xeU)));
        } else if ((0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0xeU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0xeU)) ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 0x12U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0xeU)));
        } else if ((0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0xeU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                     << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 >> 0x14U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 0x12U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0xeU)));
        }
    } else if (((((((((0x1dU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0xeU))) 
                      | (0x1eU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xeU)))) 
                     | (0x1fU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xeU)))) 
                    | (0x20U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0xeU)))) 
                   | (0x21U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0xeU)))) 
                  | (0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU)))) 
                 | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0xeU)))) 
                | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0xeU))))) {
        if ((0x1dU != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0xeU)))) {
            if ((0x1eU != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0xeU)))) {
                if ((0x1fU != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU)))) {
                    if ((0x20U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xeU)))) {
                        if ((0x21U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0xeU)))) {
                            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                                = ((0x19U == (0x3fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0xeU)))
                                    ? ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x14U)) : 
                                   ((0x1bU == (0x3fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0xeU)))
                                     ? ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 0xcU) | 
                                        (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x14U))
                                     : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         << 0x12U) 
                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0xeU))));
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xeU))) 
                        | (0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0xeU)))) 
                       | (8U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0xeU)))) 
                      | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xeU)))) 
                     | (9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU)))) 
                    | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0xeU)))) 
                   | (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU)))) 
                  | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU))))))) {
        if ((1U & (~ ((((((((6U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0xeU))) 
                            | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xeU)))) 
                           | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0xeU)))) 
                          | (0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0xeU)))) 
                         | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xeU)))) 
                        | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xeU)))) 
                       | (4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0xeU)))) 
                      | (2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0xeU))))))) {
            if (((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU))) 
                       | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xeU)))) 
                      | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xeU)))) 
                     | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0xeU)))) 
                    | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0xeU)))) 
                   | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU)))) 
                  | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU)))) 
                 | (0x1cU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0xeU))))) {
                if ((1U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     >> 0xeU)))) {
                    if ((0xcU != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xeU)))) {
                        if ((0xbU != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xeU)))) {
                            if ((0xdU != (0x3fU & (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0xeU)))) {
                                if ((0xeU != (0x3fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0xeU)))) {
                                    if ((0xfU != (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0xeU)))) {
                                        if ((0x16U 
                                             != (0x3fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0xeU)))) {
                                            vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                                                = (
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                     << 0xcU) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0x14U)) 
                                                   + 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     << 0x12U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                       >> 0xeU)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if (((((((((0x1dU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0xeU))) 
                              | (0x1eU == (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xeU)))) 
                             | (0x1fU == (0x3fU & (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0xeU)))) 
                            | (0x20U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0xeU)))) 
                           | (0x21U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0xeU)))) 
                          | (0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0xeU)))) 
                         | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xeU)))) 
                        | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0xeU))))) {
                if ((0x1dU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU)))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x14U)) 
                           + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 0xeU)));
                } else if ((0x1eU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xeU)))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x14U)) 
                           + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 0xeU)));
                } else if ((0x1fU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xeU)))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x14U)) 
                           + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 0xeU)));
                } else if ((0x20U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xeU)))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x14U)) 
                           + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 0xeU)));
                } else if ((0x21U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xeU)))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x14U)) 
                           + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 0xeU)));
                } else if ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xeU)))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x14U)) 
                           + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 0xeU)));
                } else if ((0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xeU)))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = (0xfffffffeU & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x12U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0xeU)) 
                                          + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              << 0x12U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0xeU))));
                }
            }
        }
    }
    vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX 
        = (((((((((0x1cU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0xeU))) | 
                  (0x1dU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0xeU)))) | 
                 (0x1eU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     >> 0xeU)))) | 
                (0x1fU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0xeU)))) | (0x20U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0xeU)))) 
              | (0x21U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0xeU)))) | (0x19U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0xeU)))) 
            | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  >> 0xeU)))) & ((0x1cU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0xeU)))
                                                  ? 
                                                 ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x12U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0xeU)) 
                                                   == 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0x12U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0xeU)))
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0xeU)))
                                                   ? 
                                                  ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      << 0x12U) 
                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        >> 0xeU)) 
                                                    == 
                                                    ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 0x12U) 
                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 0xeU)))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0xeU)))
                                                    ? 
                                                   (VL_LTS_III(32, 
                                                               ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                 << 0x12U) 
                                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                   >> 0xeU)), 
                                                               ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                 << 0x12U) 
                                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                   >> 0xeU)))
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0xeU)))
                                                     ? 
                                                    (VL_GTES_III(32, 
                                                                 ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                   << 0x12U) 
                                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                     >> 0xeU)), 
                                                                 ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                   << 0x12U) 
                                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                     >> 0xeU)))
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          >> 0xeU)))
                                                      ? 
                                                     ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         << 0x12U) 
                                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                           >> 0xeU)) 
                                                       < 
                                                       ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         << 0x12U) 
                                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                           >> 0xeU)))
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((0x21U 
                                                       != 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                           >> 0xeU))) 
                                                      | ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            << 0x12U) 
                                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              >> 0xeU)) 
                                                          >= 
                                                          ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                            << 0x12U) 
                                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                              >> 0xeU)))
                                                          ? 1U
                                                          : 0U))))))));
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(
                                                         (0x330U 
                                                          == 
                                                          (0x707f0U 
                                                           & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                 & (0U 
                                                    == 
                                                    (0x7fU 
                                                     & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         << 3U) 
                                                        | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x1dU)))))
                                                 ? 1U
                                                 : 
                                                (((IData)(
                                                          (0x330U 
                                                           == 
                                                           (0x707f0U 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                  & (0x20U 
                                                     == 
                                                     (0x7fU 
                                                      & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          << 3U) 
                                                         | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x1dU)))))
                                                  ? 2U
                                                  : 
                                                 (((IData)(
                                                           (0x70330U 
                                                            == 
                                                            (0x707f0U 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                   & (0U 
                                                      == 
                                                      (0x7fU 
                                                       & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 3U) 
                                                          | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x1dU)))))
                                                   ? 3U
                                                   : 
                                                  (((IData)(
                                                            (0x60330U 
                                                             == 
                                                             (0x707f0U 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                    & (0U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 3U) 
                                                           | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x1dU)))))
                                                    ? 4U
                                                    : 
                                                   (((IData)(
                                                             (0x40330U 
                                                              == 
                                                              (0x707f0U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                     & (0U 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 3U) 
                                                            | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x1dU)))))
                                                     ? 5U
                                                     : 
                                                    (((IData)(
                                                              (0x20330U 
                                                               == 
                                                               (0x707f0U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                      & (0U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 3U) 
                                                             | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x1dU)))))
                                                      ? 6U
                                                      : 
                                                     (((IData)(
                                                               (0x30330U 
                                                                == 
                                                                (0x707f0U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                       & (0U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 3U) 
                                                              | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x1dU)))))
                                                       ? 7U
                                                       : 
                                                      (((IData)(
                                                                (0x50330U 
                                                                 == 
                                                                 (0x707f0U 
                                                                  & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                        & (0x20U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 3U) 
                                                               | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x1dU)))))
                                                        ? 8U
                                                        : 
                                                       (((IData)(
                                                                 (0x50330U 
                                                                  == 
                                                                  (0x707f0U 
                                                                   & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                         & (0U 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 3U) 
                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1dU)))))
                                                         ? 9U
                                                         : 
                                                        (((IData)(
                                                                  (0x10330U 
                                                                   == 
                                                                   (0x707f0U 
                                                                    & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                          & (0U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 3U) 
                                                                 | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x1dU)))))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(
                                                                   (0x330U 
                                                                    == 
                                                                    (0x707f0U 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                           & (1U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   << 3U) 
                                                                  | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x1dU)))))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   (0x130U 
                                                                    == 
                                                                    (0x707f0U 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    (0x70130U 
                                                                     == 
                                                                     (0x707f0U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     (0x60130U 
                                                                      == 
                                                                      (0x707f0U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      (0x40130U 
                                                                       == 
                                                                       (0x707f0U 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       (0x20130U 
                                                                        == 
                                                                        (0x707f0U 
                                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        (0x30130U 
                                                                         == 
                                                                         (0x707f0U 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(
                                                                          (0x50130U 
                                                                           == 
                                                                           (0x707f0U 
                                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                                  & (0x20U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          << 3U) 
                                                                         | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x1dU)))))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(
                                                                           (0x50130U 
                                                                            == 
                                                                            (0x707f0U 
                                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 3U) 
                                                                          | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x1dU)))))
                                                                   ? 0x13U
                                                                   : 
                                                                  (((IData)(
                                                                            (0x10130U 
                                                                             == 
                                                                             (0x707f0U 
                                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                                                                    & (0U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 3U) 
                                                                           | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x1dU)))))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 4U)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 4U)))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              (0x20030U 
                                                                               == 
                                                                               (0x707f0U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               (0x20230U 
                                                                                == 
                                                                                (0x707f0U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 4U)))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x670U 
                                                                                == 
                                                                                (0x707f0U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                (0x630U 
                                                                                == 
                                                                                (0x707f0U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                (0x10630U 
                                                                                == 
                                                                                (0x707f0U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x40630U 
                                                                                == 
                                                                                (0x707f0U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x50630U 
                                                                                == 
                                                                                (0x707f0U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x60630U 
                                                                                == 
                                                                                (0x707f0U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                (0x70630U 
                                                                                == 
                                                                                (0x707f0U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                (0x20730U 
                                                                                == 
                                                                                (0x707f0U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x10730U 
                                                                                == 
                                                                                (0x707f0U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__from_AGEX_to_FE = (((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX)));
    vlSelf->__PVT__from_AGEX_to_DE = ((0x3e0U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 4U)) 
                                      | ((0x1eU & (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 3U)) 
                                         | (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)));
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
                                                              == 
                                                              (0x7fU 
                                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 4U)))) 
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
    vlSelf->__PVT__my_DE_stage__DOT__sxt_imm_DE = (
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    >> 3U)))) 
                                                     << 0xbU) 
                                                    | (0x7ffU 
                                                       & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 8U) 
                                                          | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x18U))))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     >> 3U)))) 
                                                      << 0xbU) 
                                                     | ((0x7e0U 
                                                         & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 8U) 
                                                            | (0xe0U 
                                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x18U)))) 
                                                        | (0x1fU 
                                                           & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0xbU))))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      >> 3U)))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]) 
                                                         | ((0x7e0U 
                                                             & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 8U) 
                                                                | (0xe0U 
                                                                   & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x18U)))) 
                                                            | (0x1eU 
                                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0xbU)))))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                       ? 
                                                      (0xfffff000U 
                                                       & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 0x1cU) 
                                                          | (0xffff000U 
                                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 4U))))
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        >> 3U)))) 
                                                         << 0x14U) 
                                                        | ((0xff000U 
                                                            & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 4U)) 
                                                           | ((0x800U 
                                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0xdU)) 
                                                              | ((0x7e0U 
                                                                  & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 8U) 
                                                                     | (0xe0U 
                                                                        & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x18U)))) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x18U))))))
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                         ? 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 3U)))) 
                                                          << 0xaU) 
                                                         | (0x3ffU 
                                                            & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 8U) 
                                                               | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x18U))))
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
}
