// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_tb.h for the primary calling header

#include "Vcounter_tb__pch.h"
#include "Vcounter_tb__Syms.h"
#include "Vcounter_tb___024unit.h"

void Vcounter_tb___024unit___ctor_var_reset(Vcounter_tb___024unit* vlSelf);

Vcounter_tb___024unit::Vcounter_tb___024unit(Vcounter_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcounter_tb___024unit___ctor_var_reset(this);
}

void Vcounter_tb___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcounter_tb___024unit::~Vcounter_tb___024unit() {
}
