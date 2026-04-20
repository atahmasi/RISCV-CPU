// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top_tb__DOT__CLOCK_50;
    CData/*0:0*/ top_tb__DOT__dut__DOT__rst;
    CData/*1:0*/ top_tb__DOT__KEY;
    CData/*6:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__opcode;
    CData/*0:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__reg_write;
    CData/*0:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__branch;
    CData/*0:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__jal;
    CData/*0:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__jalr;
    CData/*4:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl;
    CData/*0:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__mem_read;
    CData/*0:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__mem_write;
    CData/*7:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__CLOCK_50__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__dut__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ top_tb__DOT__dut__DOT__led_reg;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__debug_x1;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__pc;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__pc_next;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__instruction;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__imm;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__rd1;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__rd2;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__alu_y;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__mem_read_data;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT____VdfgTmp_h8a6dd295__0;
    IData/*31:0*/ top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> top_tb__DOT__dut__DOT__cpu0__DOT__dmem;
    VlUnpacked<IData/*31:0*/, 256> top_tb__DOT__dut__DOT__cpu0__DOT__imem;
    VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he9fa4b5b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
