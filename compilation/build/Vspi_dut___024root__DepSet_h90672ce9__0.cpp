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
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__spi_dut__DOT__sc_interface.sck) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_dut__DOT__sc_interface__sck__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__Vtrigprevexpr___TOP__spi_dut__DOT__sc_interface__sck__0 
        = vlSymsp->TOP__spi_dut__DOT__sc_interface.sck;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
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
    // Init
    CData/*3:0*/ __Vdly__spi_dut__DOT__u_slaver__DOT__bit_count;
    __Vdly__spi_dut__DOT__u_slaver__DOT__bit_count = 0;
    SData/*14:0*/ __Vdly__spi_dut__DOT__u_slaver__DOT__sr;
    __Vdly__spi_dut__DOT__u_slaver__DOT__sr = 0;
    SData/*15:0*/ __Vdly__spi_dut__DOT__u_slaver__DOT__tx_buffer;
    __Vdly__spi_dut__DOT__u_slaver__DOT__tx_buffer = 0;
    // Body
    __Vdly__spi_dut__DOT__u_slaver__DOT__tx_buffer 
        = vlSelf->spi_dut__DOT__u_slaver__DOT__tx_buffer;
    vlSymsp->TOP__spi_dut__DOT__sc_interface.__Vdly__miso 
        = vlSymsp->TOP__spi_dut__DOT__sc_interface.miso;
    vlSymsp->TOP__spi_dut__DOT__sc_interface.__Vdly__slave_data_received 
        = vlSymsp->TOP__spi_dut__DOT__sc_interface.slave_data_received;
    __Vdly__spi_dut__DOT__u_slaver__DOT__sr = vlSelf->spi_dut__DOT__u_slaver__DOT__sr;
    __Vdly__spi_dut__DOT__u_slaver__DOT__bit_count 
        = vlSelf->spi_dut__DOT__u_slaver__DOT__bit_count;
    if (VL_GTS_III(32, 3U, vlSelf->spi_dut__DOT__u_master__DOT__count)) {
        vlSelf->spi_dut__DOT__u_master__DOT__count 
            = ((IData)(1U) + vlSelf->spi_dut__DOT__u_master__DOT__count);
    }
    if (vlSymsp->TOP__spi_dut__DOT__sc_interface.ss) {
        __Vdly__spi_dut__DOT__u_slaver__DOT__tx_buffer 
            = vlSelf->data_to_send;
        __Vdly__spi_dut__DOT__u_slaver__DOT__bit_count = 0U;
    } else {
        vlSymsp->TOP__spi_dut__DOT__sc_interface.__Vdly__miso 
            = (1U & ((IData)(vlSelf->spi_dut__DOT__u_slaver__DOT__tx_buffer) 
                     >> 0xfU));
        __Vdly__spi_dut__DOT__u_slaver__DOT__tx_buffer 
            = (0xfffeU & ((IData)(vlSelf->spi_dut__DOT__u_slaver__DOT__tx_buffer) 
                          << 1U));
        __Vdly__spi_dut__DOT__u_slaver__DOT__bit_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_slaver__DOT__bit_count)));
        __Vdly__spi_dut__DOT__u_slaver__DOT__sr = (
                                                   (0x7ffeU 
                                                    & ((IData)(vlSelf->spi_dut__DOT__u_slaver__DOT__sr) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__spi_dut__DOT__sc_interface.mosi));
    }
    if ((0xfU == (IData)(vlSelf->spi_dut__DOT__u_slaver__DOT__bit_count))) {
        vlSymsp->TOP__spi_dut__DOT__sc_interface.__Vdly__slave_data_received 
            = (((IData)(vlSelf->spi_dut__DOT__u_slaver__DOT__sr) 
                << 1U) | (IData)(vlSymsp->TOP__spi_dut__DOT__sc_interface.mosi));
    }
    vlSelf->spi_dut__DOT__u_slaver__DOT__tx_buffer 
        = __Vdly__spi_dut__DOT__u_slaver__DOT__tx_buffer;
    vlSelf->spi_dut__DOT__u_slaver__DOT__bit_count 
        = __Vdly__spi_dut__DOT__u_slaver__DOT__bit_count;
    vlSelf->spi_dut__DOT__u_slaver__DOT__sr = __Vdly__spi_dut__DOT__u_slaver__DOT__sr;
}

