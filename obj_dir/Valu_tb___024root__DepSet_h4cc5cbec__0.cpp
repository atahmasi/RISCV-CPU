// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb__Syms.h"
#include "Valu_tb___024root.h"

VL_INLINE_OPT VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__0__exp;
    __Vtask_alu_tb__DOT__check__0__exp = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__1__exp;
    __Vtask_alu_tb__DOT__check__1__exp = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__2__exp;
    __Vtask_alu_tb__DOT__check__2__exp = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__3__exp;
    __Vtask_alu_tb__DOT__check__3__exp = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__4__exp;
    __Vtask_alu_tb__DOT__check__4__exp = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__5__exp;
    __Vtask_alu_tb__DOT__check__5__exp = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__6__exp;
    __Vtask_alu_tb__DOT__check__6__exp = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__7__exp;
    __Vtask_alu_tb__DOT__check__7__exp = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__8__exp;
    __Vtask_alu_tb__DOT__check__8__exp = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"alu.vcd"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("\n=== ALU TESTS ===\n\nADD\n");
    vlSelf->alu_tb__DOT__op = 0U;
    vlSelf->alu_tb__DOT__a = 0xaU;
    vlSelf->alu_tb__DOT__b = 0x14U;
    __Vtask_alu_tb__DOT__check__0__exp = 0x1eU;
    vlSelf->alu_tb__DOT__tests = ((IData)(1U) + vlSelf->alu_tb__DOT__tests);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/alu_tb.sv", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->alu_tb__DOT__y == __Vtask_alu_tb__DOT__check__0__exp)) {
        VL_WRITEF(" \342\234\223 PASS: y = %0#\n",32,
                  vlSelf->alu_tb__DOT__y);
        vlSelf->alu_tb__DOT__pass = ((IData)(1U) + vlSelf->alu_tb__DOT__pass);
    } else {
        VL_WRITEF(" \342\234\227 FAIL: expected %0#, got %0#\n",
                  32,__Vtask_alu_tb__DOT__check__0__exp,
                  32,vlSelf->alu_tb__DOT__y);
    }
    VL_WRITEF("SUB\n");
    vlSelf->alu_tb__DOT__op = 1U;
    vlSelf->alu_tb__DOT__a = 0x32U;
    vlSelf->alu_tb__DOT__b = 0x14U;
    __Vtask_alu_tb__DOT__check__1__exp = 0x1eU;
    vlSelf->alu_tb__DOT__tests = ((IData)(1U) + vlSelf->alu_tb__DOT__tests);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/alu_tb.sv", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->alu_tb__DOT__y == __Vtask_alu_tb__DOT__check__1__exp)) {
        VL_WRITEF(" \342\234\223 PASS: y = %0#\n",32,
                  vlSelf->alu_tb__DOT__y);
        vlSelf->alu_tb__DOT__pass = ((IData)(1U) + vlSelf->alu_tb__DOT__pass);
    } else {
        VL_WRITEF(" \342\234\227 FAIL: expected %0#, got %0#\n",
                  32,__Vtask_alu_tb__DOT__check__1__exp,
                  32,vlSelf->alu_tb__DOT__y);
    }
    VL_WRITEF("AND\n");
    vlSelf->alu_tb__DOT__op = 2U;
    vlSelf->alu_tb__DOT__a = 0xf0f0U;
    vlSelf->alu_tb__DOT__b = 0xff0U;
    __Vtask_alu_tb__DOT__check__2__exp = 0xf0U;
    vlSelf->alu_tb__DOT__tests = ((IData)(1U) + vlSelf->alu_tb__DOT__tests);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/alu_tb.sv", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->alu_tb__DOT__y == __Vtask_alu_tb__DOT__check__2__exp)) {
        VL_WRITEF(" \342\234\223 PASS: y = %0#\n",32,
                  vlSelf->alu_tb__DOT__y);
        vlSelf->alu_tb__DOT__pass = ((IData)(1U) + vlSelf->alu_tb__DOT__pass);
    } else {
        VL_WRITEF(" \342\234\227 FAIL: expected %0#, got %0#\n",
                  32,__Vtask_alu_tb__DOT__check__2__exp,
                  32,vlSelf->alu_tb__DOT__y);
    }
    VL_WRITEF("OR\n");
    vlSelf->alu_tb__DOT__op = 3U;
    vlSelf->alu_tb__DOT__a = 0xf0f0U;
    vlSelf->alu_tb__DOT__b = 0xff0U;
    __Vtask_alu_tb__DOT__check__3__exp = 0xfff0U;
    vlSelf->alu_tb__DOT__tests = ((IData)(1U) + vlSelf->alu_tb__DOT__tests);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/alu_tb.sv", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->alu_tb__DOT__y == __Vtask_alu_tb__DOT__check__3__exp)) {
        VL_WRITEF(" \342\234\223 PASS: y = %0#\n",32,
                  vlSelf->alu_tb__DOT__y);
        vlSelf->alu_tb__DOT__pass = ((IData)(1U) + vlSelf->alu_tb__DOT__pass);
    } else {
        VL_WRITEF(" \342\234\227 FAIL: expected %0#, got %0#\n",
                  32,__Vtask_alu_tb__DOT__check__3__exp,
                  32,vlSelf->alu_tb__DOT__y);
    }
    VL_WRITEF("XOR\n");
    vlSelf->alu_tb__DOT__op = 4U;
    vlSelf->alu_tb__DOT__a = 0xaaaaU;
    vlSelf->alu_tb__DOT__b = 0x5555U;
    __Vtask_alu_tb__DOT__check__4__exp = 0xffffU;
    vlSelf->alu_tb__DOT__tests = ((IData)(1U) + vlSelf->alu_tb__DOT__tests);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/alu_tb.sv", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->alu_tb__DOT__y == __Vtask_alu_tb__DOT__check__4__exp)) {
        VL_WRITEF(" \342\234\223 PASS: y = %0#\n",32,
                  vlSelf->alu_tb__DOT__y);
        vlSelf->alu_tb__DOT__pass = ((IData)(1U) + vlSelf->alu_tb__DOT__pass);
    } else {
        VL_WRITEF(" \342\234\227 FAIL: expected %0#, got %0#\n",
                  32,__Vtask_alu_tb__DOT__check__4__exp,
                  32,vlSelf->alu_tb__DOT__y);
    }
    VL_WRITEF("SLT\n");
    vlSelf->alu_tb__DOT__op = 5U;
    vlSelf->alu_tb__DOT__a = 0xfffffffbU;
    vlSelf->alu_tb__DOT__b = 0xaU;
    __Vtask_alu_tb__DOT__check__5__exp = 1U;
    vlSelf->alu_tb__DOT__tests = ((IData)(1U) + vlSelf->alu_tb__DOT__tests);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/alu_tb.sv", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->alu_tb__DOT__y == __Vtask_alu_tb__DOT__check__5__exp)) {
        VL_WRITEF(" \342\234\223 PASS: y = %0#\n",32,
                  vlSelf->alu_tb__DOT__y);
        vlSelf->alu_tb__DOT__pass = ((IData)(1U) + vlSelf->alu_tb__DOT__pass);
    } else {
        VL_WRITEF(" \342\234\227 FAIL: expected %0#, got %0#\n",
                  32,__Vtask_alu_tb__DOT__check__5__exp,
                  32,vlSelf->alu_tb__DOT__y);
    }
    vlSelf->alu_tb__DOT__a = 0xaU;
    vlSelf->alu_tb__DOT__b = 0xfffffffbU;
    __Vtask_alu_tb__DOT__check__6__exp = 0U;
    vlSelf->alu_tb__DOT__tests = ((IData)(1U) + vlSelf->alu_tb__DOT__tests);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/alu_tb.sv", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->alu_tb__DOT__y == __Vtask_alu_tb__DOT__check__6__exp)) {
        VL_WRITEF(" \342\234\223 PASS: y = %0#\n",32,
                  vlSelf->alu_tb__DOT__y);
        vlSelf->alu_tb__DOT__pass = ((IData)(1U) + vlSelf->alu_tb__DOT__pass);
    } else {
        VL_WRITEF(" \342\234\227 FAIL: expected %0#, got %0#\n",
                  32,__Vtask_alu_tb__DOT__check__6__exp,
                  32,vlSelf->alu_tb__DOT__y);
    }
    VL_WRITEF("SLL\n");
    vlSelf->alu_tb__DOT__op = 6U;
    vlSelf->alu_tb__DOT__a = 1U;
    vlSelf->alu_tb__DOT__b = 4U;
    __Vtask_alu_tb__DOT__check__7__exp = 0x10U;
    vlSelf->alu_tb__DOT__tests = ((IData)(1U) + vlSelf->alu_tb__DOT__tests);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/alu_tb.sv", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->alu_tb__DOT__y == __Vtask_alu_tb__DOT__check__7__exp)) {
        VL_WRITEF(" \342\234\223 PASS: y = %0#\n",32,
                  vlSelf->alu_tb__DOT__y);
        vlSelf->alu_tb__DOT__pass = ((IData)(1U) + vlSelf->alu_tb__DOT__pass);
    } else {
        VL_WRITEF(" \342\234\227 FAIL: expected %0#, got %0#\n",
                  32,__Vtask_alu_tb__DOT__check__7__exp,
                  32,vlSelf->alu_tb__DOT__y);
    }
    VL_WRITEF("SRL\n");
    vlSelf->alu_tb__DOT__op = 7U;
    vlSelf->alu_tb__DOT__a = 0x80000000U;
    vlSelf->alu_tb__DOT__b = 1U;
    __Vtask_alu_tb__DOT__check__8__exp = 0x40000000U;
    vlSelf->alu_tb__DOT__tests = ((IData)(1U) + vlSelf->alu_tb__DOT__tests);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/alu_tb.sv", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->alu_tb__DOT__y == __Vtask_alu_tb__DOT__check__8__exp)) {
        VL_WRITEF(" \342\234\223 PASS: y = %0#\n",32,
                  vlSelf->alu_tb__DOT__y);
        vlSelf->alu_tb__DOT__pass = ((IData)(1U) + vlSelf->alu_tb__DOT__pass);
    } else {
        VL_WRITEF(" \342\234\227 FAIL: expected %0#, got %0#\n",
                  32,__Vtask_alu_tb__DOT__check__8__exp,
                  32,vlSelf->alu_tb__DOT__y);
    }
    VL_WRITEF("ZERO flag\n");
    vlSelf->alu_tb__DOT__op = 1U;
    vlSelf->alu_tb__DOT__a = 0xaU;
    vlSelf->alu_tb__DOT__b = 0xaU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/alu_tb.sv", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0U == vlSelf->alu_tb__DOT__y)) {
        VL_WRITEF(" \342\234\223 PASS: zero flag set\n");
        vlSelf->alu_tb__DOT__pass = ((IData)(1U) + vlSelf->alu_tb__DOT__pass);
    } else {
        VL_WRITEF(" \342\234\227 FAIL: zero flag not set\n");
    }
    vlSelf->alu_tb__DOT__tests = ((IData)(1U) + vlSelf->alu_tb__DOT__tests);
    VL_WRITEF("\n===============================\nPassed %0d / %0d tests\n",
              32,vlSelf->alu_tb__DOT__pass,32,vlSelf->alu_tb__DOT__tests);
    if (VL_LIKELY((vlSelf->alu_tb__DOT__pass == vlSelf->alu_tb__DOT__tests))) {
        VL_WRITEF("Status: \342\234\223 ALL TESTS PASSED\n");
    } else {
        VL_WRITEF("[%0t] %%Fatal: alu_tb.sv:94: Assertion failed in %Nalu_tb: Some tests failed\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/alu_tb.sv", 94, "");
    }
    VL_WRITEF("===============================\n\n");
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb/alu_tb.sv", 
                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/alu_tb.sv", 97, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_tb___024root___eval_triggers__act(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
