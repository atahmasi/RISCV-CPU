// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_tx_tb.h for the primary calling header

#ifndef VERILATED_VUART_TX_TB___024ROOT_H_
#define VERILATED_VUART_TX_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuart_tx_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_tx_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ uart_tx_tb__DOT__clk;
    CData/*0:0*/ uart_tx_tb__DOT__rst;
    CData/*0:0*/ uart_tx_tb__DOT__tx_start;
    CData/*7:0*/ uart_tx_tb__DOT__tx_data;
    CData/*0:0*/ uart_tx_tb__DOT__tx;
    CData/*0:0*/ uart_tx_tb__DOT__tx_busy;
    CData/*2:0*/ uart_tx_tb__DOT__dut__DOT__state;
    CData/*2:0*/ uart_tx_tb__DOT__dut__DOT__bit_index;
    CData/*7:0*/ uart_tx_tb__DOT__dut__DOT__data_reg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tx_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tx_tb__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr_h987f0934__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ uart_tx_tb__DOT__dut__DOT__clk_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3acd41b4__0;
    VlTriggerScheduler __VtrigSched_h10493d46__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vuart_tx_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_tx_tb___024root(Vuart_tx_tb__Syms* symsp, const char* v__name);
    ~Vuart_tx_tb___024root();
    VL_UNCOPYABLE(Vuart_tx_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
