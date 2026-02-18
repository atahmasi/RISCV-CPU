// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecoder_tb__Syms.h"


void Vdecoder_tb___024root__trace_chg_0_sub_0(Vdecoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdecoder_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root__trace_chg_0\n"); );
    // Init
    Vdecoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder_tb___024root*>(voidSelf);
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdecoder_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdecoder_tb___024root__trace_chg_0_sub_0(Vdecoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->decoder_tb__DOT__instruction),32);
        bufp->chgCData(oldp+1,((0x1fU & (vlSelf->decoder_tb__DOT__instruction 
                                         >> 7U))),5);
        bufp->chgCData(oldp+2,((0x1fU & (vlSelf->decoder_tb__DOT__instruction 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelf->decoder_tb__DOT__instruction 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+4,((7U & (vlSelf->decoder_tb__DOT__instruction 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+5,((vlSelf->decoder_tb__DOT__instruction 
                                >> 0x19U)),7);
        bufp->chgIData(oldp+6,(vlSelf->decoder_tb__DOT__tests_passed),32);
        bufp->chgIData(oldp+7,(vlSelf->decoder_tb__DOT__local_checks),32);
    }
    bufp->chgCData(oldp+8,(vlSelf->decoder_tb__DOT__opcode),7);
    bufp->chgIData(oldp+9,(vlSelf->decoder_tb__DOT__imm),32);
}

void Vdecoder_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root__trace_cleanup\n"); );
    // Init
    Vdecoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder_tb___024root*>(voidSelf);
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
