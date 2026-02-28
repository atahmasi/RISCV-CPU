// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_tb.h for the primary calling header

#ifndef VERILATED_VCPU_TB___024ROOT_H_
#define VERILATED_VCPU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcpu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cpu_tb__DOT__clk;
    CData/*0:0*/ cpu_tb__DOT__rst;
    CData/*6:0*/ cpu_tb__DOT__dut__DOT__opcode;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__pc;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__instruction;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__rd1;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__rd2;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> cpu_tb__DOT__dut__DOT__imem;
    VlUnpacked<IData/*31:0*/, 32> cpu_tb__DOT__dut__DOT__rf__DOT__regs;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_tb___024root(Vcpu_tb__Syms* symsp, const char* v__name);
    ~Vcpu_tb___024root();
    VL_UNCOPYABLE(Vcpu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