VL_INLINE_OPT void Vspi_dut___024root___nba_sequent__TOP__1(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__spi_dut__DOT__u_master__DOT__ready;
    __Vdly__spi_dut__DOT__u_master__DOT__ready = 0;
    CData/*1:0*/ __Vdly__spi_dut__DOT__u_master__DOT__state;
    __Vdly__spi_dut__DOT__u_master__DOT__state = 0;
    CData/*1:0*/ __Vdly__spi_dut__DOT__u_master__DOT__sck_div;
    __Vdly__spi_dut__DOT__u_master__DOT__sck_div = 0;
    SData/*14:0*/ __Vdly__spi_dut__DOT__u_master__DOT__sr;
    __Vdly__spi_dut__DOT__u_master__DOT__sr = 0;
    CData/*0:0*/ TOP__spi_dut__DOT__sc_interface__DOT____Vdly__sck;
    TOP__spi_dut__DOT__sc_interface__DOT____Vdly__sck = 0;
    // Body
    __Vdly__spi_dut__DOT__u_master__DOT__sr = vlSelf->spi_dut__DOT__u_master__DOT__sr;
    __Vdly__spi_dut__DOT__u_master__DOT__sck_div = vlSelf->spi_dut__DOT__u_master__DOT__sck_div;
    __Vdly__spi_dut__DOT__u_master__DOT__state = vlSelf->spi_dut__DOT__u_master__DOT__state;
    __Vdly__spi_dut__DOT__u_master__DOT__ready = vlSelf->spi_dut__DOT__u_master__DOT__ready;
    TOP__spi_dut__DOT__sc_interface__DOT____Vdly__sck 
        = vlSymsp->TOP__spi_dut__DOT__sc_interface.sck;
    if (vlSelf->reset) {
        if ((0U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
            __Vdly__spi_dut__DOT__u_master__DOT__ready = 0U;
            vlSelf->done = 0U;
            vlSymsp->TOP__spi_dut__DOT__sc_interface.ss = 0U;
            vlSymsp->TOP__spi_dut__DOT__sc_interface.mosi = 0U;
            __Vdly__spi_dut__DOT__u_master__DOT__state 
                = ((IData)(vlSelf->start) ? 1U : 0U);
        } else if ((1U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
            __Vdly__spi_dut__DOT__u_master__DOT__sck_div 
                = (3U & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_div)));
            if ((2U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__sck_div))) {
                TOP__spi_dut__DOT__sc_interface__DOT____Vdly__sck 
                    = (1U & (~ (IData)(vlSymsp->TOP__spi_dut__DOT__sc_interface.sck)));
            }
            if (vlSymsp->TOP__spi_dut__DOT__sc_interface.sck) {
                __Vdly__spi_dut__DOT__u_master__DOT__sr 
                    = ((0x7ffeU & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr) 
                                   << 1U)) | (IData)(vlSymsp->TOP__spi_dut__DOT__sc_interface.miso));
                if (vlSelf->spi_dut__DOT__u_master__DOT__ready) {
                    vlSymsp->TOP__spi_dut__DOT__sc_interface.mosi 
                        = (1U & ((IData)(vlSelf->spi_dut__DOT__u_master__DOT__sr) 
                                 >> 7U));
                } else {
                    __Vdly__spi_dut__DOT__u_master__DOT__state = 0U;
                }
                __Vdly__spi_dut__DOT__u_master__DOT__ready = 1U;
            }
            if ((2U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count))) {
                __Vdly__spi_dut__DOT__u_master__DOT__state = 2U;
            } else {
                vlSelf->spi_dut__DOT__u_master__DOT__bit_count 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->spi_dut__DOT__u_master__DOT__bit_count)));
            }
        } else if ((2U == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))) {
            vlSymsp->TOP__spi_dut__DOT__sc_interface.ss = 1U;
            TOP__spi_dut__DOT__sc_interface__DOT____Vdly__sck = 0U;
            vlSymsp->TOP__spi_dut__DOT__sc_interface.data_received 
                = vlSymsp->TOP__spi_dut__DOT__sc_interface.slave_data_received;
            __Vdly__spi_dut__DOT__u_master__DOT__sr 
                = (0x7fffU & ((IData)(vlSelf->data_to_send) 
                              >> 1U));
            __Vdly__spi_dut__DOT__u_master__DOT__state = 0U;
            vlSelf->done = 1U;
        }
        if (VL_UNLIKELY((1U & (~ VL_ONEHOT_I((((2U 
                                                == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state)) 
                                               << 2U) 
                                              | (((1U 
                                                   == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state)) 
                                                  << 1U) 
                                                 | (0U 
                                                    == (IData)(vlSelf->spi_dut__DOT__u_master__DOT__state))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: master_send.sv:48: Assertion failed in %Nspi_dut.u_master: synthesis parallel_case, but multiple matches found\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("../pkg/../rtl/master_send.sv", 48, "");
            }
        }
    } else {
        vlSymsp->TOP__spi_dut__DOT__sc_interface.mosi = 0U;
        TOP__spi_dut__DOT__sc_interface__DOT____Vdly__sck = 0U;
        vlSymsp->TOP__spi_dut__DOT__sc_interface.ss = 1U;
        __Vdly__spi_dut__DOT__u_master__DOT__ready = 0U;
        vlSelf->done = 0U;
        __Vdly__spi_dut__DOT__u_master__DOT__state = 0U;
    }
    vlSelf->spi_dut__DOT__u_master__DOT__ready = __Vdly__spi_dut__DOT__u_master__DOT__ready;
    vlSelf->spi_dut__DOT__u_master__DOT__state = __Vdly__spi_dut__DOT__u_master__DOT__state;
    vlSelf->spi_dut__DOT__u_master__DOT__sck_div = __Vdly__spi_dut__DOT__u_master__DOT__sck_div;
    vlSelf->spi_dut__DOT__u_master__DOT__sr = __Vdly__spi_dut__DOT__u_master__DOT__sr;
    vlSymsp->TOP__spi_dut__DOT__sc_interface.sck = TOP__spi_dut__DOT__sc_interface__DOT____Vdly__sck;
    vlSelf->ss = vlSymsp->TOP__spi_dut__DOT__sc_interface.ss;
    vlSelf->mosi = vlSymsp->TOP__spi_dut__DOT__sc_interface.mosi;
    vlSelf->sck = vlSymsp->TOP__spi_dut__DOT__sc_interface.sck;
    vlSelf->data_received = vlSymsp->TOP__spi_dut__DOT__sc_interface.data_received;
}

VL_INLINE_OPT void Vspi_dut___024root___nba_sequent__TOP__2(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSymsp->TOP__spi_dut__DOT__sc_interface.slave_data_received 
        = vlSymsp->TOP__spi_dut__DOT__sc_interface.__Vdly__slave_data_received;
    vlSymsp->TOP__spi_dut__DOT__sc_interface.miso = vlSymsp->TOP__spi_dut__DOT__sc_interface.__Vdly__miso;
    vlSelf->miso = vlSymsp->TOP__spi_dut__DOT__sc_interface.miso;
}
