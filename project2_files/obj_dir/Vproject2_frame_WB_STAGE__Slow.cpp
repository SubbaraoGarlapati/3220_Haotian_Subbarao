// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame_WB_STAGE.h"
#include "Vproject2_frame__Syms.h"

void Vproject2_frame_WB_STAGE___ctor_var_reset(Vproject2_frame_WB_STAGE* vlSelf);

Vproject2_frame_WB_STAGE::Vproject2_frame_WB_STAGE(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vproject2_frame_WB_STAGE___ctor_var_reset(this);
}

void Vproject2_frame_WB_STAGE::__Vconfigure(Vproject2_frame__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vproject2_frame_WB_STAGE::~Vproject2_frame_WB_STAGE() {
}
