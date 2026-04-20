// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024UNIT_H_
#define VERILATED_VTOP_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024unit(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024unit();
    VL_UNCOPYABLE(Vtop_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
