// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_tb.h for the primary calling header

#include "Vregister_tb__pch.h"
#include "Vregister_tb__Syms.h"
#include "Vregister_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vregister_tb___024root___eval_initial__TOP__Vtiming__0(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->register_tb__DOT__clk = 0U;
    vlSelf->register_tb__DOT__rst = 1U;
    vlSelf->register_tb__DOT__we = 0U;
    vlSelf->register_tb__DOT__rs1 = 0U;
    vlSelf->register_tb__DOT__rs2 = 0U;
    vlSelf->register_tb__DOT__rd = 0U;
    vlSelf->register_tb__DOT__wd = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x73746572U;
    __Vtemp_1[2U] = 0x72656769U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("\n=== Register File Test ===\n\n");
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/register_tb.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__rst = 0U;
    vlSelf->register_tb__DOT__unnamedblk1__DOT__ok = 0U;
    VL_WRITEF("Test 1: x0 is always zero\n");
    vlSelf->register_tb__DOT__rs1 = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/register_tb.sv", 
                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0U == vlSelf->register_tb__DOT__rd1))) {
        vlSelf->register_tb__DOT__unnamedblk1__DOT__ok 
            = ((IData)(1U) + vlSelf->register_tb__DOT__unnamedblk1__DOT__ok);
    } else {
        VL_WRITEF(" \342\234\227 x0 != 0 (%x)\n",32,
                  vlSelf->register_tb__DOT__rd1);
    }
    if ((1U == vlSelf->register_tb__DOT__unnamedblk1__DOT__ok)) {
        VL_WRITEF(" \342\234\223 PASS\n\n");
        vlSelf->register_tb__DOT__tests_passed = ((IData)(1U) 
                                                  + vlSelf->register_tb__DOT__tests_passed);
    } else {
        VL_WRITEF(" \342\234\227 FAIL\n\n");
    }
    vlSelf->register_tb__DOT__unnamedblk2__DOT__ok = 0U;
    VL_WRITEF("Test 2: Write x1 = 10\n");
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__rd = 1U;
    vlSelf->register_tb__DOT__wd = 0xaU;
    vlSelf->register_tb__DOT__we = 1U;
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__we = 0U;
    vlSelf->register_tb__DOT__rs1 = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/register_tb.sv", 
                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0xaU == vlSelf->register_tb__DOT__rd1))) {
        vlSelf->register_tb__DOT__unnamedblk2__DOT__ok 
            = ((IData)(1U) + vlSelf->register_tb__DOT__unnamedblk2__DOT__ok);
    } else {
        VL_WRITEF(" \342\234\227 Expected 10, got %0#\n",
                  32,vlSelf->register_tb__DOT__rd1);
    }
    if ((1U == vlSelf->register_tb__DOT__unnamedblk2__DOT__ok)) {
        VL_WRITEF(" \342\234\223 PASS\n\n");
        vlSelf->register_tb__DOT__tests_passed = ((IData)(1U) 
                                                  + vlSelf->register_tb__DOT__tests_passed);
    } else {
        VL_WRITEF(" \342\234\227 FAIL\n\n");
    }
    vlSelf->register_tb__DOT__unnamedblk3__DOT__ok = 0U;
    VL_WRITEF("Test 3: Write x2 = 20\n");
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__rd = 2U;
    vlSelf->register_tb__DOT__wd = 0x14U;
    vlSelf->register_tb__DOT__we = 1U;
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__we = 0U;
    vlSelf->register_tb__DOT__rs1 = 2U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/register_tb.sv", 
                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x14U == vlSelf->register_tb__DOT__rd1))) {
        vlSelf->register_tb__DOT__unnamedblk3__DOT__ok 
            = ((IData)(1U) + vlSelf->register_tb__DOT__unnamedblk3__DOT__ok);
    } else {
        VL_WRITEF(" \342\234\227 Expected 20, got %0#\n",
                  32,vlSelf->register_tb__DOT__rd1);
    }
    if ((1U == vlSelf->register_tb__DOT__unnamedblk3__DOT__ok)) {
        VL_WRITEF(" \342\234\223 PASS\n\n");
        vlSelf->register_tb__DOT__tests_passed = ((IData)(1U) 
                                                  + vlSelf->register_tb__DOT__tests_passed);
    } else {
        VL_WRITEF(" \342\234\227 FAIL\n\n");
    }
    vlSelf->register_tb__DOT__unnamedblk4__DOT__ok = 0U;
    VL_WRITEF("Test 4: Read x1 and x2 together\n");
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__rs1 = 1U;
    vlSelf->register_tb__DOT__rs2 = 2U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/register_tb.sv", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0xaU == vlSelf->register_tb__DOT__rd1))) {
        vlSelf->register_tb__DOT__unnamedblk4__DOT__ok 
            = ((IData)(1U) + vlSelf->register_tb__DOT__unnamedblk4__DOT__ok);
    } else {
        VL_WRITEF(" \342\234\227 x1 wrong\n");
    }
    if (VL_LIKELY((0x14U == vlSelf->register_tb__DOT__rd2))) {
        vlSelf->register_tb__DOT__unnamedblk4__DOT__ok 
            = ((IData)(1U) + vlSelf->register_tb__DOT__unnamedblk4__DOT__ok);
    } else {
        VL_WRITEF(" \342\234\227 x2 wrong\n");
    }
    if ((2U == vlSelf->register_tb__DOT__unnamedblk4__DOT__ok)) {
        VL_WRITEF(" \342\234\223 PASS\n\n");
        vlSelf->register_tb__DOT__tests_passed = ((IData)(1U) 
                                                  + vlSelf->register_tb__DOT__tests_passed);
    } else {
        VL_WRITEF(" \342\234\227 FAIL\n\n");
    }
    vlSelf->register_tb__DOT__unnamedblk5__DOT__ok = 0U;
    VL_WRITEF("Test 5: Overwrite x1 = 99\n");
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__rd = 1U;
    vlSelf->register_tb__DOT__wd = 0x63U;
    vlSelf->register_tb__DOT__we = 1U;
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__we = 0U;
    vlSelf->register_tb__DOT__rs1 = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/register_tb.sv", 
                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x63U == vlSelf->register_tb__DOT__rd1))) {
        vlSelf->register_tb__DOT__unnamedblk5__DOT__ok 
            = ((IData)(1U) + vlSelf->register_tb__DOT__unnamedblk5__DOT__ok);
    } else {
        VL_WRITEF(" \342\234\227 Expected 99, got %0#\n",
                  32,vlSelf->register_tb__DOT__rd1);
    }
    if ((1U == vlSelf->register_tb__DOT__unnamedblk5__DOT__ok)) {
        VL_WRITEF(" \342\234\223 PASS\n\n");
        vlSelf->register_tb__DOT__tests_passed = ((IData)(1U) 
                                                  + vlSelf->register_tb__DOT__tests_passed);
    } else {
        VL_WRITEF(" \342\234\227 FAIL\n\n");
    }
    vlSelf->register_tb__DOT__unnamedblk6__DOT__ok = 0U;
    VL_WRITEF("Test 6: Write to x0 ignored\n");
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       115);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__rd = 0U;
    vlSelf->register_tb__DOT__wd = 0x4d2U;
    vlSelf->register_tb__DOT__we = 1U;
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       117);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__we = 0U;
    vlSelf->register_tb__DOT__rs1 = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/register_tb.sv", 
                                       119);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0U == vlSelf->register_tb__DOT__rd1))) {
        vlSelf->register_tb__DOT__unnamedblk6__DOT__ok 
            = ((IData)(1U) + vlSelf->register_tb__DOT__unnamedblk6__DOT__ok);
    } else {
        VL_WRITEF(" \342\234\227 x0 changed!\n");
    }
    if ((1U == vlSelf->register_tb__DOT__unnamedblk6__DOT__ok)) {
        VL_WRITEF(" \342\234\223 PASS\n\n");
        vlSelf->register_tb__DOT__tests_passed = ((IData)(1U) 
                                                  + vlSelf->register_tb__DOT__tests_passed);
    } else {
        VL_WRITEF(" \342\234\227 FAIL\n\n");
    }
    vlSelf->register_tb__DOT__unnamedblk7__DOT__ok = 0U;
    VL_WRITEF("Test 7: Read and write x3 same cycle\n");
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__rd = 3U;
    vlSelf->register_tb__DOT__wd = 0x37U;
    vlSelf->register_tb__DOT__we = 1U;
    vlSelf->register_tb__DOT__rs1 = 3U;
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__we = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/register_tb.sv", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x37U == vlSelf->register_tb__DOT__rd1))) {
        vlSelf->register_tb__DOT__unnamedblk7__DOT__ok 
            = ((IData)(1U) + vlSelf->register_tb__DOT__unnamedblk7__DOT__ok);
    } else {
        VL_WRITEF(" \342\234\227 Expected 55, got %0#\n",
                  32,vlSelf->register_tb__DOT__rd1);
    }
    if ((1U == vlSelf->register_tb__DOT__unnamedblk7__DOT__ok)) {
        VL_WRITEF(" \342\234\223 PASS\n\n");
        vlSelf->register_tb__DOT__tests_passed = ((IData)(1U) 
                                                  + vlSelf->register_tb__DOT__tests_passed);
    } else {
        VL_WRITEF(" \342\234\227 FAIL\n\n");
    }
    vlSelf->register_tb__DOT__unnamedblk8__DOT__ok = 0U;
    VL_WRITEF("Test 8: Reset clears registers\n");
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h072c1f85__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_tb.clk)", 
                                                       "tb/register_tb.sv", 
                                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->register_tb__DOT__rst = 0U;
    vlSelf->register_tb__DOT__rs1 = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/register_tb.sv", 
                                       146);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0U == vlSelf->register_tb__DOT__rd1))) {
        vlSelf->register_tb__DOT__unnamedblk8__DOT__ok 
            = ((IData)(1U) + vlSelf->register_tb__DOT__unnamedblk8__DOT__ok);
    } else {
        VL_WRITEF(" \342\234\227 x1 not cleared\n");
    }
    if ((1U == vlSelf->register_tb__DOT__unnamedblk8__DOT__ok)) {
        VL_WRITEF(" \342\234\223 PASS\n\n");
        vlSelf->register_tb__DOT__tests_passed = ((IData)(1U) 
                                                  + vlSelf->register_tb__DOT__tests_passed);
    } else {
        VL_WRITEF(" \342\234\227 FAIL\n\n");
    }
    VL_WRITEF("================================\nTests passed: %0d/8\n",
              32,vlSelf->register_tb__DOT__tests_passed);
    if ((8U == vlSelf->register_tb__DOT__tests_passed)) {
        VL_WRITEF("Status: \342\234\223 ALL TESTS PASSED\n");
    } else {
        VL_WRITEF("Some tests failed\n");
    }
    VL_WRITEF("================================\n\n");
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/register_tb.sv", 
                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/register_tb.sv", 160, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_tb___024root___dump_triggers__act(Vregister_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregister_tb___024root___eval_triggers__act(Vregister_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->register_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__register_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__register_tb__DOT__clk__0 
        = vlSelf->register_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregister_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
