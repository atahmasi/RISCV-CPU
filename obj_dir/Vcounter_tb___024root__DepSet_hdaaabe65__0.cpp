// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_tb.h for the primary calling header

#include "Vcounter_tb__pch.h"
#include "Vcounter_tb___024root.h"

VlCoroutine Vcounter_tb___024root___eval_initial__TOP__Vtiming__0(Vcounter_tb___024root* vlSelf);
VlCoroutine Vcounter_tb___024root___eval_initial__TOP__Vtiming__1(Vcounter_tb___024root* vlSelf);

void Vcounter_tb___024root___eval_initial(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_initial\n"); );
    // Body
    Vcounter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcounter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__counter_tb__DOT__clk__0 
        = vlSelf->counter_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__counter_tb__DOT__reset__0 
        = vlSelf->counter_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vcounter_tb___024root___eval_initial__TOP__Vtiming__1(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "counter_tb.v", 
                                           30);
        vlSelf->counter_tb__DOT__clk = (1U & (~ (IData)(vlSelf->counter_tb__DOT__clk)));
    }
}

void Vcounter_tb___024root___act_sequent__TOP__0(Vcounter_tb___024root* vlSelf);

void Vcounter_tb___024root___eval_act(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vcounter_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcounter_tb___024root___nba_sequent__TOP__0(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->counter_tb__DOT__count = ((IData)(vlSelf->counter_tb__DOT__reset)
                                       ? 0U : (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->counter_tb__DOT__count))));
}

void Vcounter_tb___024root___eval_nba(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcounter_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcounter_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vcounter_tb___024root___timing_resume(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vcounter_tb___024root___eval_triggers__act(Vcounter_tb___024root* vlSelf);

bool Vcounter_tb___024root___eval_phase__act(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcounter_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcounter_tb___024root___timing_resume(vlSelf);
        Vcounter_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcounter_tb___024root___eval_phase__nba(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcounter_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_tb___024root___dump_triggers__nba(Vcounter_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_tb___024root___dump_triggers__act(Vcounter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter_tb___024root___eval(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcounter_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("counter_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcounter_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("counter_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcounter_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcounter_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcounter_tb___024root___eval_debug_assertions(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
