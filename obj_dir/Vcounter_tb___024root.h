// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter_tb.h for the primary calling header

#ifndef VERILATED_VCOUNTER_TB___024ROOT_H_
#define VERILATED_VCOUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vcounter_tb___024unit;


class Vcounter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounter_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcounter_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ counter_tb__DOT__clk;
    CData/*0:0*/ counter_tb__DOT__reset;
    CData/*7:0*/ counter_tb__DOT__count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__counter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__counter_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcounter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcounter_tb___024root(Vcounter_tb__Syms* symsp, const char* v__name);
    ~Vcounter_tb___024root();
    VL_UNCOPYABLE(Vcounter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
