// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcpu_tb__pch.h"

//============================================================
// Constructors

Vcpu_tb::Vcpu_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcpu_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcpu_tb::Vcpu_tb(const char* _vcname__)
    : Vcpu_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcpu_tb::~Vcpu_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcpu_tb___024root___eval_debug_assertions(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcpu_tb___024root___eval_static(Vcpu_tb___024root* vlSelf);
void Vcpu_tb___024root___eval_initial(Vcpu_tb___024root* vlSelf);
void Vcpu_tb___024root___eval_settle(Vcpu_tb___024root* vlSelf);
void Vcpu_tb___024root___eval(Vcpu_tb___024root* vlSelf);

void Vcpu_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcpu_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcpu_tb___024root___eval_static(&(vlSymsp->TOP));
        Vcpu_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vcpu_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcpu_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcpu_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vcpu_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcpu_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcpu_tb___024root___eval_final(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb::final() {
    Vcpu_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcpu_tb::hierName() const { return vlSymsp->name(); }
const char* Vcpu_tb::modelName() const { return "Vcpu_tb"; }
unsigned Vcpu_tb::threads() const { return 1; }
void Vcpu_tb::prepareClone() const { contextp()->prepareClone(); }
void Vcpu_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vcpu_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcpu_tb::trace()' called on model that was Verilated without --trace option");
}
