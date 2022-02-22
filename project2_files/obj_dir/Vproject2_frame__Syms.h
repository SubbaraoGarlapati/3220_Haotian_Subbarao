// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPROJECT2_FRAME__SYMS_H_
#define VERILATED_VPROJECT2_FRAME__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vproject2_frame.h"

// INCLUDE MODULE CLASSES
#include "Vproject2_frame___024root.h"
#include "Vproject2_frame_project2_frame.h"
#include "Vproject2_frame_WB_STAGE.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vproject2_frame__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vproject2_frame* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vproject2_frame___024root      TOP;
    Vproject2_frame_project2_frame TOP__project2_frame;
    Vproject2_frame_WB_STAGE       TOP__project2_frame__my_WB_stage;

    // SCOPE NAMES
    VerilatedScope __Vscope_project2_frame__my_WB_stage;

    // CONSTRUCTORS
    Vproject2_frame__Syms(VerilatedContext* contextp, const char* namep, Vproject2_frame* modelp);
    ~Vproject2_frame__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
