// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_tb__Syms.h"


VL_ATTR_COLD void Vcpu_tb___024root__trace_init_sub__TOP__CPU_DEFS__0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_sub__TOP__0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("CPU_DEFS", VerilatedTracePrefixType::SCOPE_MODULE);
    Vcpu_tb___024root__trace_init_sub__TOP__CPU_DEFS__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("cpu_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+89,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"debug_x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("last_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+89,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"debug_x1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"mem_write_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"mem_address_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"mem_wdata_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+52,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"alu_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"alu_in1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"rd1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"rd2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"alu_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("controller0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+47,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"alu_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("dec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+89,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+91,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+56+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+88,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_sub__TOP__CPU_DEFS__0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_sub__TOP__CPU_DEFS__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+94,0,"ALU_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+96,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+97,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+98,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+99,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+100,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"ALU_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+102,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+103,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+104,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+105,0,"ALU_ADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+106,0,"ALU_ANDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+107,0,"ALU_ORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+108,0,"ALU_XORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"ALU_SLTI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"ALU_SLTIU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"ALU_SLLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"ALU_SRLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+113,0,"ALU_SRAI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"ALU_BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"ALU_BNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+116,0,"ALU_BLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"ALU_BGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+118,0,"ALU_BLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"ALU_BGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"ALU_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+121,0,"ALU_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+122,0,"OP_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+123,0,"OP_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+124,0,"OP_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+125,0,"OP_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+126,0,"OP_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+127,0,"OP_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+128,0,"OP_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+129,0,"OP_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+130,0,"OP_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
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
    bufp->fullIData(oldp+93,(vlSelf->cpu_tb__DOT__debug_x1),32);
    bufp->fullIData(oldp+94,(5U),32);
    bufp->fullCData(oldp+95,(0U),5);
    bufp->fullCData(oldp+96,(1U),5);
    bufp->fullCData(oldp+97,(2U),5);
    bufp->fullCData(oldp+98,(3U),5);
    bufp->fullCData(oldp+99,(4U),5);
    bufp->fullCData(oldp+100,(5U),5);
    bufp->fullCData(oldp+101,(6U),5);
    bufp->fullCData(oldp+102,(7U),5);
    bufp->fullCData(oldp+103,(8U),5);
    bufp->fullCData(oldp+104,(9U),5);
    bufp->fullCData(oldp+105,(0xaU),5);
    bufp->fullCData(oldp+106,(0xbU),5);
    bufp->fullCData(oldp+107,(0xcU),5);
    bufp->fullCData(oldp+108,(0xdU),5);
    bufp->fullCData(oldp+109,(0xeU),5);
    bufp->fullCData(oldp+110,(0xfU),5);
    bufp->fullCData(oldp+111,(0x10U),5);
    bufp->fullCData(oldp+112,(0x11U),5);
    bufp->fullCData(oldp+113,(0x12U),5);
    bufp->fullCData(oldp+114,(0x13U),5);
    bufp->fullCData(oldp+115,(0x14U),5);
    bufp->fullCData(oldp+116,(0x15U),5);
    bufp->fullCData(oldp+117,(0x16U),5);
    bufp->fullCData(oldp+118,(0x17U),5);
    bufp->fullCData(oldp+119,(0x18U),5);
    bufp->fullCData(oldp+120,(0x1bU),5);
    bufp->fullCData(oldp+121,(0x1cU),5);
    bufp->fullCData(oldp+122,(0x37U),7);
    bufp->fullCData(oldp+123,(0x17U),7);
    bufp->fullCData(oldp+124,(0x6fU),7);
    bufp->fullCData(oldp+125,(0x67U),7);
    bufp->fullCData(oldp+126,(0x63U),7);
    bufp->fullCData(oldp+127,(3U),7);
    bufp->fullCData(oldp+128,(0x23U),7);
    bufp->fullCData(oldp+129,(0x13U),7);
    bufp->fullCData(oldp+130,(0x33U),7);
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
    bufp->fullIData(oldp+1,(vlSelf->cpu_tb__DOT__last_regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu_tb__DOT__last_regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu_tb__DOT__last_regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu_tb__DOT__last_regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu_tb__DOT__last_regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu_tb__DOT__last_regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu_tb__DOT__last_regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu_tb__DOT__last_regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu_tb__DOT__last_regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu_tb__DOT__last_regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu_tb__DOT__last_regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu_tb__DOT__last_regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu_tb__DOT__last_regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu_tb__DOT__last_regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu_tb__DOT__last_regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu_tb__DOT__last_regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu_tb__DOT__last_regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu_tb__DOT__last_regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu_tb__DOT__last_regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu_tb__DOT__last_regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu_tb__DOT__last_regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu_tb__DOT__last_regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu_tb__DOT__last_regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu_tb__DOT__last_regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu_tb__DOT__last_regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu_tb__DOT__last_regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu_tb__DOT__last_regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu_tb__DOT__last_regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu_tb__DOT__last_regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu_tb__DOT__last_regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu_tb__DOT__last_regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu_tb__DOT__last_regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu_tb__DOT__dut__DOT__mem_read_data),32);
    bufp->fullBit(oldp+34,(vlSelf->cpu_tb__DOT__dut__DOT__mem_write));
    bufp->fullIData(oldp+35,(vlSelf->cpu_tb__DOT__dut__DOT__alu_y),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu_tb__DOT__dut__DOT__rd2),32);
    bufp->fullIData(oldp+37,(vlSelf->cpu_tb__DOT__dut__DOT__pc),32);
    bufp->fullIData(oldp+38,(((IData)(vlSelf->cpu_tb__DOT__dut__DOT__jalr)
                               ? (0xfffffffcU & (vlSelf->cpu_tb__DOT__dut__DOT__imm 
                                                 + vlSelf->cpu_tb__DOT__dut__DOT__rd1))
                               : ((IData)(vlSelf->cpu_tb__DOT__dut__DOT__jal)
                                   ? vlSelf->cpu_tb__DOT__dut__DOT____VdfgTmp_h8a6dd295__0
                                   : (((IData)(vlSelf->cpu_tb__DOT__dut__DOT__branch) 
                                       & (0U != vlSelf->cpu_tb__DOT__dut__DOT__alu_y))
                                       ? vlSelf->cpu_tb__DOT__dut__DOT____VdfgTmp_h8a6dd295__0
                                       : ((IData)(4U) 
                                          + vlSelf->cpu_tb__DOT__dut__DOT__pc))))),32);
    bufp->fullIData(oldp+39,(vlSelf->cpu_tb__DOT__dut__DOT__instruction),32);
    bufp->fullCData(oldp+40,(vlSelf->cpu_tb__DOT__dut__DOT__opcode),7);
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+44,((7U & (vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+45,((vlSelf->cpu_tb__DOT__dut__DOT__instruction 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+46,(vlSelf->cpu_tb__DOT__dut__DOT__imm),32);
    bufp->fullBit(oldp+47,(vlSelf->cpu_tb__DOT__dut__DOT__reg_write));
    bufp->fullBit(oldp+48,(vlSelf->cpu_tb__DOT__dut__DOT__branch));
    bufp->fullBit(oldp+49,(vlSelf->cpu_tb__DOT__dut__DOT__jal));
    bufp->fullBit(oldp+50,(vlSelf->cpu_tb__DOT__dut__DOT__jalr));
    bufp->fullCData(oldp+51,(vlSelf->cpu_tb__DOT__dut__DOT__alu_ctrl),5);
    bufp->fullBit(oldp+52,(vlSelf->cpu_tb__DOT__dut__DOT__mem_read));
    bufp->fullIData(oldp+53,(vlSelf->cpu_tb__DOT__dut__DOT__rd1),32);
    bufp->fullIData(oldp+54,(vlSelf->cpu_tb__DOT__dut__DOT__alu_in1),32);
    bufp->fullBit(oldp+55,((0U == vlSelf->cpu_tb__DOT__dut__DOT__alu_y)));
    bufp->fullIData(oldp+56,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[0]),32);
    bufp->fullIData(oldp+57,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[1]),32);
    bufp->fullIData(oldp+58,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[2]),32);
    bufp->fullIData(oldp+59,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[3]),32);
    bufp->fullIData(oldp+60,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[4]),32);
    bufp->fullIData(oldp+61,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[5]),32);
    bufp->fullIData(oldp+62,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[6]),32);
    bufp->fullIData(oldp+63,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[7]),32);
    bufp->fullIData(oldp+64,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[8]),32);
    bufp->fullIData(oldp+65,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[9]),32);
    bufp->fullIData(oldp+66,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[10]),32);
    bufp->fullIData(oldp+67,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[11]),32);
    bufp->fullIData(oldp+68,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[12]),32);
    bufp->fullIData(oldp+69,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[13]),32);
    bufp->fullIData(oldp+70,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[14]),32);
    bufp->fullIData(oldp+71,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[15]),32);
    bufp->fullIData(oldp+72,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[16]),32);
    bufp->fullIData(oldp+73,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[17]),32);
    bufp->fullIData(oldp+74,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[18]),32);
    bufp->fullIData(oldp+75,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[19]),32);
    bufp->fullIData(oldp+76,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[20]),32);
    bufp->fullIData(oldp+77,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[21]),32);
    bufp->fullIData(oldp+78,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[22]),32);
    bufp->fullIData(oldp+79,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[23]),32);
    bufp->fullIData(oldp+80,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[24]),32);
    bufp->fullIData(oldp+81,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[25]),32);
    bufp->fullIData(oldp+82,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[26]),32);
    bufp->fullIData(oldp+83,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[27]),32);
    bufp->fullIData(oldp+84,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[28]),32);
    bufp->fullIData(oldp+85,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[29]),32);
    bufp->fullIData(oldp+86,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[30]),32);
    bufp->fullIData(oldp+87,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__regs[31]),32);
    bufp->fullIData(oldp+88,(vlSelf->cpu_tb__DOT__dut__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+89,(vlSelf->cpu_tb__DOT__clk));
    bufp->fullBit(oldp+90,(vlSelf->cpu_tb__DOT__rst));
    bufp->fullIData(oldp+91,(vlSelf->cpu_tb__DOT__dut__DOT__write_data),32);
    bufp->fullIData(oldp+92,(vlSelf->cpu_tb__DOT__unnamedblk1__DOT__i),32);
}
