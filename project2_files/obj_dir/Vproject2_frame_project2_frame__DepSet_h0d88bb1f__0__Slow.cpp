// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame_project2_frame.h"

VL_ATTR_COLD void Vproject2_frame_project2_frame___initial__TOP__project2_frame__1(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___initial__TOP__project2_frame__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hc8e094aa__0;
    VlWide<5>/*159:0*/ __Vtemp_hc8e094aa__1;
    // Body
    __Vtemp_hc8e094aa__0[0U] = 0x2e6d656dU;
    __Vtemp_hc8e094aa__0[1U] = 0x75697063U;
    __Vtemp_hc8e094aa__0[2U] = 0x74322f61U;
    __Vtemp_hc8e094aa__0[3U] = 0x2f706172U;
    __Vtemp_hc8e094aa__0[4U] = 0x74657374U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_hc8e094aa__0)
                 ,  &(vlSelf->__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
    __Vtemp_hc8e094aa__1[0U] = 0x2e6d656dU;
    __Vtemp_hc8e094aa__1[1U] = 0x75697063U;
    __Vtemp_hc8e094aa__1[2U] = 0x74322f61U;
    __Vtemp_hc8e094aa__1[3U] = 0x2f706172U;
    __Vtemp_hc8e094aa__1[4U] = 0x74657374U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_hc8e094aa__1)
                 ,  &(vlSelf->__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*3:0*/, 64> Vproject2_frame__ConstPool__TABLE_h2b6e92a2_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vproject2_frame__ConstPool__TABLE_hc27450fb_0;

VL_ATTR_COLD void Vproject2_frame_project2_frame___settle__TOP__project2_frame__5(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___settle__TOP__project2_frame__5\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = ((IData)(4U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
    vlSelf->__PVT__from_MEM_to_DE = ((0x1f0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                >> 5U)) 
                                     | (0xfU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                >> 4U)));
    if (((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0xeU))) | (0xcU 
                                              == (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0xeU)))) 
              | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0xeU)))) | (0x1cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0xeU)))) 
            | (0x1dU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  >> 0xeU)))) | (0x1eU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0xeU)))) 
          | (0x1fU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0xeU)))) | (0x20U 
                                               == (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
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
        if ((1U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                             >> 0xeU)))) {
            if ((0xcU != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0xeU)))) {
                if ((0x16U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xeU)))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = ((0x1cU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0xeU)))
                            ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x14U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0xeU)))
                            : ((0x1dU == (0x3fU & (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0xeU)))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                     << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x14U)) 
                                   + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 0x12U) | 
                                      (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 0xeU))) : 
                               ((0x1eU == (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xeU)))
                                 ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                      << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x14U)) 
                                    + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        << 0x12U) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 0xeU))) : 
                                ((0x1fU == (0x3fU & 
                                            (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0xeU)))
                                  ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       << 0xcU) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x14U)) 
                                     + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         << 0x12U) 
                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0xeU)))
                                  : (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       << 0xcU) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x14U)) 
                                     + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         << 0x12U) 
                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0xeU)))))));
                }
            }
        }
    } else {
        if ((0x21U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0xeU)))) {
            if ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0xeU)))) {
                vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                    = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                        << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0x14U));
            } else if ((0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xeU)))) {
                vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                    = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                        << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0x14U));
            } else if ((0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xeU)))) {
                vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                    = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                        << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0xeU));
            }
        }
        if ((0x21U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0xeU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                     << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 >> 0x14U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 0x12U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0xeU)));
        } else if ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0xeU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                     << 0xcU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 >> 0x14U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 0x12U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0xeU)));
        } else if ((0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0xeU)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                = (0xfffffffeU & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                    << 0x12U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0xeU)) 
                                  + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      << 0x12U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0xeU))));
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
    __Vtableidx1 = vlSelf->__PVT__my_DE_stage__DOT__op_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = Vproject2_frame__ConstPool__TABLE_h2b6e92a2_0
        [__Vtableidx1];
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = Vproject2_frame__ConstPool__TABLE_hc27450fb_0
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
                                                      (0xff000000U 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          << 8U))
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
                                                        : 0U)))));
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

VL_ATTR_COLD void Vproject2_frame_project2_frame___ctor_var_reset(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__from_AGEX_to_FE = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__from_MEM_to_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_AGEX_to_DE = VL_RAND_RESET_I(10);
    vlSelf->__PVT__from_MEM_to_DE = VL_RAND_RESET_I(9);
    vlSelf->__PVT__from_MEM_to_AGEX = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(132, vlSelf->__PVT__my_FE_stage__DOT__FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_AGEX = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(244, vlSelf->__PVT__my_DE_stage__DOT__DE_latch);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__csr_regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_RAND_RESET_I(6);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_RAND_RESET_I(3);
    vlSelf->__PVT__my_DE_stage__DOT__sxt_imm_DE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_AGEX_Valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_MEM_Valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_WB_Valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(148, vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch);
    vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(148, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch);
    vlSelf->__PVT__my_MEM_stage__DOT__memaddr_MEM = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_MEM_stage__DOT__wr_val_MEM = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_MEM_stage__DOT__wr_mem_MEM = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
    vlSelf->__Vdlyvset__my_DE_stage__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 0;
    vlSelf->__Vdlyvval__my_DE_stage__DOT__regs__v32 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__my_DE_stage__DOT__regs__v32 = 0;
}
