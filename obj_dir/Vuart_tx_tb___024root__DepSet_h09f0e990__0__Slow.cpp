// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tx_tb.h for the primary calling header

#include "Vuart_tx_tb__pch.h"
#include "Vuart_tx_tb___024root.h"

VL_ATTR_COLD void Vuart_tx_tb___024root___eval_static__TOP(Vuart_tx_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tx_tb___024root___eval_static(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_static\n"); );
    // Body
    Vuart_tx_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vuart_tx_tb___024root___eval_static__TOP(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->uart_tx_tb__DOT__clk = 0U;
    vlSelf->uart_tx_tb__DOT__rst = 1U;
}

VL_ATTR_COLD void Vuart_tx_tb___024root___eval_final(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vuart_tx_tb___024root___eval_settle(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_tb___024root___dump_triggers__act(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge uart_tx_tb.clk or posedge uart_tx_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge uart_tx_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] (~ uart_tx_tb.tx_busy))\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_tb___024root___dump_triggers__nba(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge uart_tx_tb.clk or posedge uart_tx_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge uart_tx_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] (~ uart_tx_tb.tx_busy))\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_tx_tb___024root___ctor_var_reset(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->uart_tx_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->uart_tx_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->uart_tx_tb__DOT__tx_start = VL_RAND_RESET_I(1);
    vlSelf->uart_tx_tb__DOT__tx_data = VL_RAND_RESET_I(8);
    vlSelf->uart_tx_tb__DOT__tx = VL_RAND_RESET_I(1);
    vlSelf->uart_tx_tb__DOT__tx_busy = VL_RAND_RESET_I(1);
    vlSelf->uart_tx_tb__DOT__dut__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->uart_tx_tb__DOT__dut__DOT__clk_count = VL_RAND_RESET_I(16);
    vlSelf->uart_tx_tb__DOT__dut__DOT__bit_index = VL_RAND_RESET_I(3);
    vlSelf->uart_tx_tb__DOT__dut__DOT__data_reg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__uart_tx_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__uart_tx_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h987f0934__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
