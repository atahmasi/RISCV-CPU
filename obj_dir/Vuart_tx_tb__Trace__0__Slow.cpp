// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_tx_tb__Syms.h"


VL_ATTR_COLD void Vuart_tx_tb___024root__trace_init_sub__TOP__0(Vuart_tx_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("uart_tx_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"tx_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"tx_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"CLKS_PER_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"tx_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"tx_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"clk_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"bit_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuart_tx_tb___024root__trace_init_top(Vuart_tx_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root__trace_init_top\n"); );
    // Body
    Vuart_tx_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vuart_tx_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vuart_tx_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuart_tx_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuart_tx_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vuart_tx_tb___024root__trace_register(Vuart_tx_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vuart_tx_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vuart_tx_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vuart_tx_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vuart_tx_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vuart_tx_tb___024root__trace_const_0_sub_0(Vuart_tx_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuart_tx_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root__trace_const_0\n"); );
    // Init
    Vuart_tx_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tx_tb___024root*>(voidSelf);
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vuart_tx_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuart_tx_tb___024root__trace_const_0_sub_0(Vuart_tx_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+11,(0xaU),16);
}

VL_ATTR_COLD void Vuart_tx_tb___024root__trace_full_0_sub_0(Vuart_tx_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuart_tx_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root__trace_full_0\n"); );
    // Init
    Vuart_tx_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tx_tb___024root*>(voidSelf);
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vuart_tx_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuart_tx_tb___024root__trace_full_0_sub_0(Vuart_tx_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->uart_tx_tb__DOT__tx));
    bufp->fullBit(oldp+2,(vlSelf->uart_tx_tb__DOT__tx_busy));
    bufp->fullCData(oldp+3,(vlSelf->uart_tx_tb__DOT__dut__DOT__state),3);
    bufp->fullSData(oldp+4,(vlSelf->uart_tx_tb__DOT__dut__DOT__clk_count),16);
    bufp->fullCData(oldp+5,(vlSelf->uart_tx_tb__DOT__dut__DOT__bit_index),3);
    bufp->fullCData(oldp+6,(vlSelf->uart_tx_tb__DOT__dut__DOT__data_reg),8);
    bufp->fullBit(oldp+7,(vlSelf->uart_tx_tb__DOT__clk));
    bufp->fullBit(oldp+8,(vlSelf->uart_tx_tb__DOT__rst));
    bufp->fullBit(oldp+9,(vlSelf->uart_tx_tb__DOT__tx_start));
    bufp->fullCData(oldp+10,(vlSelf->uart_tx_tb__DOT__tx_data),8);
}
