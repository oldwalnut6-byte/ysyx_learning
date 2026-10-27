// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VL_READMEM_N(true, 24, 524288, 0, "/home/walnut_linux/ysyx-workbench/nvboard-test/test8/resource/ysyx_picture.hex"s
                     ,  &(vlSelfRef.top__DOT__my_vmem__DOT__vga_mem)
                     , 0, ~0ULL);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vtop___024root___eval_stl(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    CData/*0:0*/ __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid;
                    __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid = 0;
                    CData/*0:0*/ __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid;
                    __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid = 0;
                    vlSelfRef.VGA_HSYNC = (0x0060U 
                                           < (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt));
                    vlSelfRef.VGA_VSYNC = (2U < (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt));
                    __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid 
                        = ((0x0090U < (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                           & (0x0310U >= (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt)));
                    __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid 
                        = ((0x0023U < (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                           & (0x0203U >= (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt)));
                    vlSelfRef.VGA_BLANK_N = (__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid 
                                             & __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid);
                    vlSelfRef.VGA_R = (0x000000ffU 
                                       & (vlSelfRef.top__DOT__my_vmem__DOT__vga_mem
                                          [((0x0007fe00U 
                                             & ((((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                                  - (IData)(0x0091U)) 
                                                 & (- (IData)(__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid))) 
                                                << 9U)) 
                                            | (0x000001ffU 
                                               & (((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                                   - (IData)(0x0024U)) 
                                                  & (- (IData)(__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid)))))] 
                                          >> 0x00000010U));
                    vlSelfRef.VGA_G = (0x000000ffU 
                                       & (vlSelfRef.top__DOT__my_vmem__DOT__vga_mem
                                          [((0x0007fe00U 
                                             & ((((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                                  - (IData)(0x0091U)) 
                                                 & (- (IData)(__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid))) 
                                                << 9U)) 
                                            | (0x000001ffU 
                                               & (((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                                   - (IData)(0x0024U)) 
                                                  & (- (IData)(__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid)))))] 
                                          >> 8U));
                    vlSelfRef.VGA_B = (0x000000ffU 
                                       & vlSelfRef.top__DOT__my_vmem__DOT__vga_mem
                                       [((0x0007fe00U 
                                          & ((((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                               - (IData)(0x0091U)) 
                                              & (- (IData)(__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid))) 
                                             << 9U)) 
                                         | (0x000001ffU 
                                            & (((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                                - (IData)(0x0024U)) 
                                               & (- (IData)(__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid)))))]);
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->VGA_HSYNC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1085272180465251897ull);
    vlSelf->VGA_VSYNC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1001503147665162868ull);
    vlSelf->VGA_BLANK_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4207106729344237849ull);
    vlSelf->VGA_R = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8713651417395270250ull);
    vlSelf->VGA_G = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2930052969200674513ull);
    vlSelf->VGA_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18057832749456581997ull);
    for (int __Vi0 = 0; __Vi0 < 524288; ++__Vi0) {
        vlSelf->top__DOT__my_vmem__DOT__vga_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6581461661214203982ull);
    }
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15257341708709622794ull);
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 814388372568196479ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
