// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_dut.h for the primary calling header

#include "Vspi_dut__pch.h"
#include "Vspi_dut__Syms.h"
#include "Vspi_dut___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_dut___024root___dump_triggers__act(Vspi_dut___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_dut___024root___eval_triggers__act(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_dut__DOT__spi_if__sck__0))) 
                                     | ((IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.ss) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_dut__DOT__spi_if__ss__0)))));
    vlSelf->__VactTriggered.set(2U, (((~ (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_dut__DOT__spi_if__sck__0)) 
                                     | ((IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.ss) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_dut__DOT__spi_if__ss__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__spi_dut__DOT__spi_if__sck__0 
        = vlSymsp->TOP__spi_dut__DOT__spi_if.sck;
    vlSelf->__Vtrigprevexpr___TOP__spi_dut__DOT__spi_if__ss__0 
        = vlSymsp->TOP__spi_dut__DOT__spi_if.ss;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_dut___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vspi_dut___024root___nba_sequent__TOP__0(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__debug_state = vlSelf->debug_state;
    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sck_prev 
        = vlSelf->spi_dut__DOT__u_master__DOT__sck_prev;
    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_rx 
        = vlSelf->spi_dut__DOT__u_master__DOT__sr_rx;
    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_tx 
        = vlSelf->spi_dut__DOT__u_master__DOT__sr_tx;
    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr 
        = vlSelf->spi_dut__DOT__u_master__DOT__sr;
    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__cmd_reg 
        = vlSelf->spi_dut__DOT__u_master__DOT__cmd_reg;
    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__bit_count 
        = vlSelf->spi_dut__DOT__u_master__DOT__bit_count;
    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sck_div 
        = vlSelf->spi_dut__DOT__u_master__DOT__sck_div;
    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__state 
        = vlSelf->spi_dut__DOT__u_master__DOT__state;
    vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__done 
        = vlSymsp->TOP__spi_dut__DOT__spi_if.done;
    vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__sck 
        = vlSymsp->TOP__spi_dut__DOT__spi_if.sck;
    vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi 
        = vlSymsp->TOP__spi_dut__DOT__spi_if.mosi;
}

VL_INLINE_OPT void Vspi_dut___024root___nba_sequent__TOP__1(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vdly__spi_dut__DOT__u_slave__DOT__bit_count;
    __Vdly__spi_dut__DOT__u_slave__DOT__bit_count = 0;
    SData/*15:0*/ __Vdly__spi_dut__DOT__u_slave__DOT__sr_rx;
    __Vdly__spi_dut__DOT__u_slave__DOT__sr_rx = 0;
    // Body
    __Vdly__spi_dut__DOT__u_slave__DOT__sr_rx = vlSelf->spi_dut__DOT__u_slave__DOT__sr_rx;
    __Vdly__spi_dut__DOT__u_slave__DOT__bit_count = vlSelf->spi_dut__DOT__u_slave__DOT__bit_count;
    if (vlSymsp->TOP__spi_dut__DOT__spi_if.ss) {
        __Vdly__spi_dut__DOT__u_slave__DOT__bit_count = 0U;
        __Vdly__spi_dut__DOT__u_slave__DOT__sr_rx = 0U;
    } else {
        __Vdly__spi_dut__DOT__u_slave__DOT__sr_rx = 
            ((0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_slave__DOT__sr_rx) 
                         << 1U)) | (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.mosi));
        __Vdly__spi_dut__DOT__u_slave__DOT__bit_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_slave__DOT__bit_count)));
        if (VL_UNLIKELY((0xfU == (IData)(vlSelf->spi_dut__DOT__u_slave__DOT__bit_count)))) {
            VL_WRITEF("SLAVE: data_received=0x%04x\n",
                      16,vlSelf->spi_dut__DOT__u_slave__DOT__sr_rx);
            __Vdly__spi_dut__DOT__u_slave__DOT__bit_count = 0U;
        }
    }
    vlSelf->spi_dut__DOT__u_slave__DOT__bit_count = __Vdly__spi_dut__DOT__u_slave__DOT__bit_count;
    vlSelf->spi_dut__DOT__u_slave__DOT__sr_rx = __Vdly__spi_dut__DOT__u_slave__DOT__sr_rx;
}

