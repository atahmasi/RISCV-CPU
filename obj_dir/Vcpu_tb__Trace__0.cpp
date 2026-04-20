// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_tb__Syms.h"


void Vcpu_tb___024root__trace_chg_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_0\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_tb___024root__trace_chg_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu_tb__DOT__last_regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->cpu_tb__DOT__last_regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->cpu_tb__DOT__last_regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu_tb__DOT__last_regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->cpu_tb__DOT__last_regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->cpu_tb__DOT__last_regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->cpu_tb__DOT__last_regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu_tb__DOT__last_regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->cpu_tb__DOT__last_regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->cpu_tb__DOT__last_regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->cpu_tb__DOT__last_regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu_tb__DOT__last_regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu_tb__DOT__last_regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu_tb__DOT__last_regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu_tb__DOT__last_regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu_tb__DOT__last_regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu_tb__DOT__last_regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu_tb__DOT__last_regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu_tb__DOT__last_regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu_tb__DOT__last_regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu_tb__DOT__last_regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu_tb__DOT__last_regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu_tb__DOT__last_regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu_tb__DOT__last_regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu_tb__DOT__last_regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu_tb__DOT__last_regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu_tb__DOT__last_regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu_tb__DOT__last_regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu_tb__DOT__last_regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu_tb__DOT__last_regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu_tb__DOT__last_regs[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu_tb__DOT__last_regs[31]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu_tb__DOT__dut__DOT__mem_read_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+33,(vlSelf->cpu_tb__DOT__dut__DOT__mem_write));
        bufp->chgIData(oldp+34,(vlSelf->cpu_tb__DOT__dut__DOT__alu_y),32);
        bufp->chgIData(oldp+35,(vlSelf->cpu_tb__DOT__dut__DOT__rd2),32);
        bufp->chgIData(oldp+36,(vlSelf->cpu_tb__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+37,(((IData)(vlSelf->cpu_tb__DOT__dut__DOT__jalr)
                                  ? (0xfffffffcU & 
                                     (vlSelf->cpu_tb__DOT__dut__DOT__imm 
                                      + vlSelf->cpu_tb__DOT__dut__DOT__rd1))
                                  : ((IData)(vlSelf->cpu_tb__DOT__dut__DOT__jal)
                                      ? vlSelf->cpu_tb__DOT__dut__DOT____VdfgTmp_h8a6dd295__0
                                      : (((IData)(vlSelf->cpu_tb__DOT__dut__DOT__branch) 
                                          & (0U != vlSelf->cpu_tb__DOT__dut__DOT__alu_y))
                                          ? vlSelf->cpu_tb__DOT__dut__DOT____VdfgTmp_h8a6dd295__0
                                          : ((IData)(4U) 
                                             + vlSelf->cpu_tb__DOT__dut__DOT__pc))))),32);
        bufp->chgIData(oldp+38,(vlSelf->cpu_tb__DOT__dut__DOT__instruction),32);
        bufp->chgCData(oldp+39,(vlSelf->cpu_tb__DOT__dut__DOT__opcode),7);
        bufp->chgCData(oldp+40,((0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgCData(oldp+41,((0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+42,((0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+43,((7U & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+44,((vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+45,(vlSelf->cpu_tb__DOT__dut__DOT__imm),32);
        bufp->chgBit(oldp+46,(vlSelf->cpu_tb__DOT__dut__DOT__reg_write));
        bufp->chgBit(oldp+47,(vlSelf->cpu_tb__DOT__dut__DOT__branch));
        bufp->chgBit(oldp+48,(vlSelf->cpu_tb__DOT__dut__DOT__jal));
        bufp->chgBit(oldp+49,(vlSelf->cpu_tb__DOT__dut__DOT__jalr));
        bufp->chgCData(oldp+50,(vlSelf->cpu_tb__DOT__dut__DOT__alu_ctrl),5);
        bufp->chgBit(oldp+51,(vlSelf->cpu_tb__DOT__dut__DOT__mem_read));
        bufp->chgIData(oldp+52,(vlSelf->cpu_tb__DOT__dut__DOT__rd1),32);
        bufp->chgIData(oldp+53,(vlSelf->cpu_tb__DOT__dut__DOT__alu_in1),32);
        bufp->chgBit(oldp+54,((0U == vlSelf->cpu_tb__DOT__dut__DOT__alu_y)));
        bufp->chgIData(oldp+55,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0]),32);
        bufp->chgIData(oldp+56,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[1]),32);
        bufp->chgIData(oldp+57,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[2]),32);
        bufp->chgIData(oldp+58,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[3]),32);
        bufp->chgIData(oldp+59,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[4]),32);
        bufp->chgIData(oldp+60,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[5]),32);
        bufp->chgIData(oldp+61,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[6]),32);
        bufp->chgIData(oldp+62,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[7]),32);
        bufp->chgIData(oldp+63,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[8]),32);
        bufp->chgIData(oldp+64,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[9]),32);
        bufp->chgIData(oldp+65,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[10]),32);
        bufp->chgIData(oldp+66,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[11]),32);
        bufp->chgIData(oldp+67,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[12]),32);
        bufp->chgIData(oldp+68,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[13]),32);
        bufp->chgIData(oldp+69,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[14]),32);
        bufp->chgIData(oldp+70,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[15]),32);
        bufp->chgIData(oldp+71,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[16]),32);
        bufp->chgIData(oldp+72,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[17]),32);
        bufp->chgIData(oldp+73,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[18]),32);
        bufp->chgIData(oldp+74,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[19]),32);
        bufp->chgIData(oldp+75,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[20]),32);
        bufp->chgIData(oldp+76,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[21]),32);
        bufp->chgIData(oldp+77,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[22]),32);
        bufp->chgIData(oldp+78,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[23]),32);
        bufp->chgIData(oldp+79,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[24]),32);
        bufp->chgIData(oldp+80,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[25]),32);
        bufp->chgIData(oldp+81,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[26]),32);
        bufp->chgIData(oldp+82,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[27]),32);
        bufp->chgIData(oldp+83,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[28]),32);
        bufp->chgIData(oldp+84,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[29]),32);
        bufp->chgIData(oldp+85,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[30]),32);
        bufp->chgIData(oldp+86,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[31]),32);
        bufp->chgIData(oldp+87,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+88,(vlSelf->cpu_tb__DOT__clk));
    bufp->chgBit(oldp+89,(vlSelf->cpu_tb__DOT__rst));
    bufp->chgIData(oldp+90,(vlSelf->cpu_tb__DOT__dut__DOT__write_data),32);
    bufp->chgIData(oldp+91,(vlSelf->cpu_tb__DOT__unnamedblk1__DOT__i),32);
}

void Vcpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_cleanup\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
