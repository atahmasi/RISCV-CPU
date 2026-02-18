// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder_tb.h for the primary calling header

#include "Vdecoder_tb__pch.h"
#include "Vdecoder_tb___024root.h"

VL_ATTR_COLD void Vdecoder_tb___024root___eval_static__TOP(Vdecoder_tb___024root* vlSelf);

VL_ATTR_COLD void Vdecoder_tb___024root___eval_static(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_static\n"); );
    // Body
    Vdecoder_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vdecoder_tb___024root___eval_static__TOP(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->decoder_tb__DOT__tests_passed = 0U;
}

VL_ATTR_COLD void Vdecoder_tb___024root___eval_final(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__stl(Vdecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdecoder_tb___024root___eval_phase__stl(Vdecoder_tb___024root* vlSelf);

VL_ATTR_COLD void Vdecoder_tb___024root___eval_settle(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_settle\n"); );
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
            Vdecoder_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/decoder_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdecoder_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__stl(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vdecoder_tb___024root___act_sequent__TOP__0(Vdecoder_tb___024root* vlSelf);

VL_ATTR_COLD void Vdecoder_tb___024root___eval_stl(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdecoder_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdecoder_tb___024root___eval_triggers__stl(Vdecoder_tb___024root* vlSelf);

VL_ATTR_COLD bool Vdecoder_tb___024root___eval_phase__stl(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdecoder_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vdecoder_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__act(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__nba(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdecoder_tb___024root___ctor_var_reset(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->decoder_tb__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->decoder_tb__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->decoder_tb__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->decoder_tb__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->decoder_tb__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->decoder_tb__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->decoder_tb__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->decoder_tb__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->decoder_tb__DOT__tests_passed = 0;
    vlSelf->decoder_tb__DOT__local_checks = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
