// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vproject2_frame.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vproject2_frame__Syms.h"
#include "Vproject2_frame_project2_frame.h"

void Vproject2_frame_project2_frame___ctor_var_reset(Vproject2_frame_project2_frame* vlSelf);

Vproject2_frame_project2_frame::Vproject2_frame_project2_frame(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vproject2_frame_project2_frame___ctor_var_reset(this);
}

void Vproject2_frame_project2_frame::__Vconfigure(Vproject2_frame__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vproject2_frame_project2_frame::~Vproject2_frame_project2_frame() {
}
