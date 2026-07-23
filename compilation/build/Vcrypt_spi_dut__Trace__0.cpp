// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vcrypt_spi_dut__Syms.h"


void Vcrypt_spi_dut___024root__trace_chg_0_sub_0(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vcrypt_spi_dut___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root__trace_chg_0\n"); );
    // Init
    Vcrypt_spi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrypt_spi_dut___024root*>(voidSelf);
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcrypt_spi_dut___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcrypt_spi_dut___024root__trace_chg_0_sub_0(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state),3);
        bufp->chgQData(oldp+1,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text),64);
        bufp->chgQData(oldp+3,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_cipher),64);
        bufp->chgQData(oldp+5,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key),64);
        bufp->chgCData(oldp+7,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt),6);
        bufp->chgQData(oldp+8,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.nonce),64);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+11,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state),3);
        bufp->chgQData(oldp+12,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr),64);
        bufp->chgQData(oldp+14,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg),64);
        bufp->chgQData(oldp+16,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx),64);
        bufp->chgQData(oldp+18,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx),64);
        bufp->chgCData(oldp+20,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count),7);
        bufp->chgQData(oldp+21,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div),64);
        bufp->chgBit(oldp+23,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev));
        bufp->chgCData(oldp+24,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_counter),3);
        bufp->chgBit(oldp+25,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss));
        bufp->chgQData(oldp+28,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.data_received),64);
        bufp->chgBit(oldp+30,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready));
    }
    bufp->chgBit(oldp+32,(vlSelf->clk));
    bufp->chgBit(oldp+33,(vlSelf->reset));
    bufp->chgQData(oldp+34,(vlSelf->master_data),64);
    bufp->chgBit(oldp+36,(vlSelf->start));
    bufp->chgBit(oldp+37,(vlSelf->miso));
    bufp->chgBit(oldp+38,(vlSelf->done));
    bufp->chgQData(oldp+39,(vlSelf->data_received),64);
    bufp->chgBit(oldp+41,(vlSelf->sck));
    bufp->chgBit(oldp+42,(vlSelf->mosi));
    bufp->chgCData(oldp+43,(vlSelf->debug_state),3);
    bufp->chgBit(oldp+44,(vlSelf->ss));
    bufp->chgBit(oldp+45,(vlSelf->crypto_done));
    bufp->chgBit(oldp+46,(vlSelf->block_ready));
    bufp->chgQData(oldp+47,(vlSelf->cipher_text),64);
    bufp->chgQData(oldp+49,(vlSelf->nonce),64);
    bufp->chgQData(oldp+51,(vlSelf->lfsr_cipher),64);
    bufp->chgBit(oldp+53,(((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count) 
                           == ((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks) 
                               - (IData)(1U)))));
    bufp->chgSData(oldp+54,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count),16);
    bufp->chgQData(oldp+55,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx),64);
    bufp->chgQData(oldp+57,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx),64);
    bufp->chgCData(oldp+59,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count),7);
    bufp->chgBit(oldp+60,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev));
    bufp->chgBit(oldp+61,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso));
}

void Vcrypt_spi_dut___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root__trace_cleanup\n"); );
    // Init
    Vcrypt_spi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrypt_spi_dut___024root*>(voidSelf);
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
