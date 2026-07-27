// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrypt_spi_dut.h for the primary calling header

#include "Vcrypt_spi_dut__pch.h"
#include "Vcrypt_spi_dut__Syms.h"
#include "Vcrypt_spi_dut___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__ico(Vcrypt_spi_dut___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrypt_spi_dut___024root___eval_triggers__ico(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcrypt_spi_dut___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__act(Vcrypt_spi_dut___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrypt_spi_dut___024root___eval_triggers__act(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->reset_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset_n__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0))));
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0)));
    vlSelf->__VactTriggered.set(4U, (((~ (IData)(vlSelf->reset_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset_n__0)) 
                                     | ((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = vlSelf->reset_n;
    vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcrypt_spi_dut___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__0(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count = 0;
    QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx = 0;
    // Body
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
        = vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count 
        = vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count;
    if (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss) {
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count = 0U;
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx = 0ULL;
    } else {
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
            = ((vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
                << 1U) | (QData)((IData)((1U & (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted)))));
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count)));
        if (VL_UNLIKELY((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count)))) {
            VL_WRITEF("SLAVE: data_received=0x%04x\n",
                      64,vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx);
            __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count = 0U;
        }
    }
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count 
        = __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count;
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
        = __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__3(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__state;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__ss 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__4(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__4\n"); );
    // Init
    SData/*15:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count;
    __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count = 0;
    // Body
    __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count;
    if ((0U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
        __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count = 0U;
    } else if (VL_UNLIKELY(((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready) 
                            & (4U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))))) {
        __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count)));
        VL_WRITEF("block_count  value: %5#\n",16,vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count);
    }
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count 
        = __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__5(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->reset_n) {
        vlSelf->debug_state = vlSelf->crypt_spi_dut__DOT__u_master__DOT__state;
        if (vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en) {
            if ((0x63ULL == vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div)) {
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck 
                    = (1U & (~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
            } else {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div 
                    = (1ULL + vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div);
            }
        } else {
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
        }
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev 
            = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
        if ((4U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
            if ((2U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 0U;
            } else if (VL_UNLIKELY((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state)))) {
                VL_WRITEF("[MASTER] Entering DONE, done_flag=%b\n",
                          2,vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt);
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__ss = 1U;
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi = 0U;
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.data_received 
                    = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                if (VL_UNLIKELY((0U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt)))) {
                    VL_WRITEF("  -> mantendo done (cnt=0->1)\n");
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt = 1U;
                } else if (VL_UNLIKELY((1U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt)))) {
                    VL_WRITEF("  -> mantendo done (cnt=1->2)\n");
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt = 2U;
                } else if (VL_UNLIKELY((2U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt)))) {
                    VL_WRITEF("DEBUG DONE: done cleared, going to IDLE\n");
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 0U;
                }
            } else if (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done) {
                vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 0U;
                if (vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 5U;
                } else {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx = 0ULL;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 2U;
                    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
            if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
                if (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                     & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev)))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                        = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                            << 1U) | (QData)((IData)(
                                                     (1U 
                                                      & (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted)))));
                }
                if (((~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)) 
                     & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi 
                        = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                                         >> 0x3fU)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                        = (vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                           << 1U);
                }
                if (VL_UNLIKELY((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)))) {
                    VL_WRITEF("DEBUG DRAIN DONE: data_received=0x%016x\n",
                              64,vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx);
                    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 0U;
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 4U;
                }
            } else {
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__ss = 0U;
                if (VL_UNLIKELY(((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                                 & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev))))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                        = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                            << 1U) | (QData)((IData)(
                                                     (1U 
                                                      & (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted)))));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                    VL_WRITEF("DEBUG FILL: bit_count=%3#, mosi=%b, miso=%b, sr_rx=0x%016x\n",
                              7,vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count,
                              1,(IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi),
                              1,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso,
                              64,vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx);
                }
                if (((~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)) 
                     & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi 
                        = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                                         >> 0x3fU)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                        = (vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                           << 1U);
                }
                if ((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__ss = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 4U;
                }
            }
        } else if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__ss = 0U;
            if (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                 & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev)))) {
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi 
                    = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr 
                                     >> (0x3fU & ((IData)(0x3fU) 
                                                  - (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count))))));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                    = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                        << 1U) | (QData)((IData)((1U 
                                                  & (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted)))));
                if ((7U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg 
                        = (QData)((IData)((((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx) 
                                            << 1U) 
                                           | (1U & (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted)))));
                    if ((1U & (IData)(vlSelf->master_data))) {
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx = 0ULL;
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 3U;
                    } else {
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                            = vlSelf->master_data;
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 2U;
                    }
                } else {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                }
            }
        } else {
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__ss = 1U;
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi = 0U;
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt = 0U;
            if (VL_UNLIKELY(vlSelf->start)) {
                VL_WRITEF("[MASTER] Start transmission, data=0x%016x\n",
                          64,vlSelf->master_data);
                vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr 
                    = vlSelf->master_data;
                vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 1U;
            }
        }
    } else {
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.data_received = 0ULL;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__ss = 1U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg = 0ULL;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 0U;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 0U;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks = 8U;
    }
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__state 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck;
    vlSelf->sck = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
    vlSelf->data_received = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.data_received;
    vlSelf->done = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done;
    vlSelf->block_ready = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__6(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__6\n"); );
    // Body
    if (vlSelf->reset_n) {
        vlSelf->__Vdly__debug_state_crypt = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_mast;
        if ((4U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
            if ((2U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 0U;
            } else if (VL_LIKELY((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr)))) {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 0U;
            } else {
                VL_WRITEF("CRYPTO DONE: data storaged = 0x%016x\n",
                          64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text);
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done = 1U;
                if (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
            if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
                VL_WRITEF("send: 0x%04x to slaver\nsend: 0x%04x to slaver\n",
                          64,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted,
                          64,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted);
                vlSelf->__Vdly__debug_state_crypt = 0U;
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted 
                    = (QData)((IData)((1U & (IData)(
                                                    (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x3fU) 
                                                         - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))))))));
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted 
                    = (QData)((IData)((1U & (IData)(
                                                    (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x3fU) 
                                                         - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))))))));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)));
                if ((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 4U;
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done = 0U;
                }
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done = 0U;
            } else {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                        << 1U) | (QData)((IData)((1U 
                                                  & VL_REDXOR_64(
                                                                 (0x8000080200400801ULL 
                                                                  & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count)));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                        << 1U) | (QData)((IData)((1U 
                                                  & VL_REDXOR_64(
                                                                 (0x8000080200400801ULL 
                                                                  & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx))))));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m 
                        << 1U) | (QData)((IData)((1U 
                                                  & VL_REDXOR_64(
                                                                 (0xc080000000400801ULL 
                                                                  & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
                if ((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 3U;
                }
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s 
                        << 1U) | (QData)((IData)((1U 
                                                  & VL_REDXOR_64(
                                                                 (0xc080000000400801ULL 
                                                                  & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx))))));
                VL_WRITEF("plain_text: 0x%04x , slave_rx: 0x%04x\n",
                          64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text,
                          64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx);
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text 
                    = ((2U == (IData)(vlSelf->debug_state_crypt))
                        ? (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                           ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m)
                        : (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                           ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s));
            }
        } else if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss)))) {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                        << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi)));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                        << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso)));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)));
                if ((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 2U;
                }
            }
        } else {
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss)))) {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 1U;
            }
        }
    } else {
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 0U;
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_mast = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m = 1ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s = 0x8000000000000000ULL;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.nonce = 1ULL;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
    }
    vlSelf->debug_state_crypt = vlSelf->__Vdly__debug_state_crypt;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s;
    vlSelf->crypto_done = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done;
    vlSelf->mosi_encrypted = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted;
    vlSelf->miso_encrypted = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted;
    vlSelf->nonce = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.nonce;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__7(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi;
    vlSelf->mosi = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__8(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__8\n"); );
    // Body
    if (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss) {
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev = 1U;
    } else if (vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev) {
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
            = vlSelf->master_data;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev = 0U;
    } else {
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso 
            = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
                             >> 0x3fU)));
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
            = (vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
               << 1U);
    }
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev;
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx;
    vlSelf->miso = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__9(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__ss;
    vlSelf->ss = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss;
}
