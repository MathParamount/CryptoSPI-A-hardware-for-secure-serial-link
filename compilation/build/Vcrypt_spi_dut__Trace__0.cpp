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
        bufp->chgCData(oldp+0,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr),3);
        bufp->chgQData(oldp+1,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text),64);
        bufp->chgQData(oldp+3,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx),64);
        bufp->chgQData(oldp+5,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m),64);
        bufp->chgQData(oldp+7,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s),64);
        bufp->chgCData(oldp+9,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt),6);
        bufp->chgCData(oldp+10,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count),6);
        bufp->chgBit(oldp+11,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__is_write));
        bufp->chgQData(oldp+12,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg),64);
        bufp->chgQData(oldp+14,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+16,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx),64);
        bufp->chgBit(oldp+18,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+20,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state),3);
        bufp->chgQData(oldp+21,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr),64);
        bufp->chgQData(oldp+23,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg),64);
        bufp->chgQData(oldp+25,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx),64);
        bufp->chgQData(oldp+27,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx),64);
        bufp->chgCData(oldp+29,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count),7);
        bufp->chgQData(oldp+30,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div),64);
        bufp->chgBit(oldp+32,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev));
        bufp->chgBit(oldp+33,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en));
        bufp->chgCData(oldp+34,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt),2);
        bufp->chgSData(oldp+35,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks),16);
        bufp->chgBit(oldp+36,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready));
        bufp->chgQData(oldp+41,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted),64);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_ack));
    }
    bufp->chgBit(oldp+45,(vlSelf->clk));
    bufp->chgBit(oldp+46,(vlSelf->reset_n));
    bufp->chgQData(oldp+47,(vlSelf->master_data),64);
    bufp->chgBit(oldp+49,(vlSelf->start));
    bufp->chgBit(oldp+50,(vlSelf->miso));
    bufp->chgBit(oldp+51,(vlSelf->done));
    bufp->chgBit(oldp+52,(vlSelf->sck));
    bufp->chgBit(oldp+53,(vlSelf->mosi));
    bufp->chgCData(oldp+54,(vlSelf->debug_state),3);
    bufp->chgCData(oldp+55,(vlSelf->debug_state_crypt),3);
    bufp->chgBit(oldp+56,(vlSelf->ss));
    bufp->chgBit(oldp+57,(vlSelf->crypto_done));
    bufp->chgBit(oldp+58,(vlSelf->block_ready));
    bufp->chgQData(oldp+59,(vlSelf->nonce),64);
    bufp->chgQData(oldp+61,(vlSelf->mosi_encrypted),64);
    bufp->chgQData(oldp+63,(vlSelf->miso_encrypted),64);
    bufp->chgQData(oldp+65,(vlSelf->encrypt_text),64);
    bufp->chgBit(oldp+67,(vlSelf->crypto_ack));
    bufp->chgCData(oldp+68,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_mast),3);
    bufp->chgBit(oldp+69,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block));
    bufp->chgSData(oldp+70,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count),16);
    bufp->chgQData(oldp+71,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx),64);
    bufp->chgCData(oldp+73,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count),7);
    bufp->chgQData(oldp+74,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.nonce),64);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
