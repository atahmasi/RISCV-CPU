// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"
#include "Vcpu_tb__Syms.h"
#include "Vcpu_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"cpu.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->cpu_tb__DOT__dut__DOT__imem[0U] = 0xa00093U;
    vlSelf->cpu_tb__DOT__dut__DOT__imem[1U] = 0x1400113U;
    vlSelf->cpu_tb__DOT__dut__DOT__imem[2U] = 0x2081b3U;
    vlSelf->cpu_tb__DOT__dut__DOT__imem[3U] = 0x118233U;
    co_await vlSelf->__VtrigSched_h049087fc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge cpu_tb.clk)", 
                                                       "tb/cpu_tb.sv", 
                                                       35);
    co_await vlSelf->__VtrigSched_h049087fc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge cpu_tb.clk)", 
                                                       "tb/cpu_tb.sv", 
                                                       35);
    vlSelf->cpu_tb__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h049087fc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge cpu_tb.clk)", 
                                                       "tb/cpu_tb.sv", 
                                                       38);
    co_await vlSelf->__VtrigSched_h049087fc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge cpu_tb.clk)", 
                                                       "tb/cpu_tb.sv", 
                                                       38);
    co_await vlSelf->__VtrigSched_h049087fc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge cpu_tb.clk)", 
                                                       "tb/cpu_tb.sv", 
                                                       38);
    co_await vlSelf->__VtrigSched_h049087fc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge cpu_tb.clk)", 
                                                       "tb/cpu_tb.sv", 
                                                       38);
    co_await vlSelf->__VtrigSched_h049087fc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge cpu_tb.clk)", 
                                                       "tb/cpu_tb.sv", 
                                                       38);
    co_await vlSelf->__VtrigSched_h049087fc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge cpu_tb.clk)", 
                                                       "tb/cpu_tb.sv", 
                                                       38);
    VL_WRITEF("x1 = %0#\nx2 = %0#\nx3 = %0#\nx4 = %0#\nInitial PC = %x\n",
              32,vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
              [1U],32,vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
              [2U],32,vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
              [3U],32,vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
              [4U],32,vlSelf->cpu_tb__DOT__dut__DOT__pc);
    VL_FINISH_MT("tb/cpu_tb.sv", 46, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_tb___024root___eval_triggers__act(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->cpu_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->cpu_tb__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->cpu_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
        = vlSelf->cpu_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__rst__0 
        = vlSelf->cpu_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
