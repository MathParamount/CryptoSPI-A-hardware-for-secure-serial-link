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
    vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__bit_count 
        = vlSelf->spi_dut__DOT__u_slave__DOT__bit_count;
    vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__sr_rx 
        = vlSelf->spi_dut__DOT__u_slave__DOT__sr_rx;
    vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__sr_tx 
        = vlSelf->spi_dut__DOT__u_slave__DOT__sr_tx;
    vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__tx_load 
        = vlSelf->spi_dut__DOT__u_slave__DOT__tx_load;
    vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__sr_rx 
        = ((IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.ss)
            ? 0U : ((0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_slave__DOT__sr_rx) 
                                << 1U)) | (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.mosi)));
}

VL_INLINE_OPT void Vspi_dut___024root___nba_sequent__TOP__1(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vdly__spi_dut__DOT__u_master__DOT__state;
    __Vdly__spi_dut__DOT__u_master__DOT__state = 0;
    SData/*15:0*/ __Vdly__spi_dut__DOT__u_master__DOT__sck_div;
    __Vdly__spi_dut__DOT__u_master__DOT__sck_div = 0;
    CData/*6:0*/ __Vdly__spi_dut__DOT__u_master__DOT__bit_count;
    __Vdly__spi_dut__DOT__u_master__DOT__bit_count = 0;
    SData/*15:0*/ __Vdly__spi_dut__DOT__u_master__DOT__cmd_reg;
    __Vdly__spi_dut__DOT__u_master__DOT__cmd_reg = 0;
    SData/*15:0*/ __Vdly__spi_dut__DOT__u_master__DOT__sr_tx;
    __Vdly__spi_dut__DOT__u_master__DOT__sr_tx = 0;
    SData/*15:0*/ __Vdly__spi_dut__DOT__u_master__DOT__sr_rx;
    __Vdly__spi_dut__DOT__u_master__DOT__sr_rx = 0;
    CData/*0:0*/ TOP__spi_dut__DOT__spi_if__DOT____Vdly__sck;
    TOP__spi_dut__DOT__spi_if__DOT____Vdly__sck = 0;
    // Body
    __Vdly__spi_dut__DOT__u_master__DOT__sr_rx = vlSelf->spi_dut__DOT__u_master__DOT__sr_rx;
    __Vdly__spi_dut__DOT__u_master__DOT__sr_tx = vlSelf->spi_dut__DOT__u_master__DOT__sr_tx;
    __Vdly__spi_dut__DOT__u_master__DOT__cmd_reg = vlSelf->spi_dut__DOT__u_master__DOT__cmd_reg;
    __Vdly__spi_dut__DOT__u_master__DOT__bit_count 
        = vlSelf->spi_dut__DOT__u_master__DOT__bit_count;
    __Vdly__spi_dut__DOT__u_master__DOT__sck_div = vlSelf->spi_dut__DOT__u_master__DOT__sck_div;
    __Vdly__spi_dut__DOT__u_master__DOT__state = vlSelf->spi_dut__DOT__u_master__DOT__state;
    TOP__spi_dut__DOT__spi_if__DOT____Vdly__sck = vlSymsp->TOP__spi_dut__DOT__spi_if.sck;
    vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi 
        = vlSymsp->TOP__spi_dut__DOT__spi_if.mosi;
    vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__ss = vlSymsp->TOP__spi_dut__DOT__spi_if.ss;
    if (vlSelf->reset) {
        __Vdly__spi_dut__DOT__u_master__DOT__state = 0U;
        vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__ss = 1U;
        vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi = 0U;
        __Vdly__spi_dut__DOT__u_master__DOT__sck_div = 0U;
        __Vdly__spi_dut__DOT__u_master__DOT__bit_count = 0U;
        __Vdly__spi_dut__DOT__u_master__DOT__cmd_reg = 0U;
        vlSelf->spi_dut__DOT__u_master__DOT__sr = 0U;
        __Vdly__spi_dut__DOT__u_master__DOT__sr_tx = 0U;
        __Vdly__spi_dut__DOT__u_master__DOT__sr_rx = 0U;
        vlSymsp->TOP__spi_dut__DOT__spi_if.done = 0U;
    } else {
        vlSelf->debug_state = vlSelf->spi_dut__DOT__u_master__DOT__state;
        if ((0U != (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
            if ((0x64U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_div))) {
                TOP__spi_dut__DOT__spi_if__DOT____Vdly__sck 
                    = (1U & (~ (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck)));
                __Vdly__spi_dut__DOT__u_master__DOT__sck_div = 0U;
            } else {
                __Vdly__spi_dut__DOT__u_master__DOT__sck_div 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_div)));
            }
        } else {
            TOP__spi_dut__DOT__spi_if__DOT____Vdly__sck = 0U;
            __Vdly__spi_dut__DOT__u_master__DOT__sck_div = 0U;
        }
        if ((4U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
            if ((2U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
                __Vdly__spi_dut__DOT__u_master__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
                __Vdly__spi_dut__DOT__u_master__DOT__state = 0U;
            } else {
                vlSelf->spi_dut__DOT__u_master__DOT__done_counter 
                    = (1U & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_master__DOT__done_counter)));
                vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__ss = 1U;
                vlSymsp->TOP__spi_dut__DOT__spi_if.done = 1U;
            }
        } else if ((2U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
            if ((1U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
                if (VL_UNLIKELY(((0x32U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_div)) 
                                 & (~ (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck))))) {
                    __Vdly__spi_dut__DOT__u_master__DOT__sr_rx 
                        = ((0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_rx) 
                                       << 1U)) | (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.miso));
                    VL_WRITEF("DEBUG (DRAIN_BUFFER): data_received = 0x%04x\n",
                              16,vlSymsp->TOP__spi_dut__DOT__spi_if.data_received);
                    if ((0xfU == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count))) {
                        __Vdly__spi_dut__DOT__u_master__DOT__bit_count = 0U;
                        vlSymsp->TOP__spi_dut__DOT__spi_if.data_received 
                            = vlSelf->spi_dut__DOT__u_master__DOT__sr_rx;
                        __Vdly__spi_dut__DOT__u_master__DOT__state = 4U;
                    }
                } else {
                    __Vdly__spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count)));
                }
            } else if (VL_UNLIKELY(((0x32U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_div)) 
                                    & (~ (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck))))) {
                VL_WRITEF("DEBUG (FILL_BUFFER): bit_count=%3#, sck_div=%5#, sck=%1#\n",
                          7,vlSelf->spi_dut__DOT__u_master__DOT__bit_count,
                          16,(IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_div),
                          1,vlSymsp->TOP__spi_dut__DOT__spi_if.sck);
                vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi 
                    = (1U & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_tx) 
                             >> 0xfU));
                __Vdly__spi_dut__DOT__u_master__DOT__sr_tx 
                    = (0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_tx) 
                                  << 1U));
                if (VL_UNLIKELY((0x10U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count)))) {
                    VL_WRITEF("State DONE in fill_buffer \n");
                    __Vdly__spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    __Vdly__spi_dut__DOT__u_master__DOT__state = 4U;
                } else {
                    __Vdly__spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count)));
                }
            }
        } else if ((1U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
            vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__ss = 0U;
            if (((0x32U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_div)) 
                 & (~ (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.sck)))) {
                __Vdly__spi_dut__DOT__u_master__DOT__sr_rx 
                    = ((0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_rx) 
                                   << 1U)) | (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.miso));
                if (VL_UNLIKELY((7U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count)))) {
                    VL_WRITEF("DEBUG (CMD_PARSE): data_to_send = 0x%04x\n",
                              16,vlSelf->master_data);
                    __Vdly__spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    if ((1U & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__cmd_reg))) {
                        __Vdly__spi_dut__DOT__u_master__DOT__state = 3U;
                    } else {
                        __Vdly__spi_dut__DOT__u_master__DOT__sr_tx 
                            = vlSelf->master_data;
                        __Vdly__spi_dut__DOT__u_master__DOT__state = 2U;
                    }
                    __Vdly__spi_dut__DOT__u_master__DOT__cmd_reg 
                        = (0xffU & (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr_rx));
                } else {
                    __Vdly__spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count)));
                }
            }
        } else {
            vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__ss = 1U;
            vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi = 0U;
            vlSymsp->TOP__spi_dut__DOT__spi_if.done = 0U;
            __Vdly__spi_dut__DOT__u_master__DOT__bit_count = 0U;
            __Vdly__spi_dut__DOT__u_master__DOT__sck_div = 0U;
            if (vlSelf->start) {
                vlSelf->spi_dut__DOT__u_master__DOT__sr 
                    = vlSelf->master_data;
                __Vdly__spi_dut__DOT__u_master__DOT__state = 1U;
            }
        }
    }
    vlSelf->spi_dut__DOT__u_master__DOT__state = __Vdly__spi_dut__DOT__u_master__DOT__state;
    vlSelf->spi_dut__DOT__u_master__DOT__sck_div = __Vdly__spi_dut__DOT__u_master__DOT__sck_div;
    vlSelf->spi_dut__DOT__u_master__DOT__bit_count 
        = __Vdly__spi_dut__DOT__u_master__DOT__bit_count;
    vlSelf->spi_dut__DOT__u_master__DOT__cmd_reg = __Vdly__spi_dut__DOT__u_master__DOT__cmd_reg;
    vlSelf->spi_dut__DOT__u_master__DOT__sr_tx = __Vdly__spi_dut__DOT__u_master__DOT__sr_tx;
    vlSelf->spi_dut__DOT__u_master__DOT__sr_rx = __Vdly__spi_dut__DOT__u_master__DOT__sr_rx;
    vlSymsp->TOP__spi_dut__DOT__spi_if.sck = TOP__spi_dut__DOT__spi_if__DOT____Vdly__sck;
    vlSelf->done = vlSymsp->TOP__spi_dut__DOT__spi_if.done;
    vlSelf->sck = vlSymsp->TOP__spi_dut__DOT__spi_if.sck;
    vlSelf->data_received = vlSymsp->TOP__spi_dut__DOT__spi_if.data_received;
}

