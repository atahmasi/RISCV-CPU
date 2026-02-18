// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder_tb.h for the primary calling header

#include "Vdecoder_tb__pch.h"
#include "Vdecoder_tb__Syms.h"
#include "Vdecoder_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6f646572U;
    __Vtemp_1[2U] = 0x646563U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("\n=== RISC-V Decoder Test ===\n\n");
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 1: ADDI x1, x0, 10\n");
    vlSelf->decoder_tb__DOT__instruction = 0xa00093U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       42);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0x13U == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((1U == (IData)(vlSelf->decoder_tb__DOT__rd))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((0U == (IData)(vlSelf->decoder_tb__DOT__rs1))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((0xaU == vlSelf->decoder_tb__DOT__imm)) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((4U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 2: ADD x3, x1, x2\n");
    vlSelf->decoder_tb__DOT__instruction = 0x2081b3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0x33U == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((3U == (IData)(vlSelf->decoder_tb__DOT__rd))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((1U == (IData)(vlSelf->decoder_tb__DOT__rs1))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((2U == (IData)(vlSelf->decoder_tb__DOT__rs2))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((0U == (IData)(vlSelf->decoder_tb__DOT__funct3))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((0U == (IData)(vlSelf->decoder_tb__DOT__funct7))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((6U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 3: BEQ x1, x2, 8\n");
    vlSelf->decoder_tb__DOT__instruction = 0x208463U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0x63U == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((1U == (IData)(vlSelf->decoder_tb__DOT__rs1))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((2U == (IData)(vlSelf->decoder_tb__DOT__rs2))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((8U == vlSelf->decoder_tb__DOT__imm)) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((4U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 4: LUI x5, 0x12345\n");
    vlSelf->decoder_tb__DOT__instruction = 0x123452b7U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0x37U == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((5U == (IData)(vlSelf->decoder_tb__DOT__rd))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((0x12345000U == vlSelf->decoder_tb__DOT__imm)) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((3U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 5: JAL x1, 100\n");
    vlSelf->decoder_tb__DOT__instruction = 0x64000efU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0x6fU == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((1U == (IData)(vlSelf->decoder_tb__DOT__rd))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((0x64U == vlSelf->decoder_tb__DOT__imm)) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((3U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 6: SW x2, 4(x1)\n");
    vlSelf->decoder_tb__DOT__instruction = 0x20a223U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0x23U == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((1U == (IData)(vlSelf->decoder_tb__DOT__rs1))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((2U == (IData)(vlSelf->decoder_tb__DOT__rs2))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((4U == vlSelf->decoder_tb__DOT__imm)) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((4U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 7: ADDI x3, x0, -1\n");
    vlSelf->decoder_tb__DOT__instruction = 0xfff00193U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       108);
    if ((0x13U == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((3U == (IData)(vlSelf->decoder_tb__DOT__rd))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((0xffffffffU == vlSelf->decoder_tb__DOT__imm)) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((3U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 8: BEQ x0, x0, -4\n");
    vlSelf->decoder_tb__DOT__instruction = 0xfe000ce3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       118);
    if ((0x63U == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0xfffffffcU == vlSelf->decoder_tb__DOT__imm)) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((2U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 9: JALR x1, 0(x2)\n");
    vlSelf->decoder_tb__DOT__instruction = 0x100e7U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       127);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0x67U == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((1U == (IData)(vlSelf->decoder_tb__DOT__rd))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((2U == (IData)(vlSelf->decoder_tb__DOT__rs1))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((0U == vlSelf->decoder_tb__DOT__imm)) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((4U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 10: SLLI x4, x1, 3\n");
    vlSelf->decoder_tb__DOT__instruction = 0x309213U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       138);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0x13U == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((4U == (IData)(vlSelf->decoder_tb__DOT__rd))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((1U == (IData)(vlSelf->decoder_tb__DOT__funct3))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((3U == (0x1fU & vlSelf->decoder_tb__DOT__imm))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((4U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 11: SLTI x6, x1, 7\n");
    vlSelf->decoder_tb__DOT__instruction = 0x70a313U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       149);
    if ((0x13U == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((6U == (IData)(vlSelf->decoder_tb__DOT__rd))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((2U == (IData)(vlSelf->decoder_tb__DOT__funct3))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((7U == vlSelf->decoder_tb__DOT__imm)) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((4U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    vlSelf->decoder_tb__DOT__local_checks = 0U;
    VL_WRITEF("Test 12: LB x3, 1(x2)\n");
    vlSelf->decoder_tb__DOT__instruction = 0x110183U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((3U == (IData)(vlSelf->decoder_tb__DOT__opcode))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((3U == (IData)(vlSelf->decoder_tb__DOT__rd))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((2U == (IData)(vlSelf->decoder_tb__DOT__rs1))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((0U == (IData)(vlSelf->decoder_tb__DOT__funct3))) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((1U == vlSelf->decoder_tb__DOT__imm)) {
        vlSelf->decoder_tb__DOT__local_checks = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__local_checks);
    }
    if ((5U == vlSelf->decoder_tb__DOT__local_checks)) {
        VL_WRITEF("  \342\234\223 PASS\n\n");
        vlSelf->decoder_tb__DOT__tests_passed = ((IData)(1U) 
                                                 + vlSelf->decoder_tb__DOT__tests_passed);
    } else {
        VL_WRITEF("  \342\234\227 FAIL\n\n");
    }
    VL_WRITEF("================================\nTests passed: %0d/12\n",
              32,vlSelf->decoder_tb__DOT__tests_passed);
    if (VL_LIKELY((0xcU == vlSelf->decoder_tb__DOT__tests_passed))) {
        VL_WRITEF("Status: \342\234\223 ALL TESTS PASSED\n");
    } else {
        VL_WRITEF("[%0t] %%Fatal: decoder_tb.sv:174: Assertion failed in %Ndecoder_tb: \342\234\227 SOME TESTS FAILED\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/decoder_tb.sv", 174, "");
    }
    VL_WRITEF("================================\n\n");
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/decoder_tb.sv", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/decoder_tb.sv", 177, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__act(Vdecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecoder_tb___024root___eval_triggers__act(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecoder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
