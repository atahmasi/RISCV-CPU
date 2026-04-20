// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->top_tb__DOT__dut__DOT__rst));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+1,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_write));
        bufp->chgIData(oldp+2,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2),32);
        bufp->chgIData(oldp+3,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc),32);
        bufp->chgIData(oldp+4,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction),32);
        bufp->chgCData(oldp+5,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode),7);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                         >> 7U))),5);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+8,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+9,((7U & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+10,((vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+11,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm),32);
        bufp->chgBit(oldp+12,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write));
        bufp->chgBit(oldp+13,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__branch));
        bufp->chgBit(oldp+14,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jal));
        bufp->chgBit(oldp+15,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jalr));
        bufp->chgCData(oldp+16,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl),5);
        bufp->chgIData(oldp+17,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd1),32);
        bufp->chgIData(oldp+18,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1),32);
        bufp->chgIData(oldp+19,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0]),32);
        bufp->chgIData(oldp+20,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[1]),32);
        bufp->chgIData(oldp+21,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[2]),32);
        bufp->chgIData(oldp+22,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[3]),32);
        bufp->chgIData(oldp+23,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[4]),32);
        bufp->chgIData(oldp+24,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[5]),32);
        bufp->chgIData(oldp+25,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[6]),32);
        bufp->chgIData(oldp+26,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[7]),32);
        bufp->chgIData(oldp+27,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[8]),32);
        bufp->chgIData(oldp+28,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[9]),32);
        bufp->chgIData(oldp+29,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[10]),32);
        bufp->chgIData(oldp+30,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[11]),32);
        bufp->chgIData(oldp+31,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[12]),32);
        bufp->chgIData(oldp+32,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[13]),32);
        bufp->chgIData(oldp+33,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[14]),32);
        bufp->chgIData(oldp+34,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[15]),32);
        bufp->chgIData(oldp+35,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[16]),32);
        bufp->chgIData(oldp+36,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[17]),32);
        bufp->chgIData(oldp+37,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[18]),32);
        bufp->chgIData(oldp+38,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[19]),32);
        bufp->chgIData(oldp+39,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[20]),32);
        bufp->chgIData(oldp+40,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[21]),32);
        bufp->chgIData(oldp+41,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[22]),32);
        bufp->chgIData(oldp+42,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[23]),32);
        bufp->chgIData(oldp+43,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[24]),32);
        bufp->chgIData(oldp+44,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[25]),32);
        bufp->chgIData(oldp+45,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[26]),32);
        bufp->chgIData(oldp+46,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[27]),32);
        bufp->chgIData(oldp+47,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[28]),32);
        bufp->chgIData(oldp+48,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[29]),32);
        bufp->chgIData(oldp+49,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[30]),32);
        bufp->chgIData(oldp+50,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[31]),32);
        bufp->chgIData(oldp+51,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+52,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y),32);
        bufp->chgBit(oldp+53,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read));
        bufp->chgBit(oldp+54,((0U == vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y)));
    }
    bufp->chgBit(oldp+55,(vlSelf->top_tb__DOT__CLOCK_50));
    bufp->chgCData(oldp+56,(vlSelf->top_tb__DOT__KEY),2);
    bufp->chgSData(oldp+57,(vlSelf->top_tb__DOT__dut__DOT__led_reg),10);
    bufp->chgIData(oldp+58,(((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jalr)
                              ? (0xfffffffcU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm 
                                                + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd1))
                              : ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jal)
                                  ? vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT____VdfgTmp_h8a6dd295__0
                                  : (((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__branch) 
                                      & (0U != vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y))
                                      ? vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT____VdfgTmp_h8a6dd295__0
                                      : ((IData)(4U) 
                                         + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc))))),32);
    bufp->chgIData(oldp+59,((((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jal) 
                              | (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jalr))
                              ? ((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc)
                              : ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read)
                                  ? vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read_data
                                  : vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y))),32);
    bufp->chgIData(oldp+60,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read_data),32);
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
