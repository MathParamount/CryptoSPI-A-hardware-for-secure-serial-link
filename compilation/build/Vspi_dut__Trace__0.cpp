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
        bufp->chgCData(oldp+0,(vlSelf->spi_dut__DOT__u_master__DOT__state),3);
        bufp->chgSData(oldp+1,(vlSelf->spi_dut__DOT__u_master__DOT__sr),16);
        bufp->chgSData(oldp+2,(vlSelf->spi_dut__DOT__u_master__DOT__cmd_reg),16);
        bufp->chgSData(oldp+3,(vlSelf->spi_dut__DOT__u_master__DOT__sr_tx),16);
        bufp->chgSData(oldp+4,(vlSelf->spi_dut__DOT__u_master__DOT__sr_rx),16);
        bufp->chgCData(oldp+5,(vlSelf->spi_dut__DOT__u_master__DOT__bit_count),7);
        bufp->chgSData(oldp+6,(vlSelf->spi_dut__DOT__u_master__DOT__sck_div),16);
        bufp->chgBit(oldp+7,(vlSelf->spi_dut__DOT__u_master__DOT__done_counter));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__spi_dut__DOT__spi_if.sck));
        bufp->chgSData(oldp+9,(vlSymsp->TOP__spi_dut__DOT__spi_if.data_received),16);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__spi_dut__DOT__spi_if.done));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+11,(vlSelf->spi_dut__DOT__u_slave__DOT__bit_count),7);
        bufp->chgBit(oldp+12,(vlSelf->spi_dut__DOT__u_slave__DOT__rx_done));
        bufp->chgBit(oldp+13,(vlSelf->spi_dut__DOT__u_slave__DOT__tx_load));
        bufp->chgSData(oldp+14,(vlSelf->spi_dut__DOT__u_slave__DOT__sr_tx),16);
        bufp->chgSData(oldp+15,(vlSelf->spi_dut__DOT__u_slave__DOT__sr_rx),16);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__spi_dut__DOT__spi_if.miso));
    }
    bufp->chgBit(oldp+17,(vlSelf->clk));
    bufp->chgBit(oldp+18,(vlSelf->reset));
    bufp->chgSData(oldp+19,(vlSelf->master_data),16);
    bufp->chgBit(oldp+20,(vlSelf->start));
    bufp->chgBit(oldp+21,(vlSelf->miso));
    bufp->chgBit(oldp+22,(vlSelf->done));
    bufp->chgSData(oldp+23,(vlSelf->data_received),16);
    bufp->chgBit(oldp+24,(vlSelf->sck));
    bufp->chgBit(oldp+25,(vlSelf->mosi));
    bufp->chgCData(oldp+26,(vlSelf->debug_state),3);
    bufp->chgBit(oldp+27,(vlSelf->ss));
    bufp->chgBit(oldp+28,(vlSymsp->TOP__spi_dut__DOT__spi_if.mosi));
    bufp->chgBit(oldp+29,(vlSymsp->TOP__spi_dut__DOT__spi_if.ss));
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
}
