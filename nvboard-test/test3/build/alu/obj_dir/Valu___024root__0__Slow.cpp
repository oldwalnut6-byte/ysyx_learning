// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

VL_ATTR_COLD void Valu___024root___eval_static(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_static\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__a__0 = vlSelfRef.a;
    vlSelfRef.__Vtrigprevexpr___TOP__b__0 = vlSelfRef.b;
    vlSelfRef.__Vtrigprevexpr___TOP__instr__0 = vlSelfRef.instr;
}

VL_ATTR_COLD void Valu___024root___eval_initial(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_initial\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Valu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Valu___024root___eval_stl(Valu___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_stl\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Valu___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    CData/*3:0*/ __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_alu__DOT__arith_result;
                    __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_alu__DOT__arith_result = 0;
                    CData/*0:0*/ __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0;
                    __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 = 0;
                    vlSelfRef.alu__DOT__sub_en = ((1U 
                                                   == (IData)(vlSelfRef.instr)) 
                                                  | ((6U 
                                                      == (IData)(vlSelfRef.instr)) 
                                                     | (7U 
                                                        == (IData)(vlSelfRef.instr))));
                    __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_alu__DOT__arith_result 
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
                                                      == __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_alu__DOT__arith_result)));
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
                                                    : __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_alu__DOT__arith_result)));
                    __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
                        = ((1U & (__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_alu__DOT__arith_result 
                                  >> 3U)) != (1U & 
                                              ((IData)(vlSelfRef.a) 
                                               >> 3U)));
                    vlSelfRef.cmp_less = (IData)(((6U 
                                                   == (IData)(vlSelfRef.instr)) 
                                                  & ((__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_alu__DOT__arith_result 
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
                                                       & __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0)
                                                       : 
                                                      (__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
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
    return (__VstlExecute);
}

VL_ATTR_COLD void Valu___024root___eval_dump_triggers__stl(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_dump_triggers__stl\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Valu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu___024root___eval_dump_triggers__ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_dump_triggers__ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Valu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

VL_ATTR_COLD void Valu___024root___eval_dump_triggers__act(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_dump_triggers__act\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Valu___024root___eval_dump_triggers__nba(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_dump_triggers__nba\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Valu___024root___eval_dump_triggers__obs(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_dump_triggers__obs\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Valu___024root___eval_dump_triggers__react(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_dump_triggers__react\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Valu___024root___eval_final(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_final\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Valu___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Valu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Valu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Valu___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( instr)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu___024root___ctor_var_reset(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ctor_var_reset\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 510903276987443985ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16900879642891266615ull);
    vlSelf->instr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 682939282188807998ull);
    vlSelf->alu_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15326351562492354909ull);
    vlSelf->cmp_less = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900133786787541257ull);
    vlSelf->cmp_equal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2044181293016985582ull);
    vlSelf->alu__DOT__sub_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10816774328846168578ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__instr__0 = 0;
    vlSelf->__VicoDidInit = 0;
}
