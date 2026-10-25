// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBarrelShifter__pch.h"

//============================================================
// Constructors

VBarrelShifter::VBarrelShifter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBarrelShifter__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , din{vlSymsp->TOP.din}
    , shamt{vlSymsp->TOP.shamt}
    , lr{vlSymsp->TOP.lr}
    , al{vlSymsp->TOP.al}
    , dout{vlSymsp->TOP.dout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VBarrelShifter::VBarrelShifter(const char* _vcname__)
    : VBarrelShifter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBarrelShifter::~VBarrelShifter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBarrelShifter___024root___eval_debug_assertions(VBarrelShifter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VBarrelShifter___024root___eval_static(VBarrelShifter___024root* vlSelf);
VL_ATTR_COLD void VBarrelShifter___024root___eval_initial(VBarrelShifter___024root* vlSelf);
VL_ATTR_COLD bool VBarrelShifter___024root___eval_stl(VBarrelShifter___024root* vlSelf, CData/*0:0*/ firstIteration);
void VBarrelShifter___024root___eval_sample(VBarrelShifter___024root* vlSelf);
bool VBarrelShifter___024root___eval_ico(VBarrelShifter___024root* vlSelf, CData/*0:0*/ firstIteration);
bool VBarrelShifter___024root___eval_act(VBarrelShifter___024root* vlSelf);
bool VBarrelShifter___024root___eval_inact(VBarrelShifter___024root* vlSelf);
bool VBarrelShifter___024root___eval_nba(VBarrelShifter___024root* vlSelf);
bool VBarrelShifter___024root___eval_obs(VBarrelShifter___024root* vlSelf);
bool VBarrelShifter___024root___eval_react(VBarrelShifter___024root* vlSelf);
void VBarrelShifter___024root___eval_postponed(VBarrelShifter___024root* vlSelf);
VL_ATTR_COLD void VBarrelShifter___024root___eval_final(VBarrelShifter___024root* vlSelf);
VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__stl(VBarrelShifter___024root* vlSelf);
VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__ico(VBarrelShifter___024root* vlSelf);
VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__act(VBarrelShifter___024root* vlSelf);
VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__nba(VBarrelShifter___024root* vlSelf);
VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__obs(VBarrelShifter___024root* vlSelf);
VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__react(VBarrelShifter___024root* vlSelf);

void VBarrelShifter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBarrelShifter::eval_step\n"); );
    m_evalLoop.eval();
}

void VBarrelShifter::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    VBarrelShifter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void VBarrelShifter::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VBarrelShifter::evalStatic() {
    VBarrelShifter___024root___eval_static(&(vlSymsp->TOP));
}

void VBarrelShifter::evalInitial() {
    VBarrelShifter___024root___eval_initial(&(vlSymsp->TOP));
}

bool VBarrelShifter::evalStl(bool firstIteration) {
    return VBarrelShifter___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void VBarrelShifter::evalSample() {
    VBarrelShifter___024root___eval_sample(&(vlSymsp->TOP));
}

bool VBarrelShifter::evalIco(bool firstIteration) {
    return VBarrelShifter___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool VBarrelShifter::evalAct() {
    return VBarrelShifter___024root___eval_act(&(vlSymsp->TOP));
}

bool VBarrelShifter::evalInact() {
    return VBarrelShifter___024root___eval_inact(&(vlSymsp->TOP));
}

bool VBarrelShifter::evalNba() {
    return VBarrelShifter___024root___eval_nba(&(vlSymsp->TOP));
}

bool VBarrelShifter::evalObs() {
    return VBarrelShifter___024root___eval_obs(&(vlSymsp->TOP));
}

bool VBarrelShifter::evalReact() {
    return VBarrelShifter___024root___eval_react(&(vlSymsp->TOP));
}

void VBarrelShifter::evalPostponed() {
    VBarrelShifter___024root___eval_postponed(&(vlSymsp->TOP));
}

void VBarrelShifter::evalFinal() {
    VBarrelShifter___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VBarrelShifter::dumpTriggersStl() {
    VBarrelShifter___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VBarrelShifter::dumpTriggersIco() {
    VBarrelShifter___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VBarrelShifter::dumpTriggersAct() {
    VBarrelShifter___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VBarrelShifter::dumpTriggersNba() {
    VBarrelShifter___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VBarrelShifter::dumpTriggersObs() {
    VBarrelShifter___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VBarrelShifter::dumpTriggersReact() {
    VBarrelShifter___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool VBarrelShifter::eventsPending() { return false; }

uint64_t VBarrelShifter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBarrelShifter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBarrelShifter::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBarrelShifter::hierName() const { return vlSymsp->name(); }
const char* VBarrelShifter::modelName() const { return "VBarrelShifter"; }
unsigned VBarrelShifter::threads() const { return 1; }
void VBarrelShifter::prepareClone() const { contextp()->prepareClone(); }
void VBarrelShifter::atClone() const {
    contextp()->threadPoolpOnClone();
}
