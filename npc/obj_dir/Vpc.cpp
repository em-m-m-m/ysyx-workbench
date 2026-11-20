// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpc__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vpc::Vpc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpc__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , din{vlSymsp->TOP.din}
    , dout{vlSymsp->TOP.dout}
    , wen{vlSymsp->TOP.wen}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vpc::Vpc(const char* _vcname__)
    : Vpc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpc::~Vpc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpc___024root___eval_debug_assertions(Vpc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vpc___024root___eval_static(Vpc___024root* vlSelf);
VL_ATTR_COLD void Vpc___024root___eval_initial(Vpc___024root* vlSelf);
VL_ATTR_COLD bool Vpc___024root___eval_stl(Vpc___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vpc___024root___eval_sample(Vpc___024root* vlSelf);
bool Vpc___024root___eval_ico(Vpc___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vpc___024root___eval_act(Vpc___024root* vlSelf);
bool Vpc___024root___eval_inact(Vpc___024root* vlSelf);
bool Vpc___024root___eval_nba(Vpc___024root* vlSelf);
bool Vpc___024root___eval_obs(Vpc___024root* vlSelf);
bool Vpc___024root___eval_react(Vpc___024root* vlSelf);
void Vpc___024root___eval_postponed(Vpc___024root* vlSelf);
VL_ATTR_COLD void Vpc___024root___eval_final(Vpc___024root* vlSelf);
VL_ATTR_COLD void Vpc___024root___eval_dump_triggers__stl(Vpc___024root* vlSelf);
VL_ATTR_COLD void Vpc___024root___eval_dump_triggers__ico(Vpc___024root* vlSelf);
VL_ATTR_COLD void Vpc___024root___eval_dump_triggers__act(Vpc___024root* vlSelf);
VL_ATTR_COLD void Vpc___024root___eval_dump_triggers__nba(Vpc___024root* vlSelf);
VL_ATTR_COLD void Vpc___024root___eval_dump_triggers__obs(Vpc___024root* vlSelf);
VL_ATTR_COLD void Vpc___024root___eval_dump_triggers__react(Vpc___024root* vlSelf);

void Vpc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpc::eval_step\n"); );
    m_evalLoop.eval();
}

void Vpc::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vpc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vpc::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vpc::evalStatic() {
    Vpc___024root___eval_static(&(vlSymsp->TOP));
}

void Vpc::evalInitial() {
    Vpc___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vpc::evalStl(bool firstIteration) {
    return Vpc___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vpc::evalSample() {
    Vpc___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vpc::evalIco(bool firstIteration) {
    return Vpc___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vpc::evalAct() {
    return Vpc___024root___eval_act(&(vlSymsp->TOP));
}

bool Vpc::evalInact() {
    return Vpc___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vpc::evalNba() {
    return Vpc___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vpc::evalObs() {
    return Vpc___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vpc::evalReact() {
    return Vpc___024root___eval_react(&(vlSymsp->TOP));
}

void Vpc::evalPostponed() {
    Vpc___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vpc::evalFinal() {
    Vpc___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpc::dumpTriggersStl() {
    Vpc___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpc::dumpTriggersIco() {
    Vpc___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpc::dumpTriggersAct() {
    Vpc___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpc::dumpTriggersNba() {
    Vpc___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpc::dumpTriggersObs() {
    Vpc___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vpc::dumpTriggersReact() {
    Vpc___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vpc::eventsPending() { return false; }

uint64_t Vpc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vpc::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpc::hierName() const { return vlSymsp->name(); }
const char* Vpc::modelName() const { return "Vpc"; }
unsigned Vpc::threads() const { return 1; }
void Vpc::prepareClone() const { contextp()->prepareClone(); }
void Vpc::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vpc___024root__trace_decl_types(VerilatedFst* tracep);

void Vpc___024root__trace_init_top(Vpc___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpc___024root*>(voidSelf);
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vpc___024root__trace_decl_types(tracep);
    Vpc___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpc___024root__trace_register(Vpc___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vpc::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpc::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 5);
    Vpc___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
