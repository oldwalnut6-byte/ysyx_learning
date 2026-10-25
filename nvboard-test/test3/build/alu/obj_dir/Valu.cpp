// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu__pch.h"

//============================================================
// Constructors

Valu::Valu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , instr{vlSymsp->TOP.instr}
    , alu_result{vlSymsp->TOP.alu_result}
    , cmp_less{vlSymsp->TOP.cmp_less}
    , cmp_equal{vlSymsp->TOP.cmp_equal}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valu::Valu(const char* _vcname__)
    : Valu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu::~Valu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Valu___024root___eval_static(Valu___024root* vlSelf);
VL_ATTR_COLD void Valu___024root___eval_initial(Valu___024root* vlSelf);
VL_ATTR_COLD bool Valu___024root___eval_stl(Valu___024root* vlSelf, CData/*0:0*/ firstIteration);
void Valu___024root___eval_sample(Valu___024root* vlSelf);
bool Valu___024root___eval_ico(Valu___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Valu___024root___eval_act(Valu___024root* vlSelf);
bool Valu___024root___eval_inact(Valu___024root* vlSelf);
bool Valu___024root___eval_nba(Valu___024root* vlSelf);
bool Valu___024root___eval_obs(Valu___024root* vlSelf);
bool Valu___024root___eval_react(Valu___024root* vlSelf);
void Valu___024root___eval_postponed(Valu___024root* vlSelf);
VL_ATTR_COLD void Valu___024root___eval_final(Valu___024root* vlSelf);
VL_ATTR_COLD void Valu___024root___eval_dump_triggers__stl(Valu___024root* vlSelf);
VL_ATTR_COLD void Valu___024root___eval_dump_triggers__ico(Valu___024root* vlSelf);
VL_ATTR_COLD void Valu___024root___eval_dump_triggers__act(Valu___024root* vlSelf);
VL_ATTR_COLD void Valu___024root___eval_dump_triggers__nba(Valu___024root* vlSelf);
VL_ATTR_COLD void Valu___024root___eval_dump_triggers__obs(Valu___024root* vlSelf);
VL_ATTR_COLD void Valu___024root___eval_dump_triggers__react(Valu___024root* vlSelf);

void Valu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu::eval_step\n"); );
    m_evalLoop.eval();
}

void Valu::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Valu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Valu::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Valu::evalStatic() {
    Valu___024root___eval_static(&(vlSymsp->TOP));
}

void Valu::evalInitial() {
    Valu___024root___eval_initial(&(vlSymsp->TOP));
}

bool Valu::evalStl(bool firstIteration) {
    return Valu___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Valu::evalSample() {
    Valu___024root___eval_sample(&(vlSymsp->TOP));
}

bool Valu::evalIco(bool firstIteration) {
    return Valu___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Valu::evalAct() {
    return Valu___024root___eval_act(&(vlSymsp->TOP));
}

bool Valu::evalInact() {
    return Valu___024root___eval_inact(&(vlSymsp->TOP));
}

bool Valu::evalNba() {
    return Valu___024root___eval_nba(&(vlSymsp->TOP));
}

bool Valu::evalObs() {
    return Valu___024root___eval_obs(&(vlSymsp->TOP));
}

bool Valu::evalReact() {
    return Valu___024root___eval_react(&(vlSymsp->TOP));
}

void Valu::evalPostponed() {
    Valu___024root___eval_postponed(&(vlSymsp->TOP));
}

void Valu::evalFinal() {
    Valu___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu::dumpTriggersStl() {
    Valu___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu::dumpTriggersIco() {
    Valu___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu::dumpTriggersAct() {
    Valu___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu::dumpTriggersNba() {
    Valu___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu::dumpTriggersObs() {
    Valu___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu::dumpTriggersReact() {
    Valu___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Valu::eventsPending() { return false; }

uint64_t Valu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Valu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Valu::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu::hierName() const { return vlSymsp->name(); }
const char* Valu::modelName() const { return "Valu"; }
unsigned Valu::threads() const { return 1; }
void Valu::prepareClone() const { contextp()->prepareClone(); }
void Valu::atClone() const {
    contextp()->threadPoolpOnClone();
}
