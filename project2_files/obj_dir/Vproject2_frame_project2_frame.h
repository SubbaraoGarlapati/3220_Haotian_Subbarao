// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vproject2_frame.h for the primary calling header

#ifndef VERILATED_VPROJECT2_FRAME_PROJECT2_FRAME_H_
#define VERILATED_VPROJECT2_FRAME_PROJECT2_FRAME_H_  // guard

#include "verilated.h"

class Vproject2_frame__Syms;
class Vproject2_frame_WB_STAGE;

VL_MODULE(Vproject2_frame_project2_frame) {
  public:
    // CELLS
    Vproject2_frame_WB_STAGE* my_WB_stage;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __PVT__from_MEM_to_FE;
    CData/*0:0*/ __PVT__from_MEM_to_AGEX;
    CData/*5:0*/ __PVT__my_DE_stage__DOT__op_I_DE;
    CData/*3:0*/ __PVT__my_DE_stage__DOT__type_I_DE;
    CData/*2:0*/ __PVT__my_DE_stage__DOT__type_immediate_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__wr_reg_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__rs1_read_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__rs2_read_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__pipeline_stall_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_AGEX_Valid;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_MEM_Valid;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__unnamedblk1__DOT__is_type_I_WB_Valid;
    CData/*0:0*/ __PVT__my_AGEX_stage__DOT__br_cond_AGEX;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__my_DE_stage__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__my_MEM_stage__DOT__dmem__v0;
    SData/*9:0*/ __PVT__from_AGEX_to_DE;
    SData/*8:0*/ __PVT__from_MEM_to_DE;
    SData/*13:0*/ __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0;
    IData/*31:0*/ __PVT__cycle_count;
    VlWide<5>/*131:0*/ __PVT__my_FE_stage__DOT__FE_latch;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__PC_FE_latch;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__pcplus_FE;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__inst_count_FE;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__inst_count_AGEX;
    VlWide<8>/*243:0*/ __PVT__my_DE_stage__DOT__DE_latch;
    IData/*31:0*/ __PVT__my_DE_stage__DOT__sxt_imm_DE;
    VlWide<6>/*180:0*/ __PVT__my_AGEX_stage__DOT__AGEX_latch;
    IData/*31:0*/ __PVT__my_AGEX_stage__DOT__aluout_AGEX;
    IData/*31:0*/ __PVT__my_AGEX_stage__DOT__newpc_AGEX;
    VlWide<5>/*147:0*/ __PVT__my_MEM_stage__DOT__MEM_latch;
    VlWide<5>/*131:0*/ __Vdly__my_FE_stage__DOT__FE_latch;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__regs__v32;
    IData/*31:0*/ __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    QData/*32:0*/ __PVT__from_AGEX_to_FE;
    VlUnpacked<IData/*31:0*/, 16384> __PVT__my_FE_stage__DOT__imem;
    VlUnpacked<IData/*31:0*/, 32> __PVT__my_DE_stage__DOT__regs;
    VlUnpacked<IData/*31:0*/, 16> __PVT__my_DE_stage__DOT__csr_regs;
    VlUnpacked<IData/*31:0*/, 16384> __PVT__my_MEM_stage__DOT__dmem;

    // INTERNAL VARIABLES
    Vproject2_frame__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vproject2_frame_project2_frame(const char* name);
    ~Vproject2_frame_project2_frame();
    VL_UNCOPYABLE(Vproject2_frame_project2_frame);

    // INTERNAL METHODS
    void __Vconfigure(Vproject2_frame__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
