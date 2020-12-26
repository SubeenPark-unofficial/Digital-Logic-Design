// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtop_H_
#define _Vtop_H_

#include "verilated.h"

class Vtop__Syms;

//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(clk,0,0);
    VL_IN8(push_switch6,0,0);
    VL_IN8(push_switch1,0,0);
    VL_IN8(push_switch2,0,0);
    VL_IN8(push_switch3,0,0);
    VL_IN8(push_switch4,0,0);
    VL_IN8(push_switch5,0,0);
    VL_OUT8(segment1,6,0);
    VL_OUT8(segment2,6,0);
    VL_OUT8(segment3,6,0);
    VL_OUT8(segment4,6,0);
    VL_OUT8(segment5,6,0);
    VL_OUT8(segment6,6,0);
    VL_IN8(dip_switch1,0,0);
    VL_IN8(dip_switch2,0,0);
    VL_IN8(dip_switch3,0,0);
    VL_IN8(dip_switch4,0,0);
    VL_IN8(dip_switch5,0,0);
    VL_IN8(dip_switch6,0,0);
    VL_IN8(dip_switch7,0,0);
    VL_IN8(dip_switch8,0,0);
    VL_IN8(dip_switch9,0,0);
    VL_IN8(dip_switch10,0,0);
    VL_OUT8(led1_red,0,0);
    VL_OUT8(led2_yellow,0,0);
    VL_OUT8(led3_green,0,0);
    VL_OUT8(led4_red,0,0);
    VL_OUT8(led5_yellow,0,0);
    VL_OUT8(led6_green,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 
	VL_SIG8(top__DOT__digitalClock__DOT__mode,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__set_reset,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__set_reset,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__currMode,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__finalHH,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__finalMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__finalSS,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__finalFlick,5,0);
	VL_SIG8(top__DOT__digitalClock__DOT__finalAP,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__D1,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__D2,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__D3,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__D4,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__D5,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__D6,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__state,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__state,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__submode,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__displayAP,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__ringing,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__LOAD,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curHH,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curSS,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextSS,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curSS,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upHH,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downHH,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextLoad,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__setting,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__displayAP,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__AON,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__LOAD,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curHH,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curSS,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curSS,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upHH,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downHH,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState,1,0);
	VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextLoad,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__stopwatch__DOT__PAUSE,0,0);
	VL_SIG8(top__DOT__digitalClock__DOT__stopwatch__DOT__LOAD,0,0);
    };
    struct {
	VL_SIG8(top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curSS,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMS,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMS,6,0);
	VL_SIG8(top__DOT__digitalClock__DOT__processTT__DOT__h1,3,0);
	VL_SIG8(top__DOT__digitalClock__DOT__processTT__DOT__h2,3,0);
	VL_SIG8(top__DOT__digitalClock__DOT__processTT__DOT__m1,3,0);
	VL_SIG8(top__DOT__digitalClock__DOT__processTT__DOT__m2,3,0);
	VL_SIG8(top__DOT__digitalClock__DOT__processTT__DOT__s1,3,0);
	VL_SIG8(top__DOT__digitalClock__DOT__processTT__DOT__s2,3,0);
	VL_SIG8(top__DOT__digitalClock__DOT__processTT__DOT__temp,7,0);
	VL_SIG8(top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick,0,0);
	VL_SIG(top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__tickSecond__DOT__cnt,20,0);
	VL_SIG(top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__tickHundredth__DOT__cnt,20,0);
	VL_SIG(top__DOT__digitalClock__DOT__digitFlicker__DOT__tick4flick__DOT__cnt,20,0);
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(top__DOT__digitalClock__DOT__clock__DOT____Vcellinp__timeTicker____pinNumber3,0,0);
    VL_SIG8(top__DOT__digitalClock__DOT__alarm__DOT____Vcellinp__timeKeeper____pinNumber3,0,0);
    VL_SIG8(__Vtableidx1,2,0);
    VL_SIG8(__Vtableidx2,2,0);
    VL_SIG8(__Vtableidx3,2,0);
    VL_SIG8(__Vtableidx4,2,0);
    VL_SIG8(__Vtableidx6,3,0);
    VL_SIG8(__Vtableidx7,3,0);
    VL_SIG8(__Vtableidx8,3,0);
    VL_SIG8(__Vtableidx9,3,0);
    VL_SIG8(__Vtableidx10,3,0);
    VL_SIG8(__Vtableidx11,3,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__push_switch6,0,0);
    VL_SIG8(__Vclklast__TOP__top__DOT__digitalClock__DOT__mode,0,0);
    VL_SIG8(__Vclklast__TOP__top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz,0,0);
    VL_SIG8(__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz,0,0);
    VL_SIG8(__Vclklast__TOP__top__DOT__digitalClock__DOT__alarm__DOT__set_reset,0,0);
    VL_SIG8(__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__set_reset,0,0);
    static VL_ST_SIG8(__Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state[8],1,0);
    static VL_ST_SIG8(__Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state[8],1,0);
    static VL_ST_SIG8(__Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state[8],1,0);
    static VL_ST_SIG8(__Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state[8],1,0);
    static VL_ST_SIG8(__Vtable6_top__DOT__digitalClock__DOT__D1[16],6,0);
    static VL_ST_SIG8(__Vtable7_top__DOT__digitalClock__DOT__D2[16],6,0);
    static VL_ST_SIG8(__Vtable8_top__DOT__digitalClock__DOT__D3[16],6,0);
    static VL_ST_SIG8(__Vtable9_top__DOT__digitalClock__DOT__D4[16],6,0);
    static VL_ST_SIG8(__Vtable10_top__DOT__digitalClock__DOT__D5[16],6,0);
    static VL_ST_SIG8(__Vtable11_top__DOT__digitalClock__DOT__D6[16],6,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__21(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp);
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__11(Vtop__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__12(Vtop__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__13(Vtop__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__14(Vtop__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__15(Vtop__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__16(Vtop__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__17(Vtop__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__18(Vtop__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__19(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__10(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
