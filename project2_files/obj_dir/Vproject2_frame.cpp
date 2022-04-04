// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vproject2_frame.h"
#include "Vproject2_frame__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vproject2_frame::Vproject2_frame(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vproject2_frame__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , project2_frame{vlSymsp->TOP.project2_frame}
    , rootp{&(vlSymsp->TOP)}
{
}

Vproject2_frame::Vproject2_frame(const char* _vcname__)
    : Vproject2_frame(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vproject2_frame::~Vproject2_frame() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vproject2_frame___024root___eval_initial(Vproject2_frame___024root* vlSelf);
void Vproject2_frame___024root___eval_settle(Vproject2_frame___024root* vlSelf);
void Vproject2_frame___024root___eval(Vproject2_frame___024root* vlSelf);
QData Vproject2_frame___024root___change_request(Vproject2_frame___024root* vlSelf);
#ifdef VL_DEBUG
void Vproject2_frame___024root___eval_debug_assertions(Vproject2_frame___024root* vlSelf);
#endif  // VL_DEBUG
void Vproject2_frame___024root___final(Vproject2_frame___024root* vlSelf);

static void _eval_initial_loop(Vproject2_frame__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vproject2_frame___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vproject2_frame___024root___eval_settle(&(vlSymsp->TOP));
        Vproject2_frame___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vproject2_frame___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("project2_frame.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vproject2_frame___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vproject2_frame::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vproject2_frame::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vproject2_frame___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vproject2_frame___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vproject2_frame___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("project2_frame.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vproject2_frame___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vproject2_frame::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vproject2_frame::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vproject2_frame::final() {
    Vproject2_frame___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vproject2_frame___024root__trace_init_top(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vproject2_frame___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproject2_frame___024root*>(voidSelf);
    Vproject2_frame__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vproject2_frame___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vproject2_frame___024root__trace_register(Vproject2_frame___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vproject2_frame::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vproject2_frame___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
