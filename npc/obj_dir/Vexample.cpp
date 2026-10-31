// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vexample__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vexample::Vexample(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vexample__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vexample::Vexample(const char* _vcname__)
    : Vexample(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vexample::~Vexample() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vexample___024root___eval_debug_assertions(Vexample___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vexample___024root___eval_static(Vexample___024root* vlSelf);
VL_ATTR_COLD void Vexample___024root___eval_initial(Vexample___024root* vlSelf);
VL_ATTR_COLD bool Vexample___024root___eval_stl(Vexample___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vexample___024root___eval_sample(Vexample___024root* vlSelf);
bool Vexample___024root___eval_ico(Vexample___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vexample___024root___eval_act(Vexample___024root* vlSelf);
bool Vexample___024root___eval_inact(Vexample___024root* vlSelf);
bool Vexample___024root___eval_nba(Vexample___024root* vlSelf);
bool Vexample___024root___eval_obs(Vexample___024root* vlSelf);
bool Vexample___024root___eval_react(Vexample___024root* vlSelf);
void Vexample___024root___eval_postponed(Vexample___024root* vlSelf);
VL_ATTR_COLD void Vexample___024root___eval_final(Vexample___024root* vlSelf);
VL_ATTR_COLD void Vexample___024root___eval_dump_triggers__stl(Vexample___024root* vlSelf);
VL_ATTR_COLD void Vexample___024root___eval_dump_triggers__ico(Vexample___024root* vlSelf);
VL_ATTR_COLD void Vexample___024root___eval_dump_triggers__act(Vexample___024root* vlSelf);
VL_ATTR_COLD void Vexample___024root___eval_dump_triggers__nba(Vexample___024root* vlSelf);
VL_ATTR_COLD void Vexample___024root___eval_dump_triggers__obs(Vexample___024root* vlSelf);
VL_ATTR_COLD void Vexample___024root___eval_dump_triggers__react(Vexample___024root* vlSelf);

void Vexample::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vexample::eval_step\n"); );
    m_evalLoop.eval();
}

void Vexample::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vexample___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vexample::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vexample::evalStatic() {
    Vexample___024root___eval_static(&(vlSymsp->TOP));
}

void Vexample::evalInitial() {
    Vexample___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vexample::evalStl(bool firstIteration) {
    return Vexample___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vexample::evalSample() {
    Vexample___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vexample::evalIco(bool firstIteration) {
    return Vexample___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vexample::evalAct() {
    return Vexample___024root___eval_act(&(vlSymsp->TOP));
}

bool Vexample::evalInact() {
    return Vexample___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vexample::evalNba() {
    return Vexample___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vexample::evalObs() {
    return Vexample___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vexample::evalReact() {
    return Vexample___024root___eval_react(&(vlSymsp->TOP));
}

void Vexample::evalPostponed() {
    Vexample___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vexample::evalFinal() {
    Vexample___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vexample::dumpTriggersStl() {
    Vexample___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vexample::dumpTriggersIco() {
    Vexample___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vexample::dumpTriggersAct() {
    Vexample___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vexample::dumpTriggersNba() {
    Vexample___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vexample::dumpTriggersObs() {
    Vexample___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vexample::dumpTriggersReact() {
    Vexample___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vexample::eventsPending() { return false; }

uint64_t Vexample::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vexample::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vexample::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vexample::hierName() const { return vlSymsp->name(); }
const char* Vexample::modelName() const { return "Vexample"; }
unsigned Vexample::threads() const { return 1; }
void Vexample::prepareClone() const { contextp()->prepareClone(); }
void Vexample::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vexample::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vexample___024root__trace_decl_types(VerilatedFst* tracep);

void Vexample___024root__trace_init_top(Vexample___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vexample___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexample___024root*>(voidSelf);
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vexample___024root__trace_decl_types(tracep);
    Vexample___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vexample___024root__trace_register(Vexample___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vexample::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vexample::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 3);
    Vexample___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
