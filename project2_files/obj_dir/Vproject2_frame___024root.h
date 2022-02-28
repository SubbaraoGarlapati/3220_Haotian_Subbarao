// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vproject2_frame.h for the primary calling header

#ifndef VERILATED_VPROJECT2_FRAME___024ROOT_H_
#define VERILATED_VPROJECT2_FRAME___024ROOT_H_  // guard

#include "verilated.h"

class Vproject2_frame__Syms;
class Vproject2_frame_project2_frame;

VL_MODULE(Vproject2_frame___024root) {
  public:
    // CELLS
    Vproject2_frame_project2_frame* project2_frame;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vproject2_frame__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vproject2_frame___024root(const char* name);
    ~Vproject2_frame___024root();
    VL_UNCOPYABLE(Vproject2_frame___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vproject2_frame__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
