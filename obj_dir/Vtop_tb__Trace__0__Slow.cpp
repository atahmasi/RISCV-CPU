// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__CPU_DEFS__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("CPU_DEFS", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__CPU_DEFS__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"CLOCK_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+58,0,"LEDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"CLOCK_50",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"KEY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+58,0,"LEDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+56,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"led_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("cpu0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"debug_x1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"mem_write_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"mem_address_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"mem_wdata_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+7,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+12,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+54,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"alu_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"alu_in1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"rd1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"rd2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"alu_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("controller0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+10,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+13,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"alu_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("dec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+7,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+12,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+20+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__CPU_DEFS__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__CPU_DEFS__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+63,0,"ALU_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+65,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"ALU_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"ALU_ADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"ALU_ANDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+76,0,"ALU_ORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+77,0,"ALU_XORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+78,0,"ALU_SLTI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+79,0,"ALU_SLTIU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+80,0,"ALU_SLLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+81,0,"ALU_SRLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+82,0,"ALU_SRAI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+83,0,"ALU_BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"ALU_BNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+85,0,"ALU_BLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+86,0,"ALU_BGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"ALU_BLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+88,0,"ALU_BGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"ALU_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"ALU_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+91,0,"OP_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+92,0,"OP_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+93,0,"OP_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+94,0,"OP_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+95,0,"OP_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+96,0,"OP_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+97,0,"OP_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+98,0,"OP_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+99,0,"OP_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+62,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__debug_x1),32);
    bufp->fullIData(oldp+63,(5U),32);
    bufp->fullCData(oldp+64,(0U),5);
    bufp->fullCData(oldp+65,(1U),5);
    bufp->fullCData(oldp+66,(2U),5);
    bufp->fullCData(oldp+67,(3U),5);
    bufp->fullCData(oldp+68,(4U),5);
    bufp->fullCData(oldp+69,(5U),5);
    bufp->fullCData(oldp+70,(6U),5);
    bufp->fullCData(oldp+71,(7U),5);
    bufp->fullCData(oldp+72,(8U),5);
    bufp->fullCData(oldp+73,(9U),5);
    bufp->fullCData(oldp+74,(0xaU),5);
    bufp->fullCData(oldp+75,(0xbU),5);
    bufp->fullCData(oldp+76,(0xcU),5);
    bufp->fullCData(oldp+77,(0xdU),5);
    bufp->fullCData(oldp+78,(0xeU),5);
    bufp->fullCData(oldp+79,(0xfU),5);
    bufp->fullCData(oldp+80,(0x10U),5);
    bufp->fullCData(oldp+81,(0x11U),5);
    bufp->fullCData(oldp+82,(0x12U),5);
    bufp->fullCData(oldp+83,(0x13U),5);
    bufp->fullCData(oldp+84,(0x14U),5);
    bufp->fullCData(oldp+85,(0x15U),5);
    bufp->fullCData(oldp+86,(0x16U),5);
    bufp->fullCData(oldp+87,(0x17U),5);
    bufp->fullCData(oldp+88,(0x18U),5);
    bufp->fullCData(oldp+89,(0x1bU),5);
    bufp->fullCData(oldp+90,(0x1cU),5);
    bufp->fullCData(oldp+91,(0x37U),7);
    bufp->fullCData(oldp+92,(0x17U),7);
    bufp->fullCData(oldp+93,(0x6fU),7);
    bufp->fullCData(oldp+94,(0x67U),7);
    bufp->fullCData(oldp+95,(0x63U),7);
    bufp->fullCData(oldp+96,(3U),7);
    bufp->fullCData(oldp+97,(0x23U),7);
    bufp->fullCData(oldp+98,(0x13U),7);
    bufp->fullCData(oldp+99,(0x33U),7);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top_tb__DOT__dut__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_write));
    bufp->fullIData(oldp+3,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2),32);
    bufp->fullIData(oldp+4,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc),32);
    bufp->fullIData(oldp+5,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction),32);
    bufp->fullCData(oldp+6,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode),7);
    bufp->fullCData(oldp+7,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                      >> 7U))),5);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+10,((7U & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+11,((vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+12,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm),32);
    bufp->fullBit(oldp+13,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write));
    bufp->fullBit(oldp+14,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__branch));
    bufp->fullBit(oldp+15,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jal));
    bufp->fullBit(oldp+16,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jalr));
    bufp->fullCData(oldp+17,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl),5);
    bufp->fullIData(oldp+18,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd1),32);
    bufp->fullIData(oldp+19,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1),32);
    bufp->fullIData(oldp+20,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[1]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[2]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[3]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[4]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[5]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[6]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[7]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[8]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[9]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[10]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[11]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[12]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[13]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[14]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[15]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[16]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[17]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[18]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[19]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[20]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[21]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[22]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[23]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[24]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[25]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[26]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[27]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[28]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[29]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[30]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[31]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+53,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y),32);
    bufp->fullBit(oldp+54,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read));
    bufp->fullBit(oldp+55,((0U == vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y)));
    bufp->fullBit(oldp+56,(vlSelf->top_tb__DOT__CLOCK_50));
    bufp->fullCData(oldp+57,(vlSelf->top_tb__DOT__KEY),2);
    bufp->fullSData(oldp+58,(vlSelf->top_tb__DOT__dut__DOT__led_reg),10);
    bufp->fullIData(oldp+59,(((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jalr)
                               ? (0xfffffffcU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm 
                                                 + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd1))
                               : ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jal)
                                   ? vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT____VdfgTmp_h8a6dd295__0
                                   : (((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__branch) 
                                       & (0U != vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y))
                                       ? vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT____VdfgTmp_h8a6dd295__0
                                       : ((IData)(4U) 
                                          + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc))))),32);
    bufp->fullIData(oldp+60,((((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jal) 
                               | (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jalr))
                               ? ((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc)
                               : ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read)
                                   ? vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read_data
                                   : vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y))),32);
    bufp->fullIData(oldp+61,(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read_data),32);
}
