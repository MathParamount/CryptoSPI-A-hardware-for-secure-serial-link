// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_dut.h for the primary calling header

#include "Vspi_dut__pch.h"
#include "Vspi_dut__Syms.h"
#include "Vspi_dut___024root.h"

VL_ATTR_COLD void Vspi_dut___024root___eval_initial(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__spi_dut__DOT__sc_interface__sck__0 
        = vlSymsp->TOP__spi_dut__DOT__sc_interface.sck;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_dut___024root___dump_triggers__stl(Vspi_dut___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_dut___024root___eval_triggers__stl(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_dut___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vspi_dut___024root___stl_sequent__TOP__0(Vspi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->sck = vlSymsp->TOP__spi_dut__DOT__sc_interface.sck;
    vlSelf->ss = vlSymsp->TOP__spi_dut__DOT__sc_interface.ss;
    vlSelf->data_received = vlSymsp->TOP__spi_dut__DOT__sc_interface.data_received;
    vlSelf->mosi = vlSymsp->TOP__spi_dut__DOT__sc_interface.mosi;
    vlSelf->miso = vlSymsp->TOP__spi_dut__DOT__sc_interface.miso;
}
