// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vproject2_frame.h for the primary calling header

#ifndef VERILATED_VPROJECT2_FRAME_WB_STAGE_H_
#define VERILATED_VPROJECT2_FRAME_WB_STAGE_H_  // guard

#include "verilated.h"

class Vproject2_frame__Syms;
VL_MODULE(Vproject2_frame_WB_STAGE) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__from_WB_to_FE,0,0);
    VL_OUT8(__PVT__from_WB_to_AGEX,0,0);
    VL_OUT8(__PVT__from_WB_to_MEM,0,0);
    CData/*3:0*/ __PVT__wcsrno_WB;
    CData/*0:0*/ __PVT__wr_csr_WB;
    VL_INW(__PVT__from_MEM_latch,147,0,5);
    VL_IN64(__PVT__from_AGEX_to_WB,63,0);
    VL_OUT64(__PVT__from_WB_to_DE,51,0);
    VlUnpacked<IData/*31:0*/, 32> last_WB_value;
    VlUnpacked<IData/*31:0*/, 32> WB_counters;

    // INTERNAL VARIABLES
    Vproject2_frame__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vproject2_frame_WB_STAGE(const char* name);
    ~Vproject2_frame_WB_STAGE();
    VL_UNCOPYABLE(Vproject2_frame_WB_STAGE);

    // INTERNAL METHODS
    void __Vconfigure(Vproject2_frame__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
