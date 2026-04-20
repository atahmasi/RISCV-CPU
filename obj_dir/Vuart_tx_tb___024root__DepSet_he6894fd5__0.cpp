// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tx_tb.h for the primary calling header

#include "Vuart_tx_tb__pch.h"
#include "Vuart_tx_tb__Syms.h"
#include "Vuart_tx_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vuart_tx_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x745f7478U;
    __Vtemp_1[2U] = 0x756172U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->uart_tx_tb__DOT__tx_start = 0U;
    vlSelf->uart_tx_tb__DOT__tx_data = 0U;
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       32);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       32);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       32);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       32);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       32);
    vlSelf->uart_tx_tb__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       38);
    vlSelf->uart_tx_tb__DOT__tx_data = 0x41U;
    vlSelf->uart_tx_tb__DOT__tx_start = 1U;
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       42);
    vlSelf->uart_tx_tb__DOT__tx_start = 0U;
    while (vlSelf->uart_tx_tb__DOT__tx_busy) {
        co_await vlSelf->__VtrigSched_h10493d46__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ uart_tx_tb.tx_busy))", 
                                                           "tb/uart_tx_tb.sv", 
                                                           46);
    }
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       51);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       51);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       51);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       51);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       51);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       53);
    vlSelf->uart_tx_tb__DOT__tx_data = 0x5aU;
    vlSelf->uart_tx_tb__DOT__tx_start = 1U;
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       57);
    vlSelf->uart_tx_tb__DOT__tx_start = 0U;
    while (vlSelf->uart_tx_tb__DOT__tx_busy) {
        co_await vlSelf->__VtrigSched_h10493d46__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ uart_tx_tb.tx_busy))", 
                                                           "tb/uart_tx_tb.sv", 
                                                           60);
    }
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    co_await vlSelf->__VtrigSched_h3acd41b4__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tx_tb.clk)", 
                                                       "tb/uart_tx_tb.sv", 
                                                       63);
    VL_WRITEF("UART TX simulation complete.\n");
    VL_FINISH_MT("tb/uart_tx_tb.sv", 66, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_tb___024root___dump_triggers__act(Vuart_tx_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuart_tx_tb___024root___eval_triggers__act(Vuart_tx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h987f0934__0;
    __Vtrigcurrexpr_h987f0934__0 = 0;
    __Vtrigcurrexpr_h987f0934__0 = (1U & (~ (IData)(vlSelf->uart_tx_tb__DOT__tx_busy)));
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->uart_tx_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__uart_tx_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->uart_tx_tb__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__uart_tx_tb__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->uart_tx_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__uart_tx_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(__Vtrigcurrexpr_h987f0934__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h987f0934__0)));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__uart_tx_tb__DOT__clk__0 
        = vlSelf->uart_tx_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__uart_tx_tb__DOT__rst__0 
        = vlSelf->uart_tx_tb__DOT__rst;
    vlSelf->__Vtrigprevexpr_h987f0934__0 = __Vtrigcurrexpr_h987f0934__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_tx_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
