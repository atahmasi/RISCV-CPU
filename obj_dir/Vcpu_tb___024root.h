// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_tb.h for the primary calling header

#ifndef VERILATED_VCPU_TB___024ROOT_H_
#define VERILATED_VCPU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcpu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cpu_tb__DOT__clk;
    CData/*0:0*/ cpu_tb__DOT__rst;
    CData/*6:0*/ cpu_tb__DOT__dut__DOT__opcode;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__reg_write;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__branch;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__jal;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__jalr;
    CData/*4:0*/ cpu_tb__DOT__dut__DOT__alu_ctrl;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__mem_read;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__mem_write;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ cpu_tb__DOT__debug_x1;
    IData/*31:0*/ cpu_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__pc;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__pc_next;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__instruction;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__imm;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__rd1;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__rd2;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__write_data;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__alu_y;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__mem_read_data;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__alu_in1;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT____VdfgTmp_h8a6dd295__0;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__rf__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> cpu_tb__DOT__last_regs;
    VlUnpacked<IData/*31:0*/, 256> cpu_tb__DOT__dut__DOT__dmem;
    VlUnpacked<IData/*31:0*/, 256> cpu_tb__DOT__dut__DOT__imem;
    VlUnpacked<IData/*31:0*/, 32> cpu_tb__DOT__dut__DOT__rf__DOT__regs;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h049087fc__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_tb___024root(Vcpu_tb__Syms* symsp, const char* v__name);
    ~Vcpu_tb___024root();
    VL_UNCOPYABLE(Vcpu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
