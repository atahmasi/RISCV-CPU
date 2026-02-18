// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb___024root.h"

VL_ATTR_COLD void Valu_tb___024root___eval_static__TOP(Valu_tb___024root* vlSelf);

VL_ATTR_COLD void Valu_tb___024root___eval_static(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_static\n"); );
    // Body
    Valu_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Valu_tb___024root___eval_static__TOP(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->alu_tb__DOT__tests = 0U;
    vlSelf->alu_tb__DOT__pass = 0U;
}

VL_ATTR_COLD void Valu_tb___024root___eval_final(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__stl(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Valu_tb___024root___eval_phase__stl(Valu_tb___024root* vlSelf);

VL_ATTR_COLD void Valu_tb___024root___eval_settle(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Valu_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/alu_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Valu_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__stl(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf);

VL_ATTR_COLD void Valu_tb___024root___eval_stl(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Valu_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Valu_tb___024root___eval_triggers__stl(Valu_tb___024root* vlSelf);

VL_ATTR_COLD bool Valu_tb___024root___eval_phase__stl(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Valu_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Valu_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__nba(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu_tb___024root___ctor_var_reset(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->alu_tb__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__op = VL_RAND_RESET_I(4);
    vlSelf->alu_tb__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__tests = 0;
    vlSelf->alu_tb__DOT__pass = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
