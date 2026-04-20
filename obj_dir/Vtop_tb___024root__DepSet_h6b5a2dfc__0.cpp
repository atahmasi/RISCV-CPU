// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial\n"); );
    // Body
    Vtop_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__CLOCK_50__0 
        = vlSelf->top_tb__DOT__CLOCK_50;
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__dut__DOT__rst__0 
        = vlSelf->top_tb__DOT__dut__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/top_tb.sv", 
                                           13);
        vlSelf->top_tb__DOT__CLOCK_50 = (1U & (~ (IData)(vlSelf->top_tb__DOT__CLOCK_50)));
    }
}

void Vtop_tb___024root___eval_act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0 = 0U;
    if (VL_UNLIKELY(((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_write) 
                     & (0x80000000U == vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y)))) {
        VL_WRITEF("LED WRITE: addr=%x data=%x LEDR=%b\n",
                  32,vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y,
                  32,vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2,
                  10,(IData)(vlSelf->top_tb__DOT__dut__DOT__led_reg));
    }
    if (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_write) {
        vlSelf->__Vdlyvval__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0 
            = vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2;
        vlSelf->__Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0 = 1U;
        vlSelf->__Vdlyvdim0__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0 
            = (0xffU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y 
                        >> 2U));
    }
    if (vlSelf->top_tb__DOT__dut__DOT__rst) {
        vlSelf->top_tb__DOT__dut__DOT__led_reg = 0U;
    } else if (((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_write) 
                & (0x80000000U == vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y))) {
        vlSelf->top_tb__DOT__dut__DOT__led_reg = (0x3ffU 
                                                  & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2);
    }
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__1(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v0;
    __Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32;
    __Vdlyvval__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32;
    __Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32 = 0;
    // Body
    __Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v0 = 0U;
    __Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32 = 0U;
    if (vlSelf->top_tb__DOT__dut__DOT__rst) {
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v0 = 1U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc = 0U;
    } else {
        if (((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write) 
             & (0U != (0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                >> 7U))))) {
            __Vdlyvval__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32 
                = (((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jal) 
                    | (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jalr))
                    ? ((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc)
                    : ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read)
                        ? vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read_data
                        : vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y));
            __Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32 = 1U;
            __Vdlyvdim0__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32 
                = (0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                            >> 7U));
        }
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc 
            = vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc_next;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v0) {
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[1U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[2U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[3U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[4U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[5U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[6U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[7U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[8U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[9U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0xaU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0xbU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0xcU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0xdU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0xeU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0xfU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x10U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x11U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x12U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x13U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x14U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x15U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x16U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x17U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x18U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x19U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x1aU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x1bU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x1cU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x1dU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x1eU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32) {
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[__Vdlyvdim0__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32] 
            = __Vdlyvval__top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs__v32;
    }
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
        = vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imem
        [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc 
                   >> 2U))];
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2 = 
        ((0U == (0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                          >> 0x14U))) ? 0U : vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs
         [(0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                    >> 0x14U))]);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd1 = 
        ((0U == (0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                          >> 0xfU))) ? 0U : vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs
         [(0x1fU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                    >> 0xfU))]);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode 
        = (0x7fU & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm = 
        ((0x40U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
          ? ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
              ? ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                  ? 0U : ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                           ? ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                               ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                   ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                       ? (((- (IData)(
                                                      (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                       >> 0x1fU))) 
                                           << 0x15U) 
                                          | ((0x100000U 
                                              & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction) 
                                                | ((0x800U 
                                                    & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                         >> 0x14U))))))
                                       : 0U) : 0U) : 0U)
                           : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                               ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                   ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                       ? (((- (IData)(
                                                      (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                             >> 0x14U))
                                       : 0U) : 0U) : 
                              ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                    ? (((- (IData)(
                                                   (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       ((0x1000U & 
                                         (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                    >> 7U))))))
                                    : 0U) : 0U)))) : 0U)
          : ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
              ? ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                  ? ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                      ? 0U : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                               ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                   ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                       ? (0xfffff000U 
                                          & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                       : 0U) : 0U) : 0U))
                  : ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                      ? 0U : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                               ? 0U : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                        ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                            ? (((- (IData)(
                                                           (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                        >> 7U))))
                                            : 0U) : 0U))))
              : ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                  ? ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                      ? 0U : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                               ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                   ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                       ? (0xfffff000U 
                                          & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                       : 0U) : 0U) : 
                              ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                    ? (((- (IData)(
                                                   (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                        >> 0x14U)) : 0U)
                                : 0U))) : ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                            ? 0U : 
                                           ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                     >> 0x14U))
                                                  : 0U)
                                              : 0U))))));
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT____VdfgTmp_h8a6dd295__0 
        = (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm 
           + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write = 0U;
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_write = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                                vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jal = 0U;
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__branch = 0U;
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jalr = 0U;
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl = 0U;
    if ((0x40U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                                vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write = 1U;
                                vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jal = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                            vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write = 1U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                                vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__branch = 1U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                                vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jalr = 1U;
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl = 0U;
            } else if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                        if ((1U & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode)))) {
                            vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl = 0U;
                        }
                    } else {
                        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl = 0U;
                    }
                } else {
                    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl = 0U;
                }
            } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                    if ((1U & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode)))) {
                        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl = 0U;
                    }
                } else {
                    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl = 0U;
                }
            } else {
                vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl 
                    = ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                        ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                            ? ((0x4000U & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                ? ((0x2000U & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                    ? ((0x1000U & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                        ? 0x18U : 0x17U)
                                    : ((0x1000U & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                        ? 0x16U : 0x15U))
                                : ((0x2000U & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                    ? 0x13U : ((0x1000U 
                                                & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                                ? 0x14U
                                                : 0x13U)))
                            : 0U) : 0U);
            }
        } else {
            vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                            vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write = 1U;
                    }
                }
            }
            vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl 
                = ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                    ? 0U : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                             ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                 ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                     ? 0x1bU : 0U) : 0U)
                             : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                 ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                     ? (((((((((0U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                       >> 0xcU)))) 
                                               | (0x100U 
                                                  == 
                                                  ((0x3f8U 
                                                    & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                         >> 0xcU))))) 
                                              | (7U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                        >> 0xcU))))) 
                                             | (6U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                       >> 0xcU))))) 
                                            | (4U == 
                                               ((0x3f8U 
                                                 & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                      >> 0xcU))))) 
                                           | (2U == 
                                              ((0x3f8U 
                                                & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                     >> 0xcU))))) 
                                          | (3U == 
                                             ((0x3f8U 
                                               & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                    >> 0xcU))))) 
                                         | (1U == (
                                                   (0x3f8U 
                                                    & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                         >> 0xcU)))))
                                         ? ((0U == 
                                             ((0x3f8U 
                                               & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                    >> 0xcU))))
                                             ? 0U : 
                                            ((0x100U 
                                              == ((0x3f8U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                        >> 0xcU))))
                                              ? 1U : 
                                             ((7U == 
                                               ((0x3f8U 
                                                 & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                      >> 0xcU))))
                                               ? 2U
                                               : ((6U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                          >> 0xcU))))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                           >> 0xcU))))
                                                    ? 4U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                            >> 0xcU))))
                                                     ? 5U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                             >> 0xcU))))
                                                      ? 6U
                                                      : 7U)))))))
                                         : ((5U == 
                                             ((0x3f8U 
                                               & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                    >> 0xcU))))
                                             ? 8U : 
                                            ((0x105U 
                                              == ((0x3f8U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                        >> 0xcU))))
                                              ? 9U : 0U)))
                                     : 0U) : 0U)));
        } else {
            vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl 
                = ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                    ? 0U : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                             ? 0U : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                      ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                          ? 0xaU : 0U)
                                      : 0U)));
        }
    } else if ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write = 1U;
                }
            }
        }
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl 
            = ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                ? 0U : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                         ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                             ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                 ? 0x1cU : 0U) : 0U)
                         : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                             ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                 ? ((0x4000U & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                     ? ((0x2000U & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                         ? ((0x1000U 
                                             & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                             ? 0xbU
                                             : 0xcU)
                                         : ((0x1000U 
                                             & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                             ? ((0U 
                                                 == 
                                                 (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction 
                                                  >> 0x19U))
                                                 ? 0x11U
                                                 : 0x12U)
                                             : 0xdU))
                                     : ((0x2000U & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                         ? ((0x1000U 
                                             & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                             ? 0xfU
                                             : 0xeU)
                                         : ((0x1000U 
                                             & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction)
                                             ? 0x10U
                                             : 0xaU)))
                                 : 0U) : 0U)));
    } else {
        if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write = 1U;
                    }
                }
            }
        }
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl 
            = ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                ? 0U : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                         ? 0U : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                  ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))
                                      ? 0xaU : 0U) : 0U)));
    }
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
        = ((0x1cU == (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
            ? vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc
            : vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd1);
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__2(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read) {
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read_data 
            = vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__dmem
            [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y 
                       >> 2U))];
    }
    if (vlSelf->__Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0) {
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__dmem[vlSelf->__Vdlyvdim0__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0] 
            = vlSelf->__Vdlyvval__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0;
    }
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__3(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read = 0U;
    if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode))) {
                                vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y 
        = ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
            ? ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                ? ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                    ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                        ? 0U : ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                                 ? 0U : (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                                         + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm)))
                    : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                        ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm
                            : 0U) : ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                                      ? 0U : ((vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                                               >= vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)
                                               ? 1U
                                               : 0U))))
                : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                    ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                        ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? ((vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                                < vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)
                                ? 1U : 0U) : (VL_GTES_III(32, vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1, vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)
                                               ? 1U
                                               : 0U))
                        : ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? (VL_LTS_III(32, vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1, vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)
                                ? 1U : 0U) : ((vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                                               != vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)
                                               ? 1U
                                               : 0U)))
                    : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                        ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? ((vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                                == vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)
                                ? 1U : 0U) : VL_SHIFTRS_III(32,32,5, vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1, 
                                                            (0x1fU 
                                                             & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm)))
                        : ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               >> (0x1fU & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm))
                            : (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               << (0x1fU & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm))))))
            : ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                ? ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                    ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                        ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? ((vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                                < vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm)
                                ? 1U : 0U) : (VL_LTS_III(32, vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1, vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm)
                                               ? 1U
                                               : 0U))
                        : ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               ^ vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm)
                            : (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               | vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm)))
                    : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                        ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm)
                            : (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm))
                        : ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? VL_SHIFTRS_III(32,32,5, vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1, 
                                             (0x1fU 
                                              & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2))
                            : (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               >> (0x1fU & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)))))
                : ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                    ? ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                        ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               << (0x1fU & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2))
                            : ((vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                                < vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)
                                ? 1U : 0U)) : ((1U 
                                                & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                                                ? (
                                                   VL_LTS_III(32, vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1, vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)
                                                    ? 1U
                                                    : 0U)
                                                : (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                                                   ^ vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)))
                    : ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                        ? ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               | vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)
                            : (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               & vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2))
                        : ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl))
                            ? (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               - vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2)
                            : (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 
                               + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2))))));
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc_next 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jalr)
            ? (0xfffffffcU & (vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm 
                              + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd1))
            : ((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jal)
                ? vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT____VdfgTmp_h8a6dd295__0
                : (((IData)(vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__branch) 
                    & (0U != vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y))
                    ? vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT____VdfgTmp_h8a6dd295__0
                    : ((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc))));
}

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vtop_tb___024root___timing_resume(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he9fa4b5b__0.resume("@(posedge top_tb.CLOCK_50)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop_tb___024root___timing_commit(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he9fa4b5b__0.commit("@(posedge top_tb.CLOCK_50)");
    }
}

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf);

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    Vtop_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_tb___024root___timing_resume(vlSelf);
        Vtop_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/top_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/top_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