VL_INLINE_OPT void Vspi_dut___024root___nba_sequent__TOP__2(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___nba_sequent__TOP__2\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__spi_dut__DOT__spi_if.ss)))) {
        vlSymsp->TOP__spi_dut__DOT__spi_if.miso = vlSymsp->TOP__spi_dut__DOT__spi_if.mosi;
    }
    if (vlSymsp->TOP__spi_dut__DOT__spi_if.ss) {
        vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__tx_load = 0U;
        vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__sr_tx 
            = vlSelf->spi_dut__DOT__u_slave__DOT__sr_rx;
        vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__bit_count = 0U;
        vlSelf->spi_dut__DOT__u_slave__DOT__rx_done = 0U;
    } else {
        if (((IData)(vlSelf->spi_dut__DOT__u_slave__DOT__rx_done) 
             & (~ (IData)(vlSelf->spi_dut__DOT__u_slave__DOT__tx_load)))) {
            vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__sr_tx 
                = vlSelf->spi_dut__DOT__u_slave__DOT__sr_rx;
            vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__tx_load = 1U;
        } else {
            vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__sr_tx 
                = (0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_slave__DOT__sr_tx) 
                              << 1U));
            vlSymsp->TOP__spi_dut__DOT__spi_if.miso 
                = (1U & ((IData)(vlSelf->spi_dut__DOT__u_slave__DOT__sr_tx) 
                         >> 0xfU));
        }
        vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__bit_count 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_slave__DOT__bit_count)));
        if ((0xfU == (IData)(vlSelf->spi_dut__DOT__u_slave__DOT__bit_count))) {
            vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__bit_count = 0U;
            vlSelf->spi_dut__DOT__u_slave__DOT__rx_done = 1U;
        } else {
            vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__bit_count 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_slave__DOT__bit_count)));
        }
    }
    vlSelf->spi_dut__DOT__u_slave__DOT__tx_load = vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__tx_load;
    vlSelf->spi_dut__DOT__u_slave__DOT__sr_rx = vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__sr_rx;
    vlSelf->spi_dut__DOT__u_slave__DOT__sr_tx = vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__sr_tx;
    vlSelf->miso = vlSymsp->TOP__spi_dut__DOT__spi_if.miso;
    vlSelf->spi_dut__DOT__u_slave__DOT__bit_count = vlSelf->__Vdly__spi_dut__DOT__u_slave__DOT__bit_count;
}

VL_INLINE_OPT void Vspi_dut___024root___nba_sequent__TOP__3(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSymsp->TOP__spi_dut__DOT__spi_if.mosi = vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__mosi;
    vlSymsp->TOP__spi_dut__DOT__spi_if.ss = vlSymsp->TOP__spi_dut__DOT__spi_if.__Vdly__ss;
    vlSelf->mosi = vlSymsp->TOP__spi_dut__DOT__spi_if.mosi;
    vlSelf->ss = vlSymsp->TOP__spi_dut__DOT__spi_if.ss;
}
