// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcrypt_spi_dut__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vcrypt_spi_dut::Vcrypt_spi_dut(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcrypt_spi_dut__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , start{vlSymsp->TOP.start}
    , miso{vlSymsp->TOP.miso}
    , done{vlSymsp->TOP.done}
    , sck{vlSymsp->TOP.sck}
    , mosi{vlSymsp->TOP.mosi}
    , debug_state{vlSymsp->TOP.debug_state}
    , debug_state_crypt{vlSymsp->TOP.debug_state_crypt}
    , ss{vlSymsp->TOP.ss}
    , crypto_done{vlSymsp->TOP.crypto_done}
    , block_ready{vlSymsp->TOP.block_ready}
    , mosi_encrypted{vlSymsp->TOP.mosi_encrypted}
    , miso_encrypted{vlSymsp->TOP.miso_encrypted}
    , crypto_ack{vlSymsp->TOP.crypto_ack}
    , master_data{vlSymsp->TOP.master_data}
    , encrypt_text{vlSymsp->TOP.encrypt_text}
    , ciphertext{vlSymsp->TOP.ciphertext}
    , plaintext{vlSymsp->TOP.plaintext}
    , __PVT__crypt_spi_dut__DOT__spi_if{vlSymsp->TOP.__PVT__crypt_spi_dut__DOT__spi_if}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcrypt_spi_dut::Vcrypt_spi_dut(const char* _vcname__)
    : Vcrypt_spi_dut(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcrypt_spi_dut::~Vcrypt_spi_dut() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcrypt_spi_dut___024root___eval_debug_assertions(Vcrypt_spi_dut___024root* vlSelf);
#endif  // VL_DEBUG
void Vcrypt_spi_dut___024root___eval_static(Vcrypt_spi_dut___024root* vlSelf);
void Vcrypt_spi_dut___024root___eval_initial(Vcrypt_spi_dut___024root* vlSelf);
void Vcrypt_spi_dut___024root___eval_settle(Vcrypt_spi_dut___024root* vlSelf);
void Vcrypt_spi_dut___024root___eval(Vcrypt_spi_dut___024root* vlSelf);

void Vcrypt_spi_dut::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcrypt_spi_dut::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcrypt_spi_dut___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcrypt_spi_dut___024root___eval_static(&(vlSymsp->TOP));
        Vcrypt_spi_dut___024root___eval_initial(&(vlSymsp->TOP));
        Vcrypt_spi_dut___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcrypt_spi_dut___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcrypt_spi_dut::eventsPending() { return false; }

uint64_t Vcrypt_spi_dut::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcrypt_spi_dut::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcrypt_spi_dut___024root___eval_final(Vcrypt_spi_dut___024root* vlSelf);

VL_ATTR_COLD void Vcrypt_spi_dut::final() {
    Vcrypt_spi_dut___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcrypt_spi_dut::hierName() const { return vlSymsp->name(); }
const char* Vcrypt_spi_dut::modelName() const { return "Vcrypt_spi_dut"; }
unsigned Vcrypt_spi_dut::threads() const { return 1; }
void Vcrypt_spi_dut::prepareClone() const { contextp()->prepareClone(); }
void Vcrypt_spi_dut::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcrypt_spi_dut::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcrypt_spi_dut___024root__trace_decl_types(VerilatedFst* tracep);

void Vcrypt_spi_dut___024root__trace_init_top(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcrypt_spi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrypt_spi_dut___024root*>(voidSelf);
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcrypt_spi_dut___024root__trace_decl_types(tracep);
    Vcrypt_spi_dut___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root__trace_register(Vcrypt_spi_dut___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vcrypt_spi_dut::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcrypt_spi_dut::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcrypt_spi_dut___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
