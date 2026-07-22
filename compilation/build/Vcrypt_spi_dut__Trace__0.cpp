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
        bufp->chgQData(oldp+0,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text),64);
        bufp->chgQData(oldp+2,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_cipher),64);
        bufp->chgQData(oldp+4,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key),64);
        bufp->chgIData(oldp+6,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__i),32);
        bufp->chgQData(oldp+7,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.nonce),64);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+10,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state),3);
        bufp->chgQData(oldp+11,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr),64);
        bufp->chgQData(oldp+13,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg),64);
        bufp->chgQData(oldp+15,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx),64);
        bufp->chgQData(oldp+17,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx),64);
        bufp->chgCData(oldp+19,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count),7);
        bufp->chgQData(oldp+20,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div),64);
        bufp->chgBit(oldp+22,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev));
        bufp->chgCData(oldp+23,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_counter),3);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss));
        bufp->chgQData(oldp+27,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.data_received),64);
        bufp->chgBit(oldp+29,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready));
    }
    bufp->chgBit(oldp+31,(vlSelf->clk));
    bufp->chgBit(oldp+32,(vlSelf->reset));
    bufp->chgQData(oldp+33,(vlSelf->master_data),64);
    bufp->chgBit(oldp+35,(vlSelf->start));
    bufp->chgBit(oldp+36,(vlSelf->miso));
    bufp->chgBit(oldp+37,(vlSelf->done));
    bufp->chgQData(oldp+38,(vlSelf->data_received),64);
    bufp->chgBit(oldp+40,(vlSelf->sck));
    bufp->chgBit(oldp+41,(vlSelf->mosi));
    bufp->chgCData(oldp+42,(vlSelf->debug_state),3);
    bufp->chgBit(oldp+43,(vlSelf->ss));
    bufp->chgBit(oldp+44,(vlSelf->crypto_done));
    bufp->chgBit(oldp+45,(vlSelf->block_ready));
    bufp->chgQData(oldp+46,(vlSelf->cipher_text),64);
    bufp->chgQData(oldp+48,(vlSelf->nonce),64);
    bufp->chgQData(oldp+50,(vlSelf->lfsr_cipher),64);
    bufp->chgBit(oldp+52,(((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count) 
                           == ((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks) 
                               - (IData)(1U)))));
    bufp->chgSData(oldp+53,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count),16);
    bufp->chgQData(oldp+54,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx),64);
    bufp->chgQData(oldp+56,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx),64);
    bufp->chgCData(oldp+58,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count),7);
    bufp->chgBit(oldp+59,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev));
    bufp->chgBit(oldp+60,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso));
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
