// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vspi_dut__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vspi_dut::Vspi_dut(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vspi_dut__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , miso{vlSymsp->TOP.miso}
    , sck{vlSymsp->TOP.sck}
    , ss{vlSymsp->TOP.ss}
    , mosi{vlSymsp->TOP.mosi}
    , data_to_send{vlSymsp->TOP.data_to_send}
    , data_received{vlSymsp->TOP.data_received}
    , __PVT__spi_dut__DOT__sc_interface{vlSymsp->TOP.__PVT__spi_dut__DOT__sc_interface}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vspi_dut::Vspi_dut(const char* _vcname__)
    : Vspi_dut(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vspi_dut::~Vspi_dut() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vspi_dut___024root___eval_debug_assertions(Vspi_dut___024root* vlSelf);
#endif  // VL_DEBUG
void Vspi_dut___024root___eval_static(Vspi_dut___024root* vlSelf);
void Vspi_dut___024root___eval_initial(Vspi_dut___024root* vlSelf);
void Vspi_dut___024root___eval_settle(Vspi_dut___024root* vlSelf);
void Vspi_dut___024root___eval(Vspi_dut___024root* vlSelf);

void Vspi_dut::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi_dut::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vspi_dut___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vspi_dut___024root___eval_static(&(vlSymsp->TOP));
        Vspi_dut___024root___eval_initial(&(vlSymsp->TOP));
        Vspi_dut___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vspi_dut___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vspi_dut::eventsPending() { return false; }

uint64_t Vspi_dut::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vspi_dut::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vspi_dut___024root___eval_final(Vspi_dut___024root* vlSelf);

VL_ATTR_COLD void Vspi_dut::final() {
    Vspi_dut___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vspi_dut::hierName() const { return vlSymsp->name(); }
const char* Vspi_dut::modelName() const { return "Vspi_dut"; }
unsigned Vspi_dut::threads() const { return 1; }
void Vspi_dut::prepareClone() const { contextp()->prepareClone(); }
void Vspi_dut::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vspi_dut::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vspi_dut___024root__trace_decl_types(VerilatedVcd* tracep);

void Vspi_dut___024root__trace_init_top(Vspi_dut___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vspi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_dut___024root*>(voidSelf);
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_dut___024root__trace_decl_types(tracep);
    Vspi_dut___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_dut___024root__trace_register(Vspi_dut___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vspi_dut::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vspi_dut::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vspi_dut___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