VL_INLINE_OPT void Vspi_dut___024root___nba_sequent__TOP__2(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ __Vdly__spi_dut__DOT__u_slave__DOT__ss_prev;
    __Vdly__spi_dut__DOT__u_slave__DOT__ss_prev = 0;
    SData/*15:0*/ __Vdly__spi_dut__DOT__u_slave__DOT__sr_tx;
    __Vdly__spi_dut__DOT__u_slave__DOT__sr_tx = 0;
    // Body
    __Vdly__spi_dut__DOT__u_slave__DOT__sr_tx = vlSelf->spi_dut__DOT__u_slave__DOT__sr_tx;
    __Vdly__spi_dut__DOT__u_slave__DOT__ss_prev = vlSelf->spi_dut__DOT__u_slave__DOT__ss_prev;
    vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__miso 
        = vlSymsp->TOP__spi_dut__DOT__spi_if.miso;
    if (vlSymsp->TOP__spi_dut__DOT__spi_if.ss) {
        vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__miso = 0U;
        __Vdly__spi_dut__DOT__u_slave__DOT__ss_prev = 1U;
    } else if (vlSelf->spi_dut__DOT__u_slave__DOT__ss_prev) {
        __Vdly__spi_dut__DOT__u_slave__DOT__sr_tx = vlSelf->master_data;
        __Vdly__spi_dut__DOT__u_slave__DOT__ss_prev = 0U;
    } else {
        vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__miso 
            = (1U & ((IData)(vlSelf->spi_dut__DOT__u_slave__DOT__sr_tx) 
                     >> 0xfU));
        __Vdly__spi_dut__DOT__u_slave__DOT__sr_tx = 
            (0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_slave__DOT__sr_tx) 
                        << 1U));
    }
    vlSelf->spi_dut__DOT__u_slave__DOT__ss_prev = __Vdly__spi_dut__DOT__u_slave__DOT__ss_prev;
    vlSelf->spi_dut__DOT__u_slave__DOT__sr_tx = __Vdly__spi_dut__DOT__u_slave__DOT__sr_tx;
}

