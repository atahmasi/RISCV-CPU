// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_tb__Syms.h"


VL_ATTR_COLD void Valu_tb___024root__trace_init_sub__TOP__0(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("alu_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Valu_tb___024root__trace_init_top(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_init_top\n"); );
    // Body
    Valu_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Valu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu_tb___024root__trace_register(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Valu_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Valu_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Valu_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Valu_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu_tb___024root__trace_const_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_const_0\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_tb___024root__trace_const_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+8,(0U),4);
    bufp->fullCData(oldp+9,(1U),4);
    bufp->fullCData(oldp+10,(2U),4);
    bufp->fullCData(oldp+11,(3U),4);
    bufp->fullCData(oldp+12,(4U),4);
    bufp->fullCData(oldp+13,(5U),4);
    bufp->fullCData(oldp+14,(6U),4);
    bufp->fullCData(oldp+15,(7U),4);
    bufp->fullCData(oldp+16,(8U),4);
}

VL_ATTR_COLD void Valu_tb___024root__trace_full_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_full_0\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_tb___024root__trace_full_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->alu_tb__DOT__a),32);
    bufp->fullIData(oldp+2,(vlSelf->alu_tb__DOT__b),32);
    bufp->fullCData(oldp+3,(vlSelf->alu_tb__DOT__op),4);
    bufp->fullIData(oldp+4,(((8U & (IData)(vlSelf->alu_tb__DOT__op))
                              ? ((4U & (IData)(vlSelf->alu_tb__DOT__op))
                                  ? 0U : ((2U & (IData)(vlSelf->alu_tb__DOT__op))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->alu_tb__DOT__op))
                                                    ? 0U
                                                    : 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->alu_tb__DOT__a, 
                                                                  (0x1fU 
                                                                   & vlSelf->alu_tb__DOT__b)))))
                              : ((4U & (IData)(vlSelf->alu_tb__DOT__op))
                                  ? ((2U & (IData)(vlSelf->alu_tb__DOT__op))
                                      ? ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                          ? (vlSelf->alu_tb__DOT__a 
                                             >> (0x1fU 
                                                 & vlSelf->alu_tb__DOT__b))
                                          : (vlSelf->alu_tb__DOT__a 
                                             << (0x1fU 
                                                 & vlSelf->alu_tb__DOT__b)))
                                      : ((1U & (IData)(vlSelf->alu_tb__DOT__op))
                                          ? (VL_LTS_III(32, vlSelf->alu_tb__DOT__a, vlSelf->alu_tb__DOT__b)
                                              ? 1U : 0U)
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
    bufp->fullBit(oldp+5,((0U == ((8U & (IData)(vlSelf->alu_tb__DOT__op))
                                   ? ((4U & (IData)(vlSelf->alu_tb__DOT__op))
                                       ? 0U : ((2U 
                                                & (IData)(vlSelf->alu_tb__DOT__op))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->alu_tb__DOT__op))
                                                    ? 0U
                                                    : 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->alu_tb__DOT__a, 
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
                                                  + vlSelf->alu_tb__DOT__b))))))));
    bufp->fullIData(oldp+6,(vlSelf->alu_tb__DOT__tests),32);
    bufp->fullIData(oldp+7,(vlSelf->alu_tb__DOT__pass),32);
}
