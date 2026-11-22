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
    tracep->declBit(c+71,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+73,0,"master_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+75,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"is_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+77,0,"slaver_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+79,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"debug_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+84,0,"debug_state_crypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+85,0,"ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"crypto_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"block_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"mosi_encrypted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"miso_encrypted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+90,0,"encrypt_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+92,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+94,0,"crypto_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+95,0,"plaintext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+97,0,"data_received",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("crypt_spi_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+73,0,"master_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+75,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"is_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+77,0,"slaver_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+79,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"debug_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+84,0,"debug_state_crypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+85,0,"ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"crypto_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"block_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"mosi_encrypted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"miso_encrypted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+90,0,"encrypt_text",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+92,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+94,0,"crypto_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+95,0,"plaintext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+97,0,"data_received",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("spi_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vcrypt_spi_dut___024root__trace_init_sub__TOP__crypt_spi_dut__DOT__spi_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_crypt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"debug_state_crypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("spi_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vcrypt_spi_dut___024root__trace_init_sub__TOP__crypt_spi_dut__DOT__spi_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+1,0,"state_encr",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"state_mast",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+3,0,"slave_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"lfsr_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"lfsr_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"lfsr_m_key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+11,0,"lfsr_s_key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+105,0,"epherm_key_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+107,0,"epherm_key_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+12,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+13,0,"encypt_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+14,0,"encrypt_text_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+16,0,"rol2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"rol8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"rol1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"f_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"ys",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"xs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"x_new",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"ys_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"xs_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+110,0,"key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+24,0,"rol2_decrp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"rol8_decrp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"rol1_decrp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"xs_ancient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"ys_ancient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"count_round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+116,0,"Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+29,0,"Post_SMplaintext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+31,0,"decrpt_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"sck_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+33,0,"enc_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"debug_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("spi_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vcrypt_spi_dut___024root__trace_init_sub__TOP__crypt_spi_dut__DOT__spi_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+43,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+44,0,"sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+46,0,"cmd_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+48,0,"sr_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+50,0,"sr_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+52,0,"bit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+53,0,"sck_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+55,0,"sck_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"DIV_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"sck_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"ss_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"last_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"done_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"block_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+59,0,"total_blocks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+72,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("spi_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vcrypt_spi_dut___024root__trace_init_sub__TOP__crypt_spi_dut__DOT__spi_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declQuad(c+39,0,"sr_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+119,0,"data_to_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+101,0,"sr_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+41,0,"bit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+103,0,"miso_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"ss_prev_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"ss_prev_ng",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBit(c+60,0,"sck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"mosi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+73,0,"data_to_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+75,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"is_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"block_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"miso_encrypted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"mosi_encrypted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+14,0,"encrypt_text",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+67,0,"crypto_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+35,0,"ciphertext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+37,0,"plaintext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+68,0,"crypto_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+77,0,"slave_data_to_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+69,0,"data_received",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
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
    bufp->fullQData(oldp+105,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m),64);
    bufp->fullQData(oldp+107,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s),64);
    bufp->fullIData(oldp+109,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__f_x),32);
    bufp->fullWData(oldp+110,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__key),128);
    bufp->fullIData(oldp+114,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs_ancient),32);
    bufp->fullIData(oldp+115,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys_ancient),32);
    bufp->fullQData(oldp+116,(0x2bdc0d26284ULL),42);
    bufp->fullIData(oldp+118,(0xaU),32);
    bufp->fullQData(oldp+119,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__data_to_send),64);
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
    bufp->fullQData(oldp+9,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m_key),64);
    bufp->fullIData(oldp+11,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s_key),32);
    bufp->fullCData(oldp+12,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt),7);
    bufp->fullCData(oldp+13,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count),6);
    bufp->fullQData(oldp+14,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg),64);
    bufp->fullIData(oldp+16,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol2),32);
    bufp->fullIData(oldp+17,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol8),32);
    bufp->fullIData(oldp+18,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol1),32);
    bufp->fullIData(oldp+19,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys),32);
    bufp->fullIData(oldp+20,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs),32);
    bufp->fullIData(oldp+21,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x_new),32);
    bufp->fullIData(oldp+22,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys_dec),32);
    bufp->fullIData(oldp+23,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs_dec),32);
    bufp->fullIData(oldp+24,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol2_decrp),32);
    bufp->fullIData(oldp+25,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol8_decrp),32);
    bufp->fullIData(oldp+26,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol1_decrp),32);
    bufp->fullIData(oldp+27,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp),32);
    bufp->fullCData(oldp+28,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round),6);
    bufp->fullQData(oldp+29,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__Post_SMplaintext),64);
    bufp->fullBit(oldp+31,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__decrpt_signal));
    bufp->fullBit(oldp+32,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__sck_prev));
    bufp->fullQData(oldp+33,(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__enc_temp),64);
    bufp->fullQData(oldp+35,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext),64);
    bufp->fullQData(oldp+37,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext),64);
    bufp->fullQData(oldp+39,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx),64);
    bufp->fullCData(oldp+41,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count),7);
    bufp->fullBit(oldp+42,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev_pos));
    bufp->fullCData(oldp+43,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state),3);
    bufp->fullQData(oldp+44,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr),64);
    bufp->fullQData(oldp+46,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg),64);
    bufp->fullQData(oldp+48,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx),64);
    bufp->fullQData(oldp+50,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx),64);
    bufp->fullCData(oldp+52,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count),7);
    bufp->fullQData(oldp+53,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div),64);
    bufp->fullBit(oldp+55,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev));
    bufp->fullBit(oldp+56,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en));
    bufp->fullBit(oldp+57,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__ss_delay));
    bufp->fullCData(oldp+58,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt),2);
    bufp->fullSData(oldp+59,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks),16);
    bufp->fullBit(oldp+60,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_ack));
    bufp->fullQData(oldp+69,(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.data_received),64);
    bufp->fullBit(oldp+71,(vlSelf->clk));
    bufp->fullBit(oldp+72,(vlSelf->reset_n));
    bufp->fullQData(oldp+73,(vlSelf->master_data),64);
    bufp->fullBit(oldp+75,(vlSelf->start));
    bufp->fullBit(oldp+76,(vlSelf->is_write));
    bufp->fullQData(oldp+77,(vlSelf->slaver_data),64);
    bufp->fullBit(oldp+79,(vlSelf->miso));
    bufp->fullBit(oldp+80,(vlSelf->done));
    bufp->fullBit(oldp+81,(vlSelf->sck));
    bufp->fullBit(oldp+82,(vlSelf->mosi));
    bufp->fullCData(oldp+83,(vlSelf->debug_state),3);
    bufp->fullCData(oldp+84,(vlSelf->debug_state_crypt),3);
    bufp->fullBit(oldp+85,(vlSelf->ss));
    bufp->fullBit(oldp+86,(vlSelf->crypto_done));
    bufp->fullBit(oldp+87,(vlSelf->block_ready));
    bufp->fullBit(oldp+88,(vlSelf->mosi_encrypted));
    bufp->fullBit(oldp+89,(vlSelf->miso_encrypted));
    bufp->fullQData(oldp+90,(vlSelf->encrypt_text),64);
    bufp->fullQData(oldp+92,(vlSelf->ciphertext),64);
    bufp->fullBit(oldp+94,(vlSelf->crypto_ack));
    bufp->fullQData(oldp+95,(vlSelf->plaintext),64);
    bufp->fullQData(oldp+97,(vlSelf->data_received),64);
    bufp->fullBit(oldp+99,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block));
    bufp->fullSData(oldp+100,(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count),16);
    bufp->fullQData(oldp+101,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx),64);
    bufp->fullBit(oldp+103,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__miso_reg));
    bufp->fullBit(oldp+104,(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev_ng));
}