VL_INLINE_OPT void Vspi_dut___024root___nba_sequent__TOP__3(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__state = 0U;
        vlSymsp->TOP__spi_dut__DOT__spi_if.ss = 1U;
        vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi = 0U;
        vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__sck = 0U;
        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sck_div = 0U;
        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__bit_count = 0U;
        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__cmd_reg = 0U;
        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr = 0U;
        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_tx = 0U;
        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_rx = 0U;
        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sck_prev = 0U;
        vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__done = 0U;
    } else {
        vlSelf->__Vdly__debug_state = vlSelf->spi_dut__DOT__u_master__DOT__state;
        if ((0U != (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
            if ((0x63U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_div))) {
                vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__sck 
                    = (1U & (~ (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck)));
                vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sck_div = 0U;
            } else {
                vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sck_div 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_div)));
            }
        } else {
            vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__sck = 0U;
            vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sck_div = 0U;
        }
        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sck_prev 
            = vlSymsp->TOP__spi_dut__DOT__spi_if.sck;
        if ((4U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
            if ((2U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
                vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__state = 0U;
            } else if (VL_LIKELY((1U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state)))) {
                vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__state = 0U;
            } else {
                vlSymsp->TOP__spi_dut__DOT__spi_if.ss = 1U;
                vlSymsp->TOP__spi_dut__DOT__spi_if.data_received 
                    = vlSelf->spi_dut__DOT__u_master__DOT__sr_rx;
                VL_WRITEF("DEBUG DONE: data_received=0x%04x bit_count=%3# mosi=%b  done=%1#\n",
                          16,vlSelf->spi_dut__DOT__u_master__DOT__sr_rx,
                          7,(IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count),
                          1,vlSymsp->TOP__spi_dut__DOT__spi_if.mosi,
                          1,(IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.done));
                vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__done = 1U;
                vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi = 0U;
                vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__bit_count = 0U;
                if ((0U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__done_counter))) {
                    vlSelf->spi_dut__DOT__u_master__DOT__done_counter = 1U;
                } else {
                    vlSelf->spi_dut__DOT__u_master__DOT__done_counter = 0U;
                    vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__done = 0U;
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__state = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
            if ((1U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
                if (((IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck) 
                     & (~ (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_prev)))) {
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_rx 
                        = ((0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_rx) 
                                       << 1U)) | (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.miso));
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count)));
                }
                if (((~ (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck)) 
                     & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_prev))) {
                    vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi 
                        = (1U & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_tx) 
                                 >> 0xfU));
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_tx 
                        = (0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_tx) 
                                      << 1U));
                }
                if (VL_UNLIKELY((0xfU == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count)))) {
                    VL_WRITEF("DEBUG DRAIN DONE: data_received=0x%04x\n",
                              16,vlSelf->spi_dut__DOT__u_master__DOT__sr_rx);
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__state = 4U;
                }
            } else {
                if (VL_UNLIKELY(((IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck) 
                                 & (~ (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_prev))))) {
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_rx 
                        = ((0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_rx) 
                                       << 1U)) | (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.miso));
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count)));
                    VL_WRITEF("DEBUG FILL: bit_count=%3#, miso=%b, sr_rx=0x%04x\n",
                              7,vlSelf->spi_dut__DOT__u_master__DOT__bit_count,
                              1,(IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.miso),
                              16,vlSelf->spi_dut__DOT__u_master__DOT__sr_rx);
                }
                if (((~ (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck)) 
                     & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_prev))) {
                    vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi 
                        = (1U & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_tx) 
                                 >> 0xfU));
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_tx 
                        = (0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_tx) 
                                      << 1U));
                }
                if ((0xfU == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count))) {
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__state = 4U;
                }
            }
        } else if ((1U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
            vlSymsp->TOP__spi_dut__DOT__spi_if.ss = 0U;
            if (((IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck) 
                 & (~ (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_prev)))) {
                if ((7U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count))) {
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    if ((1U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__cmd_reg))) {
                        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__state = 3U;
                    } else {
                        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_tx 
                            = vlSelf->master_data;
                        vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__state = 2U;
                    }
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__cmd_reg 
                        = (0xffU & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_rx));
                } else {
                    vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count)));
                }
                vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_rx 
                    = ((0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr) 
                                   << 1U)) | (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.miso));
            }
        } else {
            vlSymsp->TOP__spi_dut__DOT__spi_if.ss = 1U;
            vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi = 0U;
            vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__done = 0U;
            vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__bit_count = 0U;
            vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sck_div = 0U;
            if (VL_UNLIKELY(vlSelf->start)) {
                VL_WRITEF("DEBUG (IDLE): sr_rx=0x%04x, debug_state=%b, buffer_sr=x%04x\n",
                          8,(0xffU & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_rx)),
                          3,(IData)(vlSelf->debug_state),
                          16,vlSelf->spi_dut__DOT__u_master__DOT__sr);
                vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__state = 1U;
                vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr 
                    = vlSelf->master_data;
            }
        }
    }
    vlSelf->spi_dut__DOT__u_master__DOT__state = vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__state;
    vlSelf->spi_dut__DOT__u_master__DOT__sck_div = vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sck_div;
    vlSelf->spi_dut__DOT__u_master__DOT__bit_count 
        = vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__bit_count;
    vlSelf->spi_dut__DOT__u_master__DOT__cmd_reg = vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__cmd_reg;
    vlSelf->spi_dut__DOT__u_master__DOT__sr = vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr;
    vlSelf->spi_dut__DOT__u_master__DOT__sr_tx = vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_tx;
    vlSelf->spi_dut__DOT__u_master__DOT__sr_rx = vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sr_rx;
    vlSelf->spi_dut__DOT__u_master__DOT__sck_prev = vlSelf->__Vdly__spi_dut__DOT__u_master__DOT__sck_prev;
    vlSelf->debug_state = vlSelf->__Vdly__debug_state;
    vlSymsp->TOP__spi_dut__DOT__spi_if.sck = vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__sck;
    vlSymsp->TOP__spi_dut__DOT__spi_if.done = vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__done;
    vlSymsp->TOP__spi_dut__DOT__spi_if.mosi = vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi;
    vlSelf->ss = vlSymsp->TOP__spi_dut__DOT__spi_if.ss;
    vlSelf->sck = vlSymsp->TOP__spi_dut__DOT__spi_if.sck;
    vlSelf->done = vlSymsp->TOP__spi_dut__DOT__spi_if.done;
    vlSelf->data_received = vlSymsp->TOP__spi_dut__DOT__spi_if.data_received;
    vlSelf->mosi = vlSymsp->TOP__spi_dut__DOT__spi_if.mosi;
}

VL_INLINE_OPT void Vspi_dut___024root___nba_sequent__TOP__4(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSymsp->TOP__spi_dut__DOT__spi_if.miso = vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__miso;
    vlSelf->miso = vlSymsp->TOP__spi_dut__DOT__spi_if.miso;
}
