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
        bufp->chgCData(oldp+0,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state),3);
        bufp->chgQData(oldp+1,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr),64);
        bufp->chgQData(oldp+3,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg),64);
        bufp->chgQData(oldp+5,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx),64);
        bufp->chgQData(oldp+7,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx),64);
        bufp->chgCData(oldp+9,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count),7);
        bufp->chgQData(oldp+10,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div),64);
        bufp->chgBit(oldp+12,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev));
        bufp->chgBit(oldp+13,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en));
        bufp->chgCData(oldp+14,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt),2);
        bufp->chgSData(oldp+15,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks),16);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck));
        bufp->chgQData(oldp+17,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.data_received),64);
        bufp->chgBit(oldp+19,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+21,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr),3);
        bufp->chgCData(oldp+22,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_mast),3);
        bufp->chgQData(oldp+23,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text),64);
        bufp->chgQData(oldp+25,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx),64);
        bufp->chgQData(oldp+27,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text),64);
        bufp->chgQData(oldp+29,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m),64);
        bufp->chgQData(oldp+31,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s),64);
        bufp->chgCData(oldp+33,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt),6);
        bufp->chgCData(oldp+34,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count),6);
        bufp->chgBit(oldp+35,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__is_write));
        bufp->chgQData(oldp+36,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted),64);
        bufp->chgQData(oldp+38,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted),64);
        bufp->chgQData(oldp+40,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.nonce),64);
        bufp->chgBit(oldp+42,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+43,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx),64);
        bufp->chgBit(oldp+45,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso));
    }
    bufp->chgBit(oldp+47,(vlSelf->clk));
    bufp->chgBit(oldp+48,(vlSelf->reset_n));
    bufp->chgQData(oldp+49,(vlSelf->master_data),64);
    bufp->chgBit(oldp+51,(vlSelf->start));
    bufp->chgBit(oldp+52,(vlSelf->miso));
    bufp->chgBit(oldp+53,(vlSelf->done));
    bufp->chgQData(oldp+54,(vlSelf->data_received),64);
    bufp->chgBit(oldp+56,(vlSelf->sck));
    bufp->chgBit(oldp+57,(vlSelf->mosi));
    bufp->chgCData(oldp+58,(vlSelf->debug_state),3);
    bufp->chgCData(oldp+59,(vlSelf->debug_state_crypt),3);
    bufp->chgBit(oldp+60,(vlSelf->ss));
    bufp->chgBit(oldp+61,(vlSelf->crypto_done));
    bufp->chgBit(oldp+62,(vlSelf->block_ready));
    bufp->chgQData(oldp+63,(vlSelf->cipher_text),64);
    bufp->chgQData(oldp+65,(vlSelf->nonce),64);
    bufp->chgQData(oldp+67,(vlSelf->lfsr_cipher),64);
    bufp->chgQData(oldp+69,(vlSelf->mosi_encrypted),64);
    bufp->chgQData(oldp+71,(vlSelf->miso_encrypted),64);
    bufp->chgBit(oldp+73,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block));
    bufp->chgSData(oldp+74,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count),16);
    bufp->chgQData(oldp+75,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx),64);
    bufp->chgCData(oldp+77,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count),7);
    bufp->chgBit(oldp+78,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi));
    bufp->chgBit(oldp+79,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss));
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
