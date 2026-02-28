// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"
#include "Vcpu_tb___024root.h"

VL_ATTR_COLD void Vcpu_tb___024root___eval_initial__TOP(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf);

void Vcpu_tb___024root___eval_initial(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial\n"); );
    // Body
    Vcpu_tb___024root___eval_initial__TOP(vlSelf);
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
        = vlSelf->cpu_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__rst__0 
        = vlSelf->cpu_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/cpu_tb.sv", 
                                           8);
        vlSelf->cpu_tb__DOT__clk = (1U & (~ (IData)(vlSelf->cpu_tb__DOT__clk)));
    }
}

void Vcpu_tb___024root___eval_act(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->cpu_tb__DOT__dut__DOT__pc = ((IData)(vlSelf->cpu_tb__DOT__rst)
                                          ? 0U : ((IData)(4U) 
                                                  + vlSelf->cpu_tb__DOT__dut__DOT__pc));
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_sequent__TOP__1(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    __Vdlyvset__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32;
    __Vdlyvdim0__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32;
    __Vdlyvval__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32;
    __Vdlyvset__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32 = 0;
    // Body
    __Vdlyvset__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0U;
    __Vdlyvset__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32 = 0U;
    if (vlSelf->cpu_tb__DOT__rst) {
        __Vdlyvset__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 1U;
    } else if (((0x33U == (IData)(vlSelf->cpu_tb__DOT__dut__DOT__opcode)) 
                & (0U != (0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                   >> 7U))))) {
        __Vdlyvval__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32 
            = (vlSelf->cpu_tb__DOT__dut__DOT__rd1 + vlSelf->cpu_tb__DOT__dut__DOT__rd2);
        __Vdlyvset__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32 = 1U;
        __Vdlyvdim0__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32 
            = (0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                        >> 7U));
    }
    if (__Vdlyvset__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v0) {
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[1U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[2U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[3U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[4U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[5U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[6U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[7U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[8U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[9U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0xaU] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0xbU] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0xcU] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0xdU] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0xeU] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0xfU] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x10U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x11U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x12U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x13U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x14U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x15U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x16U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x17U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x18U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x19U] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x1aU] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x1bU] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x1cU] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x1dU] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x1eU] = 0U;
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32) {
        vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[__Vdlyvdim0__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32] 
            = __Vdlyvval__cpu_tb__DOT__dut__DOT__rf__DOT__regs__v32;
    }
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_sequent__TOP__2(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->cpu_tb__DOT__dut__DOT__instruction = vlSelf->cpu_tb__DOT__dut__DOT__imem
        [(0xffU & (vlSelf->cpu_tb__DOT__dut__DOT__pc 
                   >> 2U))];
    vlSelf->cpu_tb__DOT__dut__DOT__opcode = (0x7fU 
                                             & vlSelf->cpu_tb__DOT__dut__DOT__instruction);
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_comb__TOP__0(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->cpu_tb__DOT__dut__DOT__rd1 = ((0U == (0x1fU 
                                                  & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                                     >> 0xfU)))
                                           ? 0U : vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
                                          [(0x1fU & 
                                            (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                             >> 0xfU))]);
    vlSelf->cpu_tb__DOT__dut__DOT__rd2 = ((0U == (0x1fU 
                                                  & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                                     >> 0x14U)))
                                           ? 0U : vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
                                          [(0x1fU & 
                                            (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                             >> 0x14U))]);
}

void Vcpu_tb___024root___eval_nba(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vcpu_tb___024root___timing_resume(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vcpu_tb___024root___eval_triggers__act(Vcpu_tb___024root* vlSelf);

bool Vcpu_tb___024root___eval_phase__act(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcpu_tb___024root___timing_resume(vlSelf);
        Vcpu_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu_tb___024root___eval_phase__nba(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcpu_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__nba(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_tb___024root___eval(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcpu_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/cpu_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcpu_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/cpu_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcpu_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcpu_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcpu_tb___024root___eval_debug_assertions(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
