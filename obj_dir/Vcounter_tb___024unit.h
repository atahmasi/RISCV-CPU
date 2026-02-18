// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter_tb.h for the primary calling header

#ifndef VERILATED_VCOUNTER_TB___024UNIT_H_
#define VERILATED_VCOUNTER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcounter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounter_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vcounter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcounter_tb___024unit(Vcounter_tb__Syms* symsp, const char* v__name);
    ~Vcounter_tb___024unit();
    VL_UNCOPYABLE(Vcounter_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
