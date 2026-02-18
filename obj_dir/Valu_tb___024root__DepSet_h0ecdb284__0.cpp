// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb___024root.h"

VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf);

void Valu_tb___024root___eval_initial(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Valu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->alu_tb__DOT__y = ((8U & (IData)(vlSelf->alu_tb__DOT__op))
                               ? ((4U & (IData)(vlSelf->alu_tb__DOT__op))
                                   ? 0U : ((2U & (IData)(vlSelf->alu_tb__DOT__op))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                             ? 0U : 
                                            VL_SHIFTRS_III(32,32,5, vlSelf->alu_tb__DOT__a, 
                                                           (0x1fU 
                                                            & vlSelf->alu_tb__DOT__b)))))
                               : ((4U & (IData)(vlSelf->alu_tb__DOT__op))
                                   ? ((2U & (IData)(vlSelf->alu_tb__DOT__op))
                                       ? ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                           ? (vlSelf->alu_tb__DOT__a 
                                              >> (0x1fU 
                                                  & vlSelf->alu_tb__DOT__b))
                                           : (vlSelf->alu_tb__DOT__a 
                                              << (0x1fU 
                                                  & vlSelf->alu_tb__DOT__b)))
                                       : ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                           ? (VL_LTS_III(32, vlSelf->alu_tb__DOT__a, vlSelf->alu_tb__DOT__b)
                                               ? 1U
                                               : 0U)
                                           : (vlSelf->alu_tb__DOT__a 
                                              ^ vlSelf->alu_tb__DOT__b)))
                                   : ((2U & (IData)(vlSelf->alu_tb__DOT__op))
                                       ? ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                           ? (vlSelf->alu_tb__DOT__a 
                                              | vlSelf->alu_tb__DOT__b)
                                           : (vlSelf->alu_tb__DOT__a 
                                              & vlSelf->alu_tb__DOT__b))
                                       : ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                           ? (vlSelf->alu_tb__DOT__a 
                                              - vlSelf->alu_tb__DOT__b)
                                           : (vlSelf->alu_tb__DOT__a 
                                              + vlSelf->alu_tb__DOT__b)))));
}

void Valu_tb___024root___eval_act(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valu_tb___024root___eval_nba(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Valu_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valu_tb___024root___timing_resume(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Valu_tb___024root___eval_triggers__act(Valu_tb___024root* vlSelf);

bool Valu_tb___024root___eval_phase__act(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Valu_tb___024root___timing_resume(vlSelf);
        Valu_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu_tb___024root___eval_phase__nba(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__nba(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_tb___024root___eval(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valu_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/alu_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Valu_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/alu_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Valu_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Valu_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu_tb___024root___eval_debug_assertions(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
