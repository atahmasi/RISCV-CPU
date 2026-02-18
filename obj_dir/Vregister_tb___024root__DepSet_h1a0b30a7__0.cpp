// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_tb.h for the primary calling header

#include "Vregister_tb__pch.h"
#include "Vregister_tb___024root.h"

VlCoroutine Vregister_tb___024root___eval_initial__TOP__Vtiming__0(Vregister_tb___024root* vlSelf);
VlCoroutine Vregister_tb___024root___eval_initial__TOP__Vtiming__1(Vregister_tb___024root* vlSelf);

void Vregister_tb___024root___eval_initial(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vregister_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vregister_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__register_tb__DOT__clk__0 
        = vlSelf->register_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vregister_tb___024root___eval_initial__TOP__Vtiming__1(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/register_tb.sv", 
                                           28);
        vlSelf->register_tb__DOT__clk = (1U & (~ (IData)(vlSelf->register_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vregister_tb___024root___act_comb__TOP__0(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->register_tb__DOT__rd1 = ((0U == (IData)(vlSelf->register_tb__DOT__rs1))
                                      ? 0U : vlSelf->register_tb__DOT__dut__DOT__regs
                                     [vlSelf->register_tb__DOT__rs1]);
    vlSelf->register_tb__DOT__rd2 = ((0U == (IData)(vlSelf->register_tb__DOT__rs2))
                                      ? 0U : vlSelf->register_tb__DOT__dut__DOT__regs
                                     [vlSelf->register_tb__DOT__rs2]);
}

void Vregister_tb___024root___eval_act(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vregister_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vregister_tb___024root___nba_sequent__TOP__0(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__register_tb__DOT__dut__DOT__regs__v0;
    __Vdlyvset__register_tb__DOT__dut__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__register_tb__DOT__dut__DOT__regs__v32;
    __Vdlyvdim0__register_tb__DOT__dut__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__register_tb__DOT__dut__DOT__regs__v32;
    __Vdlyvval__register_tb__DOT__dut__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__register_tb__DOT__dut__DOT__regs__v32;
    __Vdlyvset__register_tb__DOT__dut__DOT__regs__v32 = 0;
    // Body
    __Vdlyvset__register_tb__DOT__dut__DOT__regs__v0 = 0U;
    __Vdlyvset__register_tb__DOT__dut__DOT__regs__v32 = 0U;
    if (vlSelf->register_tb__DOT__rst) {
        vlSelf->register_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__register_tb__DOT__dut__DOT__regs__v0 = 1U;
    } else if (((IData)(vlSelf->register_tb__DOT__we) 
                & (0U != (IData)(vlSelf->register_tb__DOT__rd)))) {
        __Vdlyvval__register_tb__DOT__dut__DOT__regs__v32 
            = vlSelf->register_tb__DOT__wd;
        __Vdlyvset__register_tb__DOT__dut__DOT__regs__v32 = 1U;
        __Vdlyvdim0__register_tb__DOT__dut__DOT__regs__v32 
            = vlSelf->register_tb__DOT__rd;
    }
    if (__Vdlyvset__register_tb__DOT__dut__DOT__regs__v0) {
        vlSelf->register_tb__DOT__dut__DOT__regs[0U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[1U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[2U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[3U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[4U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[5U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[6U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[7U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[8U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[9U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0xaU] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0xbU] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0xcU] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0xdU] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0xeU] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0xfU] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x10U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x11U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x12U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x13U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x14U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x15U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x16U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x17U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x18U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x19U] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x1aU] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x1bU] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x1cU] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x1dU] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x1eU] = 0U;
        vlSelf->register_tb__DOT__dut__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__register_tb__DOT__dut__DOT__regs__v32) {
        vlSelf->register_tb__DOT__dut__DOT__regs[__Vdlyvdim0__register_tb__DOT__dut__DOT__regs__v32] 
            = __Vdlyvval__register_tb__DOT__dut__DOT__regs__v32;
    }
}

void Vregister_tb___024root___eval_nba(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregister_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregister_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vregister_tb___024root___timing_resume(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h072c1f85__0.resume("@(posedge register_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vregister_tb___024root___timing_commit(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h072c1f85__0.commit("@(posedge register_tb.clk)");
    }
}

void Vregister_tb___024root___eval_triggers__act(Vregister_tb___024root* vlSelf);

bool Vregister_tb___024root___eval_phase__act(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vregister_tb___024root___eval_triggers__act(vlSelf);
    Vregister_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vregister_tb___024root___timing_resume(vlSelf);
        Vregister_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vregister_tb___024root___eval_phase__nba(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vregister_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_tb___024root___dump_triggers__nba(Vregister_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_tb___024root___dump_triggers__act(Vregister_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregister_tb___024root___eval(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vregister_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/register_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vregister_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/register_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vregister_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vregister_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vregister_tb___024root___eval_debug_assertions(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
