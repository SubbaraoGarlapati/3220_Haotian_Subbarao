// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame_project2_frame.h"

extern const VlWide<22>/*703:0*/ Vproject2_frame__ConstPool__CONST_h62ab283d_0;

VL_ATTR_COLD void Vproject2_frame_project2_frame___initial__TOP__project2_frame__4(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___initial__TOP__project2_frame__4\n"); );
    // Body
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(22, Vproject2_frame__ConstPool__CONST_h62ab283d_0)
                 ,  &(vlSelf->__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(22, Vproject2_frame__ConstPool__CONST_h62ab283d_0)
                 ,  &(vlSelf->__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*3:0*/, 64> Vproject2_frame__ConstPool__TABLE_h2b6e92a2_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vproject2_frame__ConstPool__TABLE_h5338f905_0;

VL_ATTR_COLD void Vproject2_frame_project2_frame___settle__TOP__project2_frame__5(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___settle__TOP__project2_frame__5\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = ((IData)(4U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
    vlSelf->__PVT__from_AGEX_to_WB = (((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__hit_prediction_AGEX)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__branch_count_AGEX)));
    vlSelf->__PVT__my_FE_stage__DOT__memaddr_pt_FE 
        = (0xffU & ((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U) ^ (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__bhr_AGEX)));
    vlSelf->__PVT__from_MEM_to_DE = ((0x1f0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 6U)) 
                                     | (0xfU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 5U)));
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
    vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX 
        = ((0x20000U & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U])
            ? ((1U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                      >> 0x10U)) != (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction))
            : (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction));
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
    vlSelf->__PVT__from_FE_to_AGEX = (((IData)(vlSelf->__PVT__my_FE_stage__DOT__memaddr_pt_FE) 
                                       << 4U) | (0xfU 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                    >> 2U)));
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
                                            vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                                                = ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)
                                                    ? 
                                                   (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                        >> 2U)) 
                                                    + 
                                                    ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 4U) 
                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 0x1cU)))
                                                    : 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                       >> 2U)));
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
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)
                            ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)))
                            : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U)));
                } else if ((0x1eU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)
                            ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)))
                            : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U)));
                } else if ((0x1fU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)
                            ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)))
                            : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U)));
                } else if ((0x20U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)
                            ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)))
                            : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U)));
                } else if ((0x21U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)
                            ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)))
                            : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U)));
                } else if ((0x19U == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)
                            ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)) 
                               + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 4U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x1cU)))
                            : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U)));
                } else if ((0x1bU == (0x3fU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x1cU))))) {
                    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                        = ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction)
                            ? (0xfffffffeU & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 4U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x1cU)) 
                                              + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 0x1cU))))
                            : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x1eU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 2U)));
                }
            }
        }
    }
    vlSelf->__PVT__from_AGEX_to_DE = ((0x3e0U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x12U)) 
                                      | ((0x1eU & (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x11U)) 
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
    vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_btb_AGEX 
        = (0xfU & (IData)(vlSelf->__PVT__from_FE_to_AGEX));
    vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_pt_AGEX 
        = (0xffU & ((IData)(vlSelf->__PVT__from_FE_to_AGEX) 
                    >> 4U));
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
    vlSelf->__PVT__my_AGEX_stage__DOT__rd_val_pt_AGEX 
        = vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX
        [vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_pt_AGEX];
    vlSelf->__PVT__from_AGEX_to_FE[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__rd_val_pt_AGEX)) 
                                                   << 0x3aU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__my_AGEX_stage__DOT__btb_tag_AGEX
                                                                      [vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_btb_AGEX])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__my_AGEX_stage__DOT__btb_value_AGEX
                                                                       [vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_btb_AGEX])))));
    vlSelf->__PVT__from_AGEX_to_FE[1U] = ((vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                                           << 0x1cU) 
                                          | (IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__rd_val_pt_AGEX)) 
                                                       << 0x3aU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__PVT__my_AGEX_stage__DOT__btb_tag_AGEX
                                                                          [vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_btb_AGEX])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__my_AGEX_stage__DOT__btb_value_AGEX
                                                                           [vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_btb_AGEX])))) 
                                                     >> 0x20U)));
    vlSelf->__PVT__from_AGEX_to_FE[2U] = (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                                           << 0x1cU) 
                                          | (vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX 
                                             >> 4U));
    vlSelf->__PVT__my_FE_stage__DOT__is_BTB_hit_FE 
        = (((0x3ffffffU & vlSelf->__PVT__from_AGEX_to_FE[1U]) 
            == (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                >> 6U)) ? 1U : 0U);
    vlSelf->__PVT__my_FE_stage__DOT__guessed_br_address 
        = ((2U <= (3U & (vlSelf->__PVT__from_AGEX_to_FE[1U] 
                         >> 0x1aU))) ? vlSelf->__PVT__from_AGEX_to_FE[0U]
            : ((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch));
}

VL_ATTR_COLD void Vproject2_frame_project2_frame___ctor_var_reset(Vproject2_frame_project2_frame* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vproject2_frame_project2_frame___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__from_FE_to_AGEX = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(93, vlSelf->__PVT__from_AGEX_to_FE);
    vlSelf->__PVT__from_MEM_to_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_AGEX_to_DE = VL_RAND_RESET_I(10);
    vlSelf->__PVT__from_MEM_to_DE = VL_RAND_RESET_I(9);
    vlSelf->__PVT__from_MEM_to_AGEX = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_AGEX_to_WB = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(178, vlSelf->__PVT__my_FE_stage__DOT__FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__memaddr_pt_FE = VL_RAND_RESET_I(8);
    vlSelf->__PVT__my_FE_stage__DOT__is_BTB_hit_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__guessed_br_address = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(290, vlSelf->__PVT__my_DE_stage__DOT__DE_latch);
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
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__is_type_I_AGEX_Valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__is_type_I_MEM_Valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__is_type_I_WB_Valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(181, vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch);
    vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_AGEX_stage__DOT__actual_br_direction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_AGEX_stage__DOT__bhr_AGEX = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->__PVT__my_AGEX_stage__DOT__pt_AGEX[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->__PVT__my_AGEX_stage__DOT__btb_tag_AGEX[__Vi0] = VL_RAND_RESET_I(26);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->__PVT__my_AGEX_stage__DOT__btb_value_AGEX[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_pt_AGEX = VL_RAND_RESET_I(8);
    vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_btb_AGEX = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_AGEX_stage__DOT__rd_val_pt_AGEX = VL_RAND_RESET_I(2);
    vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_btb_DE = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_AGEX_stage__DOT__hit_prediction_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__branch_count_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__newpc_AGEX = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(148, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch);
    VL_RAND_RESET_W(178, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
    vlSelf->__Vdlyvset__my_DE_stage__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 0;
    vlSelf->__Vdlyvval__my_DE_stage__DOT__regs__v32 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__my_DE_stage__DOT__regs__v32 = 0;
    vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0;
}
