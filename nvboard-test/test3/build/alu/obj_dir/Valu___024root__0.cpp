// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

void Valu___024root___eval_sample(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_sample\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Valu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

bool Valu___024root___eval_ico(Valu___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.instr) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__instr__0)) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.b) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__b__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.a) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__a__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__a__0 = vlSelfRef.a;
        vlSelfRef.__Vtrigprevexpr___TOP__b__0 = vlSelfRef.b;
        vlSelfRef.__Vtrigprevexpr___TOP__instr__0 = vlSelfRef.instr;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Valu___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((4ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.alu__DOT__sub_en = ((1U 
                                                   == (IData)(vlSelfRef.instr)) 
                                                  | ((6U 
                                                      == (IData)(vlSelfRef.instr)) 
                                                     | (7U 
                                                        == (IData)(vlSelfRef.instr))));
                }
            }
            if ((7ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    CData/*3:0*/ __Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0_alu__DOT__arith_result;
                    __Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0_alu__DOT__arith_result = 0;
                    CData/*0:0*/ __Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0___VdfgRegularize_h6e95ff9d_0_0;
                    __Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0___VdfgRegularize_h6e95ff9d_0_0 = 0;
                    __Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0_alu__DOT__arith_result 
                        = (0x0000000fU & ((IData)(vlSelfRef.a) 
                                          + ((IData)(vlSelfRef.alu__DOT__sub_en)
                                              ? ((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelfRef.b)))
                                              : (IData)(vlSelfRef.b))));
                    vlSelfRef.cmp_equal = (IData)((
                                                   (7U 
                                                    == (IData)(vlSelfRef.instr)) 
                                                   & (0U 
                                                      == __Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0_alu__DOT__arith_result)));
                    vlSelfRef.alu_result = (0x0000000fU 
                                            & ((4U 
                                                & (IData)(vlSelfRef.instr))
                                                ? (
                                                   ((1U 
                                                     & (IData)(vlSelfRef.instr))
                                                     ? 
                                                    ((IData)(vlSelfRef.a) 
                                                     ^ (IData)(vlSelfRef.b))
                                                     : 
                                                    ((IData)(vlSelfRef.a) 
                                                     | (IData)(vlSelfRef.b))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.instr) 
                                                                     >> 1U))))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.instr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.instr))
                                                     ? 
                                                    ((IData)(vlSelfRef.a) 
                                                     & (IData)(vlSelfRef.b))
                                                     : 
                                                    (~ (IData)(vlSelfRef.a)))
                                                    : __Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0_alu__DOT__arith_result)));
                    __Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
                        = ((1U & (__Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0_alu__DOT__arith_result 
                                  >> 3U)) != (1U & 
                                              ((IData)(vlSelfRef.a) 
                                               >> 3U)));
                    vlSelfRef.cmp_less = (IData)(((6U 
                                                   == (IData)(vlSelfRef.instr)) 
                                                  & ((__Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0_alu__DOT__arith_result 
                                                      >> 3U) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__sub_en)
                                                       ? 
                                                      (((1U 
                                                         & ((IData)(vlSelfRef.a) 
                                                            >> 3U)) 
                                                        != 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.b) 
                                                            >> 3U))) 
                                                       & __Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0___VdfgRegularize_h6e95ff9d_0_0)
                                                       : 
                                                      (__Vinline_0__eval_body__ico___Vinline_0__ico_comb__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
                                                       & ((1U 
                                                           & ((IData)(vlSelfRef.a) 
                                                              >> 3U)) 
                                                          == 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.b) 
                                                              >> 3U))))))));
                }
            }
        }
    }
    return (__VicoExecute);
}

bool Valu___024root___eval_act(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Valu___024root___eval_inact(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_inact\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Valu___024root___eval_nba(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Valu___024root___eval_obs(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_obs\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Valu___024root___eval_react(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_react\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Valu___024root___eval_postponed(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_postponed\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Valu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xf0U)))) {
        Verilated::overWidthError("a");
    }
    if (VL_UNLIKELY(((vlSelfRef.b & 0xf0U)))) {
        Verilated::overWidthError("b");
    }
    if (VL_UNLIKELY(((vlSelfRef.instr & 0xf8U)))) {
        Verilated::overWidthError("instr");
    }
}
#endif  // VL_DEBUG
