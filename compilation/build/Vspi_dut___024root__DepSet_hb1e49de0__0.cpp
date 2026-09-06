// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_dut.h for the primary calling header

#include "Vspi_dut__pch.h"
#include "Vspi_dut___024root.h"

void Vspi_dut___024root___ico_sequent__TOP__0(Vspi_dut___024root* vlSelf);

void Vspi_dut___024root___eval_ico(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vspi_dut___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vspi_dut___024root___eval_triggers__ico(Vspi_dut___024root* vlSelf);

bool Vspi_dut___024root___eval_phase__ico(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vspi_dut___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vspi_dut___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vspi_dut___024root___eval_act(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_act\n"); );
}

void Vspi_dut___024root___nba_sequent__TOP__0(Vspi_dut___024root* vlSelf);
void Vspi_dut___024root___nba_sequent__TOP__1(Vspi_dut___024root* vlSelf);
void Vspi_dut___024root___nba_sequent__TOP__2(Vspi_dut___024root* vlSelf);

void Vspi_dut___024root___eval_nba(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_dut___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_dut___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_dut___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_dut___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vspi_dut___024root___eval_triggers__act(Vspi_dut___024root* vlSelf);

bool Vspi_dut___024root___eval_phase__act(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vspi_dut___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vspi_dut___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vspi_dut___024root___eval_phase__nba(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vspi_dut___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_dut___024root___dump_triggers__ico(Vspi_dut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_dut___024root___dump_triggers__nba(Vspi_dut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_dut___024root___dump_triggers__act(Vspi_dut___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_dut___024root___eval(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vspi_dut___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../pkg/../testbench/wrapper/spi_dut.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vspi_dut___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vspi_dut___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../pkg/../testbench/wrapper/spi_dut.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vspi_dut___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../pkg/../testbench/wrapper/spi_dut.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vspi_dut___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vspi_dut___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vspi_dut___024root___eval_debug_assertions(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
