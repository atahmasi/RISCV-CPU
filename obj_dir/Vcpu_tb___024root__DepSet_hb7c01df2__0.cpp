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
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/cpu_tb.sv", 
                                       14);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->cpu_tb__DOT__rst = 0U;
    vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[1U] = 0xaU;
    vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[2U] = 0x14U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "tb/cpu_tb.sv", 
                                       20);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("x3 = %0#\nx4 = %0#\n",32,vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
              [3U],32,vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
              [4U]);
    VL_FINISH_MT("tb/cpu_tb.sv", 25, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
