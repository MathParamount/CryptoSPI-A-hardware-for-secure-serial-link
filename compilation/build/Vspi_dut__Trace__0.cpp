// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_dut__Syms.h"


void Vspi_dut___024root__trace_chg_0_sub_0(Vspi_dut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vspi_dut___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_chg_0\n"); );
    // Init
    Vspi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_dut___024root*>(voidSelf);
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vspi_dut___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vspi_dut___024root__trace_chg_0_sub_0(Vspi_dut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->spi_dut__DOT__u_slaver__DOT__tx_buffer),16);
        bufp->chgSData(oldp+1,(vlSelf->spi_dut__DOT__u_slaver__DOT__sr),15);
        bufp->chgCData(oldp+2,(vlSelf->spi_dut__DOT__u_slaver__DOT__bit_count),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+3,(vlSelf->spi_dut__DOT__u_master__DOT__state),2);
        bufp->chgBit(oldp+4,(vlSelf->spi_dut__DOT__u_master__DOT__ready));
        bufp->chgSData(oldp+5,(vlSelf->spi_dut__DOT__u_master__DOT__sr),15);
        bufp->chgCData(oldp+6,(vlSelf->spi_dut__DOT__u_master__DOT__bit_count),3);
        bufp->chgCData(oldp+7,(vlSelf->spi_dut__DOT__u_master__DOT__sck_div),2);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__spi_dut__DOT__sc_interface.sck));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__spi_dut__DOT__sc_interface.ss));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__spi_dut__DOT__sc_interface.mosi));
        bufp->chgSData(oldp+11,(vlSymsp->TOP__spi_dut__DOT__sc_interface.data_received),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+12,(vlSelf->spi_dut__DOT__u_master__DOT__start));
        bufp->chgIData(oldp+13,(vlSelf->spi_dut__DOT__u_master__DOT__count),32);
        bufp->chgBit(oldp+14,(vlSymsp->TOP__spi_dut__DOT__sc_interface.miso));
        bufp->chgSData(oldp+15,(vlSymsp->TOP__spi_dut__DOT__sc_interface.slave_data_received),16);
    }
    bufp->chgBit(oldp+16,(vlSelf->clk));
    bufp->chgBit(oldp+17,(vlSelf->reset));
    bufp->chgSData(oldp+18,(vlSelf->data_to_send),16);
    bufp->chgBit(oldp+19,(vlSelf->miso));
    bufp->chgBit(oldp+20,(vlSelf->sck));
    bufp->chgBit(oldp+21,(vlSelf->ss));
    bufp->chgSData(oldp+22,(vlSelf->data_received),16);
    bufp->chgBit(oldp+23,(vlSelf->mosi));
}

void Vspi_dut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_cleanup\n"); );
    // Init
    Vspi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_dut___024root*>(voidSelf);
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
