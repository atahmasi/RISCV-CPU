// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_tb.h for the primary calling header

#include "Vcounter_tb__pch.h"
#include "Vcounter_tb__Syms.h"
#include "Vcounter_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcounter_tb___024root___eval_initial__TOP__Vtiming__0(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6e746572U;
    __Vtemp_1[2U] = 0x636f75U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->counter_tb__DOT__clk = 0U;
    vlSelf->counter_tb__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "counter_tb.v", 
                                       23);
    vlSelf->counter_tb__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "counter_tb.v", 
                                       26);
    VL_FINISH_MT("counter_tb.v", 26, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_tb___024root___dump_triggers__act(Vcounter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter_tb___024root___eval_triggers__act(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->counter_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__counter_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->counter_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__counter_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__counter_tb__DOT__clk__0 
        = vlSelf->counter_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__counter_tb__DOT__reset__0 
        = vlSelf->counter_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounter_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vcounter_tb___024root___act_sequent__TOP__0(Vcounter_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("Time=%0t reset=%b clk=%b count=%3#\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->counter_tb__DOT__reset),
                  1,vlSelf->counter_tb__DOT__clk,8,
                  (IData)(vlSelf->counter_tb__DOT__count));
    }
}
