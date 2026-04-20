// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tx_tb.h for the primary calling header

#include "Vuart_tx_tb__pch.h"
#include "Vuart_tx_tb___024root.h"

VlCoroutine Vuart_tx_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tx_tb___024root* vlSelf);
VlCoroutine Vuart_tx_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_tx_tb___024root* vlSelf);

void Vuart_tx_tb___024root___eval_initial(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_initial\n"); );
    // Body
    Vuart_tx_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vuart_tx_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__uart_tx_tb__DOT__clk__0 
        = vlSelf->uart_tx_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__uart_tx_tb__DOT__rst__0 
        = vlSelf->uart_tx_tb__DOT__rst;
    vlSelf->__Vtrigprevexpr_h987f0934__0 = (1U & (~ (IData)(vlSelf->uart_tx_tb__DOT__tx_busy)));
}

VL_INLINE_OPT VlCoroutine Vuart_tx_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/uart_tx_tb.sv", 
                                           22);
        vlSelf->uart_tx_tb__DOT__clk = (1U & (~ (IData)(vlSelf->uart_tx_tb__DOT__clk)));
    }
}

void Vuart_tx_tb___024root___eval_act(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vuart_tx_tb___024root___nba_sequent__TOP__0(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__uart_tx_tb__DOT__dut__DOT__state;
    __Vdly__uart_tx_tb__DOT__dut__DOT__state = 0;
    SData/*15:0*/ __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count;
    __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count = 0;
    CData/*2:0*/ __Vdly__uart_tx_tb__DOT__dut__DOT__bit_index;
    __Vdly__uart_tx_tb__DOT__dut__DOT__bit_index = 0;
    CData/*7:0*/ __Vdly__uart_tx_tb__DOT__dut__DOT__data_reg;
    __Vdly__uart_tx_tb__DOT__dut__DOT__data_reg = 0;
    // Body
    __Vdly__uart_tx_tb__DOT__dut__DOT__data_reg = vlSelf->uart_tx_tb__DOT__dut__DOT__data_reg;
    __Vdly__uart_tx_tb__DOT__dut__DOT__bit_index = vlSelf->uart_tx_tb__DOT__dut__DOT__bit_index;
    __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count = vlSelf->uart_tx_tb__DOT__dut__DOT__clk_count;
    __Vdly__uart_tx_tb__DOT__dut__DOT__state = vlSelf->uart_tx_tb__DOT__dut__DOT__state;
    if (vlSelf->uart_tx_tb__DOT__rst) {
        __Vdly__uart_tx_tb__DOT__dut__DOT__state = 0U;
        __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count = 0U;
        __Vdly__uart_tx_tb__DOT__dut__DOT__bit_index = 0U;
        __Vdly__uart_tx_tb__DOT__dut__DOT__data_reg = 0U;
        vlSelf->uart_tx_tb__DOT__tx = 1U;
        vlSelf->uart_tx_tb__DOT__tx_busy = 0U;
    } else if ((4U & (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__state))) {
        __Vdly__uart_tx_tb__DOT__dut__DOT__state = 0U;
    } else if ((2U & (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__state))) {
            vlSelf->uart_tx_tb__DOT__tx = 1U;
            if ((9U > (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__clk_count))) {
                __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__clk_count)));
            } else {
                __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count = 0U;
                __Vdly__uart_tx_tb__DOT__dut__DOT__state = 0U;
            }
        } else {
            vlSelf->uart_tx_tb__DOT__tx = (1U & ((IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__data_reg) 
                                                 >> (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__bit_index)));
            if ((9U > (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__clk_count))) {
                __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__clk_count)));
            } else {
                __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count = 0U;
                if ((7U > (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__bit_index))) {
                    __Vdly__uart_tx_tb__DOT__dut__DOT__bit_index 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__bit_index)));
                } else {
                    __Vdly__uart_tx_tb__DOT__dut__DOT__bit_index = 0U;
                    __Vdly__uart_tx_tb__DOT__dut__DOT__state = 3U;
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__state))) {
        vlSelf->uart_tx_tb__DOT__tx = 0U;
        if ((9U > (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__clk_count))) {
            __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->uart_tx_tb__DOT__dut__DOT__clk_count)));
        } else {
            __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count = 0U;
            __Vdly__uart_tx_tb__DOT__dut__DOT__state = 2U;
        }
    } else {
        vlSelf->uart_tx_tb__DOT__tx = 1U;
        vlSelf->uart_tx_tb__DOT__tx_busy = 0U;
        __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count = 0U;
        __Vdly__uart_tx_tb__DOT__dut__DOT__bit_index = 0U;
        if (vlSelf->uart_tx_tb__DOT__tx_start) {
            __Vdly__uart_tx_tb__DOT__dut__DOT__data_reg 
                = vlSelf->uart_tx_tb__DOT__tx_data;
            vlSelf->uart_tx_tb__DOT__tx_busy = 1U;
            __Vdly__uart_tx_tb__DOT__dut__DOT__state = 1U;
        }
    }
    vlSelf->uart_tx_tb__DOT__dut__DOT__state = __Vdly__uart_tx_tb__DOT__dut__DOT__state;
    vlSelf->uart_tx_tb__DOT__dut__DOT__clk_count = __Vdly__uart_tx_tb__DOT__dut__DOT__clk_count;
    vlSelf->uart_tx_tb__DOT__dut__DOT__bit_index = __Vdly__uart_tx_tb__DOT__dut__DOT__bit_index;
    vlSelf->uart_tx_tb__DOT__dut__DOT__data_reg = __Vdly__uart_tx_tb__DOT__dut__DOT__data_reg;
}

void Vuart_tx_tb___024root___eval_nba(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vuart_tx_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vuart_tx_tb___024root___timing_resume(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h3acd41b4__0.resume("@(posedge uart_tx_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h10493d46__0.resume("@([changed] (~ uart_tx_tb.tx_busy))");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vuart_tx_tb___024root___timing_commit(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h3acd41b4__0.commit("@(posedge uart_tx_tb.clk)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h10493d46__0.commit("@([changed] (~ uart_tx_tb.tx_busy))");
    }
}

void Vuart_tx_tb___024root___eval_triggers__act(Vuart_tx_tb___024root* vlSelf);

bool Vuart_tx_tb___024root___eval_phase__act(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vuart_tx_tb___024root___eval_triggers__act(vlSelf);
    Vuart_tx_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vuart_tx_tb___024root___timing_resume(vlSelf);
        Vuart_tx_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vuart_tx_tb___024root___eval_phase__nba(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vuart_tx_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_tb___024root___dump_triggers__nba(Vuart_tx_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_tb___024root___dump_triggers__act(Vuart_tx_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuart_tx_tb___024root___eval(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vuart_tx_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/uart_tx_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vuart_tx_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/uart_tx_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vuart_tx_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vuart_tx_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vuart_tx_tb___024root___eval_debug_assertions(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
