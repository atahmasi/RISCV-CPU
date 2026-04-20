// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
    // Body
    Vtop_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top_tb__DOT__CLOCK_50 = 0U;
    vlSelf->top_tb__DOT__KEY = 3U;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/top_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__rst = (1U & (~ (IData)(vlSelf->top_tb__DOT__KEY)));
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
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read = 0U;
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_write = 0U;
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

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top_tb.CLOCK_50)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge top_tb.CLOCK_50 or posedge top_tb.dut.rst)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top_tb.CLOCK_50)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge top_tb.CLOCK_50 or posedge top_tb.dut.rst)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top_tb__DOT__CLOCK_50 = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__KEY = VL_RAND_RESET_I(2);
    vlSelf->top_tb__DOT__dut__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__led_reg = VL_RAND_RESET_I(10);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__debug_x1 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__pc_next = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_ctrl = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rd2 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_y = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__alu_in1 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT____VdfgTmp_h8a6dd295__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__dut__DOT__cpu0__DOT__rf__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0 = 0;
    vlSelf->__Vdlyvval__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top_tb__DOT__dut__DOT__cpu0__DOT__dmem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__CLOCK_50__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__dut__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
