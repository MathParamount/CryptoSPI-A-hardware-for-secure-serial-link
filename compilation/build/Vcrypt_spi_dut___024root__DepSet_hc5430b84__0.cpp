// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrypt_spi_dut.h for the primary calling header

#include "Vcrypt_spi_dut__pch.h"
#include "Vcrypt_spi_dut___024root.h"

VL_INLINE_OPT void Vcrypt_spi_dut___024root___ico_sequent__TOP__0(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->lfsr_cipher = vlSelf->master_data;
}

void Vcrypt_spi_dut___024root___eval_ico(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vcrypt_spi_dut___024root___eval_triggers__ico(Vcrypt_spi_dut___024root* vlSelf);

bool Vcrypt_spi_dut___024root___eval_phase__ico(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcrypt_spi_dut___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vcrypt_spi_dut___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcrypt_spi_dut___024root___eval_act(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__1(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
        = vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev 
        = vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__2(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_comb__TOP__0(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block 
        = ((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count) 
           == ((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks) 
               - (IData)(1U)));
}

void Vcrypt_spi_dut___024root___nba_sequent__TOP__0(Vcrypt_spi_dut___024root* vlSelf);
void Vcrypt_spi_dut___024root___nba_sequent__TOP__3(Vcrypt_spi_dut___024root* vlSelf);
void Vcrypt_spi_dut___024root___nba_sequent__TOP__4(Vcrypt_spi_dut___024root* vlSelf);
void Vcrypt_spi_dut___024root___nba_sequent__TOP__5(Vcrypt_spi_dut___024root* vlSelf);
void Vcrypt_spi_dut___024root___nba_sequent__TOP__6(Vcrypt_spi_dut___024root* vlSelf);
void Vcrypt_spi_dut___024root___nba_sequent__TOP__7(Vcrypt_spi_dut___024root* vlSelf);
void Vcrypt_spi_dut___024root___nba_sequent__TOP__8(Vcrypt_spi_dut___024root* vlSelf);
void Vcrypt_spi_dut___024root___nba_comb__TOP__1(Vcrypt_spi_dut___024root* vlSelf);

void Vcrypt_spi_dut___024root___eval_nba(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x12ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vcrypt_spi_dut___024root___eval_triggers__act(Vcrypt_spi_dut___024root* vlSelf);

bool Vcrypt_spi_dut___024root___eval_phase__act(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcrypt_spi_dut___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcrypt_spi_dut___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcrypt_spi_dut___024root___eval_phase__nba(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcrypt_spi_dut___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__ico(Vcrypt_spi_dut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__nba(Vcrypt_spi_dut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__act(Vcrypt_spi_dut___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrypt_spi_dut___024root___eval(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval\n"); );
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
            Vcrypt_spi_dut___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../pkg/../testbench/wrapper/crypt_spi_dut.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcrypt_spi_dut___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcrypt_spi_dut___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../pkg/../testbench/wrapper/crypt_spi_dut.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcrypt_spi_dut___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../pkg/../testbench/wrapper/crypt_spi_dut.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcrypt_spi_dut___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcrypt_spi_dut___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcrypt_spi_dut___024root___eval_debug_assertions(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
