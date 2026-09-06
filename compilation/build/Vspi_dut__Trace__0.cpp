// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vspi_dut__Syms.h"


void Vspi_dut___024root__trace_chg_0_sub_0(Vspi_dut___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vspi_dut___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_chg_0\n"); );
    // Init
    Vspi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_dut___024root*>(voidSelf);
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vspi_dut___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vspi_dut___024root__trace_chg_0_sub_0(Vspi_dut___024root* vlSelf, VerilatedFst::Buffer* bufp) {
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
        bufp->chgBit(oldp+7,(vlSelf->spi_dut__DOT__u_master__DOT__sck_prev));
        bufp->chgBit(oldp+8,(vlSelf->spi_dut__DOT__u_master__DOT__ss_delay));
        bufp->chgCData(oldp+9,(vlSelf->spi_dut__DOT__u_master__DOT__done_counter),3);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__spi_dut__DOT__spi_if.sck));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__spi_dut__DOT__spi_if.mosi));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__spi_dut__DOT__spi_if.ss));
        bufp->chgSData(oldp+13,(vlSymsp->TOP__spi_dut__DOT__spi_if.data_received),16);
        bufp->chgBit(oldp+14,(vlSymsp->TOP__spi_dut__DOT__spi_if.done));
    }
    bufp->chgBit(oldp+15,(vlSelf->clk));
    bufp->chgBit(oldp+16,(vlSelf->reset_n));
    bufp->chgSData(oldp+17,(vlSelf->master_data),16);
    bufp->chgSData(oldp+18,(vlSelf->slave_data_to_send),16);
    bufp->chgBit(oldp+19,(vlSelf->start));
    bufp->chgBit(oldp+20,(vlSelf->miso));
    bufp->chgBit(oldp+21,(vlSelf->done));
    bufp->chgSData(oldp+22,(vlSelf->data_received),16);
    bufp->chgBit(oldp+23,(vlSelf->sck));
    bufp->chgBit(oldp+24,(vlSelf->mosi));
    bufp->chgCData(oldp+25,(vlSelf->debug_state),3);
    bufp->chgBit(oldp+26,(vlSelf->ss));
    bufp->chgSData(oldp+27,(vlSelf->spi_dut__DOT__u_slave__DOT__sr_tx),16);
    bufp->chgBit(oldp+28,(vlSelf->spi_dut__DOT__u_slave__DOT__ss_prev));
    bufp->chgBit(oldp+29,(vlSelf->spi_dut__DOT__u_slave__DOT__miso_reg));
}

void Vspi_dut___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_cleanup\n"); );
    // Init
    Vspi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_dut___024root*>(voidSelf);
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
