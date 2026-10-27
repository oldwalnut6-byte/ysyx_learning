// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFSM_bin__pch.h"

//============================================================
// Constructors

VFSM_bin::VFSM_bin(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFSM_bin__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , in{vlSymsp->TOP.in}
    , reset{vlSymsp->TOP.reset}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VFSM_bin::VFSM_bin(const char* _vcname__)
    : VFSM_bin(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFSM_bin::~VFSM_bin() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFSM_bin___024root___eval_debug_assertions(VFSM_bin___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___eval_static(VFSM_bin___024root* vlSelf);
VL_ATTR_COLD void VFSM_bin___024root___eval_initial(VFSM_bin___024root* vlSelf);
VL_ATTR_COLD bool VFSM_bin___024root___eval_stl(VFSM_bin___024root* vlSelf, CData/*0:0*/ firstIteration);
void VFSM_bin___024root___eval_sample(VFSM_bin___024root* vlSelf);
bool VFSM_bin___024root___eval_ico(VFSM_bin___024root* vlSelf, CData/*0:0*/ firstIteration);
bool VFSM_bin___024root___eval_act(VFSM_bin___024root* vlSelf);
bool VFSM_bin___024root___eval_inact(VFSM_bin___024root* vlSelf);
bool VFSM_bin___024root___eval_nba(VFSM_bin___024root* vlSelf);
bool VFSM_bin___024root___eval_obs(VFSM_bin___024root* vlSelf);
bool VFSM_bin___024root___eval_react(VFSM_bin___024root* vlSelf);
void VFSM_bin___024root___eval_postponed(VFSM_bin___024root* vlSelf);
VL_ATTR_COLD void VFSM_bin___024root___eval_final(VFSM_bin___024root* vlSelf);
VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__stl(VFSM_bin___024root* vlSelf);
VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__ico(VFSM_bin___024root* vlSelf);
VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__act(VFSM_bin___024root* vlSelf);
VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__nba(VFSM_bin___024root* vlSelf);
VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__obs(VFSM_bin___024root* vlSelf);
VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__react(VFSM_bin___024root* vlSelf);

void VFSM_bin::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFSM_bin::eval_step\n"); );
    m_evalLoop.eval();
}

void VFSM_bin::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    VFSM_bin___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void VFSM_bin::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VFSM_bin::evalStatic() {
    VFSM_bin___024root___eval_static(&(vlSymsp->TOP));
}

void VFSM_bin::evalInitial() {
    VFSM_bin___024root___eval_initial(&(vlSymsp->TOP));
}

bool VFSM_bin::evalStl(bool firstIteration) {
    return VFSM_bin___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void VFSM_bin::evalSample() {
    VFSM_bin___024root___eval_sample(&(vlSymsp->TOP));
}

bool VFSM_bin::evalIco(bool firstIteration) {
    return VFSM_bin___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool VFSM_bin::evalAct() {
    return VFSM_bin___024root___eval_act(&(vlSymsp->TOP));
}

bool VFSM_bin::evalInact() {
    return VFSM_bin___024root___eval_inact(&(vlSymsp->TOP));
}

bool VFSM_bin::evalNba() {
    return VFSM_bin___024root___eval_nba(&(vlSymsp->TOP));
}

bool VFSM_bin::evalObs() {
    return VFSM_bin___024root___eval_obs(&(vlSymsp->TOP));
}

bool VFSM_bin::evalReact() {
    return VFSM_bin___024root___eval_react(&(vlSymsp->TOP));
}

void VFSM_bin::evalPostponed() {
    VFSM_bin___024root___eval_postponed(&(vlSymsp->TOP));
}

void VFSM_bin::evalFinal() {
    VFSM_bin___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VFSM_bin::dumpTriggersStl() {
    VFSM_bin___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VFSM_bin::dumpTriggersIco() {
    VFSM_bin___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VFSM_bin::dumpTriggersAct() {
    VFSM_bin___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VFSM_bin::dumpTriggersNba() {
    VFSM_bin___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VFSM_bin::dumpTriggersObs() {
    VFSM_bin___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VFSM_bin::dumpTriggersReact() {
    VFSM_bin___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool VFSM_bin::eventsPending() { return false; }

uint64_t VFSM_bin::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFSM_bin::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VFSM_bin::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFSM_bin::hierName() const { return vlSymsp->name(); }
const char* VFSM_bin::modelName() const { return "VFSM_bin"; }
unsigned VFSM_bin::threads() const { return 1; }
void VFSM_bin::prepareClone() const { contextp()->prepareClone(); }
void VFSM_bin::atClone() const {
    contextp()->threadPoolpOnClone();
}
