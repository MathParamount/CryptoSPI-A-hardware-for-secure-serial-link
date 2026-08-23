// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcrypt_spi_dut.h for the primary calling header

#ifndef VERILATED_VCRYPT_SPI_DUT___024ROOT_H_
#define VERILATED_VCRYPT_SPI_DUT___024ROOT_H_  // guard

#include "verilated.h"
class Vcrypt_spi_dut_spi_bus_if;


class Vcrypt_spi_dut__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcrypt_spi_dut___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcrypt_spi_dut_spi_bus_if* __PVT__crypt_spi_dut__DOT__spi_if;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset_n,0,0);
        VL_IN8(start,0,0);
        VL_IN8(is_write,0,0);
        VL_OUT8(miso,0,0);
        VL_OUT8(done,0,0);
        VL_OUT8(sck,0,0);
        VL_OUT8(mosi,0,0);
        VL_OUT8(debug_state,2,0);
        VL_OUT8(debug_state_crypt,2,0);
        VL_OUT8(ss,0,0);
        VL_OUT8(crypto_done,0,0);
        VL_OUT8(block_ready,0,0);
        VL_OUT8(mosi_encrypted,0,0);
        VL_OUT8(miso_encrypted,0,0);
        VL_OUT8(crypto_ack,0,0);
        CData/*2:0*/ crypt_spi_dut__DOT__u_master__DOT__state;
        CData/*5:0*/ crypt_spi_dut__DOT__u_master__DOT__bit_count;
        CData/*0:0*/ crypt_spi_dut__DOT__u_master__DOT__sck_prev;
        CData/*0:0*/ crypt_spi_dut__DOT__u_master__DOT__sck_en;
        CData/*0:0*/ crypt_spi_dut__DOT__u_master__DOT__ss_delay;
        CData/*0:0*/ crypt_spi_dut__DOT__u_master__DOT__last_block;
        CData/*1:0*/ crypt_spi_dut__DOT__u_master__DOT__done_cnt;
        CData/*6:0*/ crypt_spi_dut__DOT__u_slave__DOT__bit_count;
        CData/*0:0*/ crypt_spi_dut__DOT__u_slave__DOT__ss_prev;
        CData/*0:0*/ crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d96565c__0;
        CData/*2:0*/ crypt_spi_dut__DOT__u_crypt__DOT__state_encr;
        CData/*2:0*/ crypt_spi_dut__DOT__u_crypt__DOT__state_mast;
        CData/*5:0*/ crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt;
        CData/*5:0*/ crypt_spi_dut__DOT__u_crypt__DOT__encypt_count;
        CData/*5:0*/ crypt_spi_dut__DOT__u_crypt__DOT__count_round;
        CData/*0:0*/ crypt_spi_dut__DOT__u_crypt__DOT__decrpt_signal;
        CData/*0:0*/ crypt_spi_dut__DOT__u_crypt__DOT__sck_prev;
        CData/*5:0*/ crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx;
        CData/*0:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev;
        CData/*2:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__state;
        CData/*5:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count;
        CData/*1:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt;
        CData/*0:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__ss_delay;
        CData/*0:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ crypt_spi_dut__DOT__u_master__DOT__block_count;
        SData/*15:0*/ crypt_spi_dut__DOT__u_master__DOT__total_blocks;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__6;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__5;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__4;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__3;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__2;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__1;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__0;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT__rol2;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT__rol8;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT__rol1;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT__f_x;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT__ys;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT__xs;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT__x_new;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT__y;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT__x;
        VlWide<4>/*127:0*/ crypt_spi_dut__DOT__u_crypt__DOT__key;
    };
    struct {
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT__temp;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk2__DOT__r;
        IData/*31:0*/ crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h6c53c1e8__0;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(master_data,63,0);
        VL_OUT64(encrypt_text,63,0);
        VL_OUT64(ciphertext,63,0);
        VL_OUT64(plaintext,63,0);
        QData/*63:0*/ crypt_spi_dut__DOT__u_master__DOT__sr;
        QData/*63:0*/ crypt_spi_dut__DOT__u_master__DOT__cmd_reg;
        QData/*63:0*/ crypt_spi_dut__DOT__u_master__DOT__sr_tx;
        QData/*63:0*/ crypt_spi_dut__DOT__u_master__DOT__sr_rx;
        QData/*63:0*/ crypt_spi_dut__DOT__u_master__DOT__sck_div;
        QData/*63:0*/ crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
        QData/*63:0*/ crypt_spi_dut__DOT__u_slave__DOT__data_to_send;
        QData/*63:0*/ crypt_spi_dut__DOT__u_slave__DOT__sr_tx;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__slave_rx;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__Post_SMplaintext;
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div;
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx;
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx;
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx;
        VlUnpacked<IData/*31:0*/, 42> crypt_spi_dut__DOT__u_crypt__DOT__round_key;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcrypt_spi_dut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcrypt_spi_dut___024root(Vcrypt_spi_dut__Syms* symsp, const char* v__name);
    ~Vcrypt_spi_dut___024root();
    VL_UNCOPYABLE(Vcrypt_spi_dut___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
