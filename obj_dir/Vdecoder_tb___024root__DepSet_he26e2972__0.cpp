// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder_tb.h for the primary calling header

#include "Vdecoder_tb__pch.h"
#include "Vdecoder_tb___024root.h"

VlCoroutine Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0(Vdecoder_tb___024root* vlSelf);

void Vdecoder_tb___024root___eval_initial(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT void Vdecoder_tb___024root___act_sequent__TOP__0(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->decoder_tb__DOT__rd = (0x1fU & (vlSelf->decoder_tb__DOT__instruction 
                                            >> 7U));
    vlSelf->decoder_tb__DOT__funct3 = (7U & (vlSelf->decoder_tb__DOT__instruction 
                                             >> 0xcU));
    vlSelf->decoder_tb__DOT__rs1 = (0x1fU & (vlSelf->decoder_tb__DOT__instruction 
                                             >> 0xfU));
    vlSelf->decoder_tb__DOT__rs2 = (0x1fU & (vlSelf->decoder_tb__DOT__instruction 
                                             >> 0x14U));
    vlSelf->decoder_tb__DOT__funct7 = (vlSelf->decoder_tb__DOT__instruction 
                                       >> 0x19U);
    vlSelf->decoder_tb__DOT__opcode = (0x7fU & vlSelf->decoder_tb__DOT__instruction);
    vlSelf->decoder_tb__DOT__imm = ((0x40U & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                     ? ((0x20U & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                         ? ((0x10U 
                                             & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                             ? 0U : 
                                            ((8U & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                              ? ((4U 
                                                  & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->decoder_tb__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0x15U) 
                                                    | ((0x100000U 
                                                        & (vlSelf->decoder_tb__DOT__instruction 
                                                           >> 0xbU)) 
                                                       | ((0xff000U 
                                                           & vlSelf->decoder_tb__DOT__instruction) 
                                                          | ((0x800U 
                                                              & (vlSelf->decoder_tb__DOT__instruction 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->decoder_tb__DOT__instruction 
                                                                   >> 0x14U))))))
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)
                                              : ((4U 
                                                  & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->decoder_tb__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->decoder_tb__DOT__instruction 
                                                       >> 0x14U))
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->decoder_tb__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xdU) 
                                                    | ((0x1000U 
                                                        & (vlSelf->decoder_tb__DOT__instruction 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->decoder_tb__DOT__instruction 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->decoder_tb__DOT__instruction 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->decoder_tb__DOT__instruction 
                                                                   >> 7U))))))
                                                    : 0U)
                                                   : 0U))))
                                         : 0U) : ((0x20U 
                                                   & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelf->decoder_tb__DOT__instruction)
                                                        : 0U)
                                                       : 0U)
                                                      : 0U))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->decoder_tb__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0xfe0U 
                                                            & (vlSelf->decoder_tb__DOT__instruction 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelf->decoder_tb__DOT__instruction 
                                                                 >> 7U))))
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelf->decoder_tb__DOT__instruction)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->decoder_tb__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->decoder_tb__DOT__instruction 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->decoder_tb__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->decoder_tb__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->decoder_tb__DOT__instruction 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U))))));
}

void Vdecoder_tb___024root___eval_act(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vdecoder_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vdecoder_tb___024root___eval_nba(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdecoder_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vdecoder_tb___024root___timing_resume(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vdecoder_tb___024root___eval_triggers__act(Vdecoder_tb___024root* vlSelf);

bool Vdecoder_tb___024root___eval_phase__act(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdecoder_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdecoder_tb___024root___timing_resume(vlSelf);
        Vdecoder_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdecoder_tb___024root___eval_phase__nba(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdecoder_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__nba(Vdecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__act(Vdecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecoder_tb___024root___eval(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdecoder_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/decoder_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdecoder_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/decoder_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdecoder_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdecoder_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdecoder_tb___024root___eval_debug_assertions(Vdecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
