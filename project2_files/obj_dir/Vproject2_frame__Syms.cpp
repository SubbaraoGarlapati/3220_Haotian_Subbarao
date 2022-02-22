// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vproject2_frame__Syms.h"
#include "Vproject2_frame.h"
#include "Vproject2_frame___024root.h"
#include "Vproject2_frame_project2_frame.h"
#include "Vproject2_frame_WB_STAGE.h"

// FUNCTIONS
Vproject2_frame__Syms::~Vproject2_frame__Syms()
{
}

Vproject2_frame__Syms::Vproject2_frame__Syms(VerilatedContext* contextp, const char* namep,Vproject2_frame* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
    , TOP__project2_frame(Verilated::catName(namep, "project2_frame"))
    , TOP__project2_frame__my_WB_stage(Verilated::catName(namep, "project2_frame.my_WB_stage"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.project2_frame = &TOP__project2_frame;
    TOP__project2_frame.my_WB_stage = &TOP__project2_frame__my_WB_stage;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__project2_frame.__Vconfigure(this, true);
    TOP__project2_frame__my_WB_stage.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_project2_frame__my_WB_stage.configure(this, name(), "project2_frame.my_WB_stage", "my_WB_stage", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_project2_frame__my_WB_stage.varInsert(__Vfinal,"WB_counters", &(TOP__project2_frame__my_WB_stage.WB_counters), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_project2_frame__my_WB_stage.varInsert(__Vfinal,"last_WB_value", &(TOP__project2_frame__my_WB_stage.last_WB_value), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
    }
}
