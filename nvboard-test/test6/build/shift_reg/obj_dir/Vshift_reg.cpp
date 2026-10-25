// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshift_reg__pch.h"

//============================================================
// Constructors

Vshift_reg::Vshift_reg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vshift_reg__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , mode{vlSymsp->TOP.mode}
    , din{vlSymsp->TOP.din}
    , serial_in{vlSymsp->TOP.serial_in}
    , dout{vlSymsp->TOP.dout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vshift_reg::Vshift_reg(const char* _vcname__)
    : Vshift_reg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vshift_reg::~Vshift_reg() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vshift_reg___024root___eval_debug_assertions(Vshift_reg___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vshift_reg___024root___eval_static(Vshift_reg___024root* vlSelf);
VL_ATTR_COLD void Vshift_reg___024root___eval_initial(Vshift_reg___024root* vlSelf);
VL_ATTR_COLD bool Vshift_reg___024root___eval_stl(Vshift_reg___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vshift_reg___024root___eval_sample(Vshift_reg___024root* vlSelf);
bool Vshift_reg___024root___eval_ico(Vshift_reg___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vshift_reg___024root___eval_act(Vshift_reg___024root* vlSelf);
bool Vshift_reg___024root___eval_inact(Vshift_reg___024root* vlSelf);
bool Vshift_reg___024root___eval_nba(Vshift_reg___024root* vlSelf);
bool Vshift_reg___024root___eval_obs(Vshift_reg___024root* vlSelf);
bool Vshift_reg___024root___eval_react(Vshift_reg___024root* vlSelf);
void Vshift_reg___024root___eval_postponed(Vshift_reg___024root* vlSelf);
VL_ATTR_COLD void Vshift_reg___024root___eval_final(Vshift_reg___024root* vlSelf);
VL_ATTR_COLD void Vshift_reg___024root___eval_dump_triggers__stl(Vshift_reg___024root* vlSelf);
VL_ATTR_COLD void Vshift_reg___024root___eval_dump_triggers__ico(Vshift_reg___024root* vlSelf);
VL_ATTR_COLD void Vshift_reg___024root___eval_dump_triggers__act(Vshift_reg___024root* vlSelf);
VL_ATTR_COLD void Vshift_reg___024root___eval_dump_triggers__nba(Vshift_reg___024root* vlSelf);
VL_ATTR_COLD void Vshift_reg___024root___eval_dump_triggers__obs(Vshift_reg___024root* vlSelf);
VL_ATTR_COLD void Vshift_reg___024root___eval_dump_triggers__react(Vshift_reg___024root* vlSelf);

void Vshift_reg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshift_reg::eval_step\n"); );
    m_evalLoop.eval();
}

void Vshift_reg::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vshift_reg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vshift_reg::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vshift_reg::evalStatic() {
    Vshift_reg___024root___eval_static(&(vlSymsp->TOP));
}

void Vshift_reg::evalInitial() {
    Vshift_reg___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vshift_reg::evalStl(bool firstIteration) {
    return Vshift_reg___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vshift_reg::evalSample() {
    Vshift_reg___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vshift_reg::evalIco(bool firstIteration) {
    return Vshift_reg___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vshift_reg::evalAct() {
    return Vshift_reg___024root___eval_act(&(vlSymsp->TOP));
}

bool Vshift_reg::evalInact() {
    return Vshift_reg___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vshift_reg::evalNba() {
    return Vshift_reg___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vshift_reg::evalObs() {
    return Vshift_reg___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vshift_reg::evalReact() {
    return Vshift_reg___024root___eval_react(&(vlSymsp->TOP));
}

void Vshift_reg::evalPostponed() {
    Vshift_reg___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vshift_reg::evalFinal() {
    Vshift_reg___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vshift_reg::dumpTriggersStl() {
    Vshift_reg___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vshift_reg::dumpTriggersIco() {
    Vshift_reg___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vshift_reg::dumpTriggersAct() {
    Vshift_reg___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vshift_reg::dumpTriggersNba() {
    Vshift_reg___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vshift_reg::dumpTriggersObs() {
    Vshift_reg___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vshift_reg::dumpTriggersReact() {
    Vshift_reg___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vshift_reg::eventsPending() { return false; }

uint64_t Vshift_reg::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vshift_reg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vshift_reg::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vshift_reg::hierName() const { return vlSymsp->name(); }
const char* Vshift_reg::modelName() const { return "Vshift_reg"; }
unsigned Vshift_reg::threads() const { return 1; }
void Vshift_reg::prepareClone() const { contextp()->prepareClone(); }
void Vshift_reg::atClone() const {
    contextp()->threadPoolpOnClone();
}
