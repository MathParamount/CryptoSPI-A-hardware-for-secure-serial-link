// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_dut.h for the primary calling header

#include "Vspi_dut__pch.h"
#include "Vspi_dut___024root.h"

VL_ATTR_COLD void Vspi_dut___024root___eval_static__TOP(Vspi_dut___024root* vlSelf);

VL_ATTR_COLD void Vspi_dut___024root___eval_static(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_static\n"); );
    // Body
    Vspi_dut___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vspi_dut___024root___eval_static__TOP(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->spi_dut__DOT__u_master__DOT__count = 0U;
}

VL_ATTR_COLD void Vspi_dut___024root___eval_final(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_dut___024root___dump_triggers__stl(Vspi_dut___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vspi_dut___024root___eval_phase__stl(Vspi_dut___024root* vlSelf);

VL_ATTR_COLD void Vspi_dut___024root___eval_settle(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_settle\n"); );
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
            Vspi_dut___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../pkg/../testbench/wrapper/spi_dut.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vspi_dut___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_dut___024root___dump_triggers__stl(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_dut___024root___stl_sequent__TOP__0(Vspi_dut___024root* vlSelf);

VL_ATTR_COLD void Vspi_dut___024root___eval_stl(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vspi_dut___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vspi_dut___024root___eval_triggers__stl(Vspi_dut___024root* vlSelf);

VL_ATTR_COLD bool Vspi_dut___024root___eval_phase__stl(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vspi_dut___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vspi_dut___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_dut___024root___dump_triggers__act(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge spi_dut.sc_interface.sck)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_dut___024root___dump_triggers__nba(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge spi_dut.sc_interface.sck)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_dut___024root___ctor_var_reset(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->data_to_send = VL_RAND_RESET_I(16);
    vlSelf->miso = VL_RAND_RESET_I(1);
    vlSelf->sck = VL_RAND_RESET_I(1);
    vlSelf->ss = VL_RAND_RESET_I(1);
    vlSelf->data_received = VL_RAND_RESET_I(16);
    vlSelf->mosi = VL_RAND_RESET_I(1);
    vlSelf->spi_dut__DOT__u_master__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->spi_dut__DOT__u_master__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->spi_dut__DOT__u_master__DOT__count = 0;
    vlSelf->spi_dut__DOT__u_master__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->spi_dut__DOT__u_master__DOT__sr = VL_RAND_RESET_I(15);
    vlSelf->spi_dut__DOT__u_master__DOT__bit_count = VL_RAND_RESET_I(3);
    vlSelf->spi_dut__DOT__u_master__DOT__sck_div = VL_RAND_RESET_I(2);
    vlSelf->spi_dut__DOT__u_slaver__DOT__tx_buffer = VL_RAND_RESET_I(16);
    vlSelf->spi_dut__DOT__u_slaver__DOT__sr = VL_RAND_RESET_I(15);
    vlSelf->spi_dut__DOT__u_slaver__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__spi_dut__DOT__sc_interface__sck__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
