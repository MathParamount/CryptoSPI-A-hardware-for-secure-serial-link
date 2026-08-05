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
        bufp->chgIData(oldp+14,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol2),32);
        bufp->chgIData(oldp+15,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol8),32);
        bufp->chgIData(oldp+16,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol1),32);
        bufp->chgIData(oldp+17,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys),32);
        bufp->chgIData(oldp+18,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs),32);
        bufp->chgQData(oldp+19,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ciphertext),64);
        bufp->chgQData(oldp+21,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__Z),62);
        bufp->chgWData(oldp+23,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__key),128);
        bufp->chgIData(oldp+27,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp),32);
        bufp->chgCData(oldp+28,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round),7);
        bufp->chgIData(oldp+29,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__i),32);
        bufp->chgQData(oldp+30,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+32,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx),64);
        bufp->chgBit(oldp+34,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+36,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state),3);
        bufp->chgQData(oldp+37,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr),64);
        bufp->chgQData(oldp+39,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg),64);
        bufp->chgQData(oldp+41,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx),64);
        bufp->chgQData(oldp+43,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx),64);
        bufp->chgCData(oldp+45,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count),7);
        bufp->chgQData(oldp+46,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div),64);
        bufp->chgBit(oldp+48,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev));
        bufp->chgBit(oldp+49,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en));
        bufp->chgCData(oldp+50,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt),2);
        bufp->chgSData(oldp+51,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks),16);
        bufp->chgBit(oldp+52,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready));
        bufp->chgQData(oldp+57,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted),64);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_ack));
    }
    bufp->chgBit(oldp+61,(vlSelf->clk));
    bufp->chgBit(oldp+62,(vlSelf->reset_n));
    bufp->chgQData(oldp+63,(vlSelf->master_data),64);
    bufp->chgBit(oldp+65,(vlSelf->start));
    bufp->chgBit(oldp+66,(vlSelf->miso));
    bufp->chgBit(oldp+67,(vlSelf->done));
    bufp->chgBit(oldp+68,(vlSelf->sck));
    bufp->chgBit(oldp+69,(vlSelf->mosi));
    bufp->chgCData(oldp+70,(vlSelf->debug_state),3);
    bufp->chgCData(oldp+71,(vlSelf->debug_state_crypt),3);
    bufp->chgBit(oldp+72,(vlSelf->ss));
    bufp->chgBit(oldp+73,(vlSelf->crypto_done));
    bufp->chgBit(oldp+74,(vlSelf->block_ready));
    bufp->chgQData(oldp+75,(vlSelf->mosi_encrypted),64);
    bufp->chgQData(oldp+77,(vlSelf->miso_encrypted),64);
    bufp->chgQData(oldp+79,(vlSelf->encrypt_text),64);
    bufp->chgQData(oldp+81,(vlSelf->ciphertext),64);
    bufp->chgBit(oldp+83,(vlSelf->crypto_ack));
    bufp->chgCData(oldp+84,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_mast),3);
    bufp->chgBit(oldp+85,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block));
    bufp->chgSData(oldp+86,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count),16);
    bufp->chgQData(oldp+87,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx),64);
    bufp->chgCData(oldp+89,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count),7);
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
