// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_tb.h for the primary calling header

#include "Vcounter_tb__pch.h"
#include "Vcounter_tb___024unit.h"

VL_ATTR_COLD void Vcounter_tb___024unit___ctor_var_reset(Vcounter_tb___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcounter_tb___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
