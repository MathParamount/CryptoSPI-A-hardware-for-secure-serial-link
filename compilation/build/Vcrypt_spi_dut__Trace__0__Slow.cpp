// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vcrypt_spi_dut__Syms.h"


VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_init_sub__TOP__crypt_spi_dut__DOT__spi_if__0(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_init_sub__TOP__0(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+62,0,"master_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+64,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"debug_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+71,0,"debug_state_crypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+72,0,"ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"crypto_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"block_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"mosi_encrypted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"miso_encrypted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+77,0,"encrypt_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+81,0,"crypto_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+82,0,"plaintext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("crypt_spi_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+62,0,"master_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+64,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"debug_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+71,0,"debug_state_crypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+72,0,"ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"crypto_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"block_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"mosi_encrypted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"miso_encrypted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+77,0,"encrypt_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+81,0,"crypto_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+82,0,"plaintext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("spi_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vcrypt_spi_dut___024root__trace_init_sub__TOP__crypt_spi_dut__DOT__spi_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_crypt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"debug_state_crypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("spi_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vcrypt_spi_dut___024root__trace_init_sub__TOP__crypt_spi_dut__DOT__spi_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+1,0,"state_encr",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"state_mast",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+3,0,"slave_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"lfsr_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"lfsr_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+93,0,"epherm_key_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+95,0,"epherm_key_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+10,0,"encypt_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+11,0,"encrypt_text_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+13,0,"rol2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"rol8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"rol1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"f_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"ys",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"xs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"x_new",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+97,0,"key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+22,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"count_round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+101,0,"Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+24,0,"Post_SMplaintext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+26,0,"decrpt_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"sck_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"debug_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("spi_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vcrypt_spi_dut___024root__trace_init_sub__TOP__crypt_spi_dut__DOT__spi_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+35,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+36,0,"sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+38,0,"cmd_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+40,0,"sr_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+42,0,"sr_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+44,0,"bit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+45,0,"sck_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+47,0,"sck_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"DIV_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"sck_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"ss_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"last_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"done_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"block_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"total_blocks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("spi_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vcrypt_spi_dut___024root__trace_init_sub__TOP__crypt_spi_dut__DOT__spi_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declQuad(c+86,0,"sr_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+104,0,"data_to_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"sr_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+90,0,"bit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+91,0,"ss_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_init_sub__TOP__crypt_spi_dut__DOT__spi_if__0(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root__trace_init_sub__TOP__crypt_spi_dut__DOT__spi_if__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+52,0,"sck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"mosi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+62,0,"data_to_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+64,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"block_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"miso_encrypted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mosi_encrypted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+11,0,"encrypt_text",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+58,0,"crypto_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+31,0,"ciphertext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+33,0,"plaintext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+59,0,"crypto_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_init_top(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root__trace_init_top\n"); );
    // Body
    Vcrypt_spi_dut___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcrypt_spi_dut___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcrypt_spi_dut___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_register(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vcrypt_spi_dut___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcrypt_spi_dut___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcrypt_spi_dut___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcrypt_spi_dut___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_const_0_sub_0(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root__trace_const_0\n"); );
    // Init
    Vcrypt_spi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrypt_spi_dut___024root*>(voidSelf);
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcrypt_spi_dut___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_const_0_sub_0(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+93,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m),64);
    bufp->fullQData(oldp+95,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s),64);
    bufp->fullWData(oldp+97,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__key),128);
    bufp->fullQData(oldp+101,(0x1b64db64db6ULL),42);
    bufp->fullIData(oldp+103,(0xaU),32);
    bufp->fullQData(oldp+104,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__data_to_send),64);
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_full_0_sub_0(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root__trace_full_0\n"); );
    // Init
    Vcrypt_spi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrypt_spi_dut___024root*>(voidSelf);
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcrypt_spi_dut___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_full_0_sub_0(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr),3);
    bufp->fullCData(oldp+2,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_mast),3);
    bufp->fullQData(oldp+3,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx),64);
    bufp->fullQData(oldp+5,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m),64);
    bufp->fullQData(oldp+7,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s),64);
    bufp->fullCData(oldp+9,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt),6);
    bufp->fullCData(oldp+10,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count),6);
    bufp->fullQData(oldp+11,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg),64);
    bufp->fullIData(oldp+13,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol2),32);
    bufp->fullIData(oldp+14,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol8),32);
    bufp->fullIData(oldp+15,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol1),32);
    bufp->fullIData(oldp+16,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__f_x),32);
    bufp->fullIData(oldp+17,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys),32);
    bufp->fullIData(oldp+18,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs),32);
    bufp->fullIData(oldp+19,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x_new),32);
    bufp->fullIData(oldp+20,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y),32);
    bufp->fullIData(oldp+21,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x),32);
    bufp->fullIData(oldp+22,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp),32);
    bufp->fullCData(oldp+23,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round),6);
    bufp->fullQData(oldp+24,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__Post_SMplaintext),64);
    bufp->fullBit(oldp+26,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__decrpt_signal));
    bufp->fullBit(oldp+27,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__sck_prev));
    bufp->fullCData(oldp+28,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx),6);
    bufp->fullIData(oldp+29,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk2__DOT__r),32);
    bufp->fullBit(oldp+30,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted));
    bufp->fullQData(oldp+31,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext),64);
    bufp->fullQData(oldp+33,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext),64);
    bufp->fullCData(oldp+35,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state),3);
    bufp->fullQData(oldp+36,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr),64);
    bufp->fullQData(oldp+38,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg),64);
    bufp->fullQData(oldp+40,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx),64);
    bufp->fullQData(oldp+42,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx),64);
    bufp->fullCData(oldp+44,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count),6);
    bufp->fullQData(oldp+45,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div),64);
    bufp->fullBit(oldp+47,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev));
    bufp->fullBit(oldp+48,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en));
    bufp->fullBit(oldp+49,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__ss_delay));
    bufp->fullCData(oldp+50,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt),2);
    bufp->fullSData(oldp+51,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks),16);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_ack));
    bufp->fullBit(oldp+60,(vlSelf->clk));
    bufp->fullBit(oldp+61,(vlSelf->reset_n));
    bufp->fullQData(oldp+62,(vlSelf->master_data),64);
    bufp->fullBit(oldp+64,(vlSelf->start));
    bufp->fullBit(oldp+65,(vlSelf->is_write));
    bufp->fullBit(oldp+66,(vlSelf->miso));
    bufp->fullBit(oldp+67,(vlSelf->done));
    bufp->fullBit(oldp+68,(vlSelf->sck));
    bufp->fullBit(oldp+69,(vlSelf->mosi));
    bufp->fullCData(oldp+70,(vlSelf->debug_state),3);
    bufp->fullCData(oldp+71,(vlSelf->debug_state_crypt),3);
    bufp->fullBit(oldp+72,(vlSelf->ss));
    bufp->fullBit(oldp+73,(vlSelf->crypto_done));
    bufp->fullBit(oldp+74,(vlSelf->block_ready));
    bufp->fullBit(oldp+75,(vlSelf->mosi_encrypted));
    bufp->fullBit(oldp+76,(vlSelf->miso_encrypted));
    bufp->fullQData(oldp+77,(vlSelf->encrypt_text),64);
    bufp->fullQData(oldp+79,(vlSelf->ciphertext),64);
    bufp->fullBit(oldp+81,(vlSelf->crypto_ack));
    bufp->fullQData(oldp+82,(vlSelf->plaintext),64);
    bufp->fullBit(oldp+84,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block));
    bufp->fullSData(oldp+85,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count),16);
    bufp->fullQData(oldp+86,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx),64);
    bufp->fullQData(oldp+88,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx),64);
    bufp->fullCData(oldp+90,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count),7);
    bufp->fullBit(oldp+91,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso));
}
