// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecoder__pch.h"

//============================================================
// Constructors

Vdecoder::Vdecoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdecoder__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , x{vlSymsp->TOP.x}
    , en{vlSymsp->TOP.en}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdecoder::Vdecoder(const char* _vcname__)
    : Vdecoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdecoder::~Vdecoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdecoder___024root___eval_debug_assertions(Vdecoder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdecoder___024root___eval_static(Vdecoder___024root* vlSelf);
VL_ATTR_COLD void Vdecoder___024root___eval_initial(Vdecoder___024root* vlSelf);
VL_ATTR_COLD bool Vdecoder___024root___eval_stl(Vdecoder___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vdecoder___024root___eval_sample(Vdecoder___024root* vlSelf);
bool Vdecoder___024root___eval_ico(Vdecoder___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vdecoder___024root___eval_act(Vdecoder___024root* vlSelf);
bool Vdecoder___024root___eval_inact(Vdecoder___024root* vlSelf);
bool Vdecoder___024root___eval_nba(Vdecoder___024root* vlSelf);
bool Vdecoder___024root___eval_obs(Vdecoder___024root* vlSelf);
bool Vdecoder___024root___eval_react(Vdecoder___024root* vlSelf);
void Vdecoder___024root___eval_postponed(Vdecoder___024root* vlSelf);
VL_ATTR_COLD void Vdecoder___024root___eval_final(Vdecoder___024root* vlSelf);
VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__stl(Vdecoder___024root* vlSelf);
VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__ico(Vdecoder___024root* vlSelf);
VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__act(Vdecoder___024root* vlSelf);
VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__nba(Vdecoder___024root* vlSelf);
VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__obs(Vdecoder___024root* vlSelf);
VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__react(Vdecoder___024root* vlSelf);

void Vdecoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecoder::eval_step\n"); );
    m_evalLoop.eval();
}

void Vdecoder::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vdecoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vdecoder::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vdecoder::evalStatic() {
    Vdecoder___024root___eval_static(&(vlSymsp->TOP));
}

void Vdecoder::evalInitial() {
    Vdecoder___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vdecoder::evalStl(bool firstIteration) {
    return Vdecoder___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vdecoder::evalSample() {
    Vdecoder___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vdecoder::evalIco(bool firstIteration) {
    return Vdecoder___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vdecoder::evalAct() {
    return Vdecoder___024root___eval_act(&(vlSymsp->TOP));
}

bool Vdecoder::evalInact() {
    return Vdecoder___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vdecoder::evalNba() {
    return Vdecoder___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vdecoder::evalObs() {
    return Vdecoder___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vdecoder::evalReact() {
    return Vdecoder___024root___eval_react(&(vlSymsp->TOP));
}

void Vdecoder::evalPostponed() {
    Vdecoder___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vdecoder::evalFinal() {
    Vdecoder___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder::dumpTriggersStl() {
    Vdecoder___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder::dumpTriggersIco() {
    Vdecoder___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder::dumpTriggersAct() {
    Vdecoder___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder::dumpTriggersNba() {
    Vdecoder___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder::dumpTriggersObs() {
    Vdecoder___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder::dumpTriggersReact() {
    Vdecoder___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vdecoder::eventsPending() { return false; }

uint64_t Vdecoder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdecoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdecoder::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdecoder::hierName() const { return vlSymsp->name(); }
const char* Vdecoder::modelName() const { return "Vdecoder"; }
unsigned Vdecoder::threads() const { return 1; }
void Vdecoder::prepareClone() const { contextp()->prepareClone(); }
void Vdecoder::atClone() const {
    contextp()->threadPoolpOnClone();
}
