// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_tb__Syms.h"


void Valu_tb___024root__trace_chg_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_chg_0\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Valu_tb___024root__trace_chg_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->alu_tb__DOT__a),32);
        bufp->chgIData(oldp+1,(vlSelf->alu_tb__DOT__b),32);
        bufp->chgCData(oldp+2,(vlSelf->alu_tb__DOT__op),4);
        bufp->chgIData(oldp+3,(((8U & (IData)(vlSelf->alu_tb__DOT__op))
                                 ? ((4U & (IData)(vlSelf->alu_tb__DOT__op))
                                     ? 0U : ((2U & (IData)(vlSelf->alu_tb__DOT__op))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                               ? 0U
                                               : VL_SHIFTRS_III(32,32,5, vlSelf->alu_tb__DOT__a, 
                                                                (0x1fU 
                                                                 & vlSelf->alu_tb__DOT__b)))))
                                 : ((4U & (IData)(vlSelf->alu_tb__DOT__op))
                                     ? ((2U & (IData)(vlSelf->alu_tb__DOT__op))
                                         ? ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                             ? (vlSelf->alu_tb__DOT__a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->alu_tb__DOT__b))
                                             : (vlSelf->alu_tb__DOT__a 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->alu_tb__DOT__b)))
                                         : ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                             ? (VL_LTS_III(32, vlSelf->alu_tb__DOT__a, vlSelf->alu_tb__DOT__b)
                                                 ? 1U
                                                 : 0U)
                                             : (vlSelf->alu_tb__DOT__a 
                                                ^ vlSelf->alu_tb__DOT__b)))
                                     : ((2U & (IData)(vlSelf->alu_tb__DOT__op))
                                         ? ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                             ? (vlSelf->alu_tb__DOT__a 
                                                | vlSelf->alu_tb__DOT__b)
                                             : (vlSelf->alu_tb__DOT__a 
                                                & vlSelf->alu_tb__DOT__b))
                                         : ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                             ? (vlSelf->alu_tb__DOT__a 
                                                - vlSelf->alu_tb__DOT__b)
                                             : (vlSelf->alu_tb__DOT__a 
                                                + vlSelf->alu_tb__DOT__b)))))),32);
        bufp->chgBit(oldp+4,((0U == ((8U & (IData)(vlSelf->alu_tb__DOT__op))
                                      ? ((4U & (IData)(vlSelf->alu_tb__DOT__op))
                                          ? 0U : ((2U 
                                                   & (IData)(vlSelf->alu_tb__DOT__op))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->alu_tb__DOT__op))
                                                    ? 0U
                                                    : 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->alu_tb__DOT__a, 
                                                                  (0x1fU 
                                                                   & vlSelf->alu_tb__DOT__b)))))
                                      : ((4U & (IData)(vlSelf->alu_tb__DOT__op))
                                          ? ((2U & (IData)(vlSelf->alu_tb__DOT__op))
                                              ? ((1U 
                                                  & (IData)(vlSelf->alu_tb__DOT__op))
                                                  ? 
                                                 (vlSelf->alu_tb__DOT__a 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->alu_tb__DOT__b))
                                                  : 
                                                 (vlSelf->alu_tb__DOT__a 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->alu_tb__DOT__b)))
                                              : ((1U 
                                                  & (IData)(vlSelf->alu_tb__DOT__op))
                                                  ? 
                                                 (VL_LTS_III(32, vlSelf->alu_tb__DOT__a, vlSelf->alu_tb__DOT__b)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (vlSelf->alu_tb__DOT__a 
                                                  ^ vlSelf->alu_tb__DOT__b)))
                                          : ((2U & (IData)(vlSelf->alu_tb__DOT__op))
                                              ? ((1U 
                                                  & (IData)(vlSelf->alu_tb__DOT__op))
                                                  ? 
                                                 (vlSelf->alu_tb__DOT__a 
                                                  | vlSelf->alu_tb__DOT__b)
                                                  : 
                                                 (vlSelf->alu_tb__DOT__a 
                                                  & vlSelf->alu_tb__DOT__b))
                                              : ((1U 
                                                  & (IData)(vlSelf->alu_tb__DOT__op))
                                                  ? 
                                                 (vlSelf->alu_tb__DOT__a 
                                                  - vlSelf->alu_tb__DOT__b)
                                                  : 
                                                 (vlSelf->alu_tb__DOT__a 
                                                  + vlSelf->alu_tb__DOT__b))))))));
        bufp->chgIData(oldp+5,(vlSelf->alu_tb__DOT__tests),32);
        bufp->chgIData(oldp+6,(vlSelf->alu_tb__DOT__pass),32);
    }
}

void Valu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_cleanup\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
