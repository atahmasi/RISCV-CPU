// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_tb__Syms.h"


VL_ATTR_COLD void Vcpu_tb___024root__trace_init_sub__TOP__0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("cpu_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"alu_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+57,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("dec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_top(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_top\n"); );
    // Body
    Vcpu_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu_tb___024root__trace_register(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vcpu_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcpu_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcpu_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcpu_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_const_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_const_0\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_const_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+50,(0U),4);
    bufp->fullCData(oldp+51,(1U),4);
    bufp->fullCData(oldp+52,(2U),4);
    bufp->fullCData(oldp+53,(3U),4);
    bufp->fullCData(oldp+54,(4U),4);
    bufp->fullCData(oldp+55,(5U),4);
    bufp->fullCData(oldp+56,(6U),4);
    bufp->fullCData(oldp+57,(7U),4);
    bufp->fullCData(oldp+58,(8U),4);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_full_0\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu_tb__DOT__dut__DOT__instruction),32);
    bufp->fullCData(oldp+34,(vlSelf->cpu_tb__DOT__dut__DOT__opcode),7);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullCData(oldp+36,((0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+37,((0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+38,((7U & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+39,((vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+40,(vlSelf->cpu_tb__DOT__dut__DOT__imm),32);
    bufp->fullBit(oldp+41,((0x33U == (IData)(vlSelf->cpu_tb__DOT__dut__DOT__opcode))));
    bufp->fullBit(oldp+42,(vlSelf->cpu_tb__DOT__clk));
    bufp->fullBit(oldp+43,(vlSelf->cpu_tb__DOT__rst));
    bufp->fullIData(oldp+44,(vlSelf->cpu_tb__DOT__dut__DOT__pc),32);
    bufp->fullIData(oldp+45,(((0U == (0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                               >> 0xfU)))
                               ? 0U : vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
                              [(0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+46,(((0U == (0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                               >> 0x14U)))
                               ? 0U : vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
                              [(0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+47,((((0U == (0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                                >> 0xfU)))
                                ? 0U : vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
                               [(0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                          >> 0xfU))]) 
                              + ((0U == (0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                                  >> 0x14U)))
                                  ? 0U : vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
                                 [(0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                            >> 0x14U))]))),32);
    bufp->fullBit(oldp+48,((0U == (((0U == (0x1fU & 
                                            (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                             >> 0xfU)))
                                     ? 0U : vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
                                    [(0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                               >> 0xfU))]) 
                                   + ((0U == (0x1fU 
                                              & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                                 >> 0x14U)))
                                       ? 0U : vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs
                                      [(0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                                 >> 0x14U))])))));
    bufp->fullIData(oldp+49,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__unnamedblk1__DOT__i),32);
}
