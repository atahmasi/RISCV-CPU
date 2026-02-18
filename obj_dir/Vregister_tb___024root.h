// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_TB___024ROOT_H_
#define VERILATED_VREGISTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregister_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ register_tb__DOT__clk;
    CData/*0:0*/ register_tb__DOT__rst;
    CData/*0:0*/ register_tb__DOT__we;
    CData/*4:0*/ register_tb__DOT__rs1;
    CData/*4:0*/ register_tb__DOT__rs2;
    CData/*4:0*/ register_tb__DOT__rd;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__register_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ register_tb__DOT__wd;
    IData/*31:0*/ register_tb__DOT__rd1;
    IData/*31:0*/ register_tb__DOT__rd2;
    IData/*31:0*/ register_tb__DOT__tests_passed;
    IData/*31:0*/ register_tb__DOT__unnamedblk1__DOT__ok;
    IData/*31:0*/ register_tb__DOT__unnamedblk2__DOT__ok;
    IData/*31:0*/ register_tb__DOT__unnamedblk3__DOT__ok;
    IData/*31:0*/ register_tb__DOT__unnamedblk4__DOT__ok;
    IData/*31:0*/ register_tb__DOT__unnamedblk5__DOT__ok;
    IData/*31:0*/ register_tb__DOT__unnamedblk6__DOT__ok;
    IData/*31:0*/ register_tb__DOT__unnamedblk7__DOT__ok;
    IData/*31:0*/ register_tb__DOT__unnamedblk8__DOT__ok;
    IData/*31:0*/ register_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> register_tb__DOT__dut__DOT__regs;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h072c1f85__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregister_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister_tb___024root(Vregister_tb__Syms* symsp, const char* v__name);
    ~Vregister_tb___024root();
    VL_UNCOPYABLE(Vregister_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
