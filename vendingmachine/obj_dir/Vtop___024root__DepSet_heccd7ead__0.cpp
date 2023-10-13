// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__p_state = vlSelf->top__DOT__dut__DOT__n_state;
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hf902a968_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_hdcd1a8e7_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_he9b42624_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_h7096b44f_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->quarter_i) << 4U) 
                    | (((IData)(vlSelf->dime_i) << 3U) 
                       | (((IData)(vlSelf->nickel_i) 
                           << 2U) | (IData)(vlSelf->top__DOT__dut__DOT__p_state))));
    vlSelf->soda_o = Vtop__ConstPool__TABLE_hf902a968_0
        [__Vtableidx1];
    vlSelf->change_o = Vtop__ConstPool__TABLE_hdcd1a8e7_0
        [__Vtableidx1];
    if ((4U & Vtop__ConstPool__TABLE_he9b42624_0[__Vtableidx1])) {
        vlSelf->top__DOT__dut__DOT__n_state = Vtop__ConstPool__TABLE_h7096b44f_0
            [__Vtableidx1];
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->nickel_i & 0xfeU))) {
        Verilated::overWidthError("nickel_i");}
    if (VL_UNLIKELY((vlSelf->dime_i & 0xfeU))) {
        Verilated::overWidthError("dime_i");}
    if (VL_UNLIKELY((vlSelf->quarter_i & 0xfeU))) {
        Verilated::overWidthError("quarter_i");}
}
#endif  // VL_DEBUG
