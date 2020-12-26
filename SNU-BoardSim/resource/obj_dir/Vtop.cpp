// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"


//--------------------
// STATIC VARIABLES

// Begin mtask footprint  all: 
VL_ST_SIG8(Vtop::__Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state[8],1,0);
VL_ST_SIG8(Vtop::__Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state[8],1,0);
VL_ST_SIG8(Vtop::__Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state[8],1,0);
VL_ST_SIG8(Vtop::__Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state[8],1,0);
VL_ST_SIG8(Vtop::__Vtable6_top__DOT__digitalClock__DOT__D1[16],6,0);
VL_ST_SIG8(Vtop::__Vtable7_top__DOT__digitalClock__DOT__D2[16],6,0);
VL_ST_SIG8(Vtop::__Vtable8_top__DOT__digitalClock__DOT__D3[16],6,0);
VL_ST_SIG8(Vtop::__Vtable9_top__DOT__digitalClock__DOT__D4[16],6,0);
VL_ST_SIG8(Vtop::__Vtable10_top__DOT__digitalClock__DOT__D5[16],6,0);
VL_ST_SIG8(Vtop::__Vtable11_top__DOT__digitalClock__DOT__D6[16],6,0);

//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../..//ClockMode.v:47
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__ringing = 0U;
    // INITIAL at ../..//StopTicker.v:44
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMM = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curSS = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMS = 0U;
    // INITIAL at ../..//Tick4Flick.v:29
    vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__tick4flick__DOT__cnt = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick = 0U;
    // INITIAL at ../..//ClockMode.v:42
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP = 0U;
    // INITIAL at ../..//AlarmMode.v:42
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP = 0U;
    // INITIAL at ../..//AlarmMode.v:43
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON = 0U;
    // INITIAL at ../..//TimeKeeper.v:38
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curHH = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curMM = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curSS = 0U;
    // INITIAL at ../..//TimeTicker.v:45
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curHH = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curMM = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curSS = 0U;
    // INITIAL at ../..//ClockMode.v:41
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode = 0U;
    // INITIAL at ../..//AlarmMode.v:41
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting = 0U;
    // INITIAL at ../..//TimeSetter.v:122
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curSS = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__LOAD = 0U;
    // INITIAL at ../..//TimeSetter.v:122
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curSS = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__LOAD = 0U;
    // INITIAL at ../..//TickHundredth.v:29
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__tickHundredth__DOT__cnt = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz = 0U;
    // INITIAL at ../..//TickSecond.v:29
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__tickSecond__DOT__cnt = 0U;
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz = 0U;
    // INITIAL at ../..//ClockMode.v:48
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset = 0U;
    // INITIAL at ../..//AlarmMode.v:40
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset = 0U;
    // INITIAL at ../..//StopMode.v:37
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__PAUSE = 1U;
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__LOAD = 1U;
    // INITIAL at ../..//DigitalClock.v:45
    vlTOPp->top__DOT__digitalClock__DOT__currMode = 0U;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//StopTicker.v:87
    if (vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__LOAD) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMM = 0U;
    }
    // ALWAYS at ../..//StopTicker.v:87
    if (vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__LOAD) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMS = 0U;
    }
    // ALWAYS at ../..//StopTicker.v:87
    if (vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__LOAD) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curSS = 0U;
    }
    // ALWAYS at ../..//TimeTicker.v:83
    if (vlTOPp->top__DOT__digitalClock__DOT__clock__DOT____Vcellinp__timeTicker____pinNumber3) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curSS 
	    = vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curSS;
    }
    // ALWAYS at ../..//TimeTicker.v:83
    if (vlTOPp->top__DOT__digitalClock__DOT__clock__DOT____Vcellinp__timeTicker____pinNumber3) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curMM 
	    = vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM;
    }
    // ALWAYS at ../..//TimeTicker.v:83
    if (vlTOPp->top__DOT__digitalClock__DOT__clock__DOT____Vcellinp__timeTicker____pinNumber3) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curHH 
	    = vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH;
    }
    // ALWAYS at ../..//PulseGenerator.v:50
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__state 
	= ((IData)(vlTOPp->push_switch6) ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state));
    vlTOPp->top__DOT__digitalClock__DOT__mode = (2U 
						 == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__state));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//Tick4Flick.v:34
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__tick4flick__DOT__cnt = 0U;
	vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick = 0U;
    } else {
	vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__tick4flick__DOT__cnt 
	    = (0x1fffffU & ((IData)(1U) + vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__tick4flick__DOT__cnt));
	if ((0x3d090U <= vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__tick4flick__DOT__cnt)) {
	    vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick 
		= (1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)));
	    vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__tick4flick__DOT__cnt = 0U;
	}
    }
    // ALWAYS at ../..//TimeKeeper.v:44
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curHH = 0U;
    } else {
	if (vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT____Vcellinp__timeKeeper____pinNumber3) {
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curHH 
		= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH;
	}
    }
    // ALWAYS at ../..//TimeKeeper.v:44
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curMM = 0U;
    } else {
	if (vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT____Vcellinp__timeKeeper____pinNumber3) {
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curMM 
		= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM;
	}
    }
    // ALWAYS at ../..//StopMode.v:42
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__PAUSE = 1U;
    } else {
	if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
		vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__PAUSE 
		    = (1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__PAUSE)));
	    }
	}
    }
    // ALWAYS at ../..//StopMode.v:42
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__LOAD = 1U;
    } else {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__LOAD = 0U;
	if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    if ((2U != (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
		if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state))) {
		    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__LOAD = 1U;
		}
	    }
	}
    }
    // ALWAYS at ../..//TickHundredth.v:34
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__tickHundredth__DOT__cnt = 0U;
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz = 0U;
    } else {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__tickHundredth__DOT__cnt 
	    = (0x1fffffU & ((IData)(1U) + vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__tickHundredth__DOT__cnt));
	if ((0x2710U <= vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__tickHundredth__DOT__cnt)) {
	    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz 
		= (1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz)));
	    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__tickHundredth__DOT__cnt = 0U;
	}
    }
    // ALWAYS at ../..//TickSecond.v:34
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__tickSecond__DOT__cnt = 0U;
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz = 0U;
    } else {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__tickSecond__DOT__cnt 
	    = (0x1fffffU & ((IData)(1U) + vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__tickSecond__DOT__cnt));
	if ((0xf4240U <= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__tickSecond__DOT__cnt)) {
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz 
		= (1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz)));
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__tickSecond__DOT__cnt = 0U;
	}
    }
    // ALWAYS at ../..//AlarmMode.v:66
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP = 0U;
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting = 0U;
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON = 0U;
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset = 1U;
    } else {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset = 0U;
	if ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    if (vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__LOAD) {
		vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting = 0U;
		vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON = 1U;
	    } else {
		if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
		    if (vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting) {
			vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting = 1U;
		    } else {
			vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting = 1U;
			vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset = 1U;
			vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON = 0U;
		    }
		} else {
		    if ((1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting)))) {
			if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state))) {
			    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP 
				= (1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP)));
			}
			if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__state))) {
			    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON = 0U;
			}
		    }
		}
	    }
	} else {
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP 
		= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP;
	}
    }
    // ALWAYS at ../..//ClockMode.v:70
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode = 0U;
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP = 0U;
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__ringing = 0U;
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset = 1U;
    } else {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset = 0U;
	if (((((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curHH) 
	       << 0xeU) | (((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curMM) 
			    << 7U) | (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curSS))) 
	     == ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON)
		  ? (((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curHH) 
		      << 0xeU) | (((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curMM) 
				   << 7U) | (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curSS)))
		  : 0x1fffffU))) {
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__ringing = 1U;
	}
	if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    if (vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__LOAD) {
		vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode = 0U;
	    }
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
		if ((1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode)))) {
		    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode = 1U;
		    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset = 1U;
		}
	    }
	    if ((1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode)))) {
		if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state))) {
		    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP 
			= (1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP)));
		}
		if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__state))) {
		    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__ringing = 0U;
		}
	    }
	}
    }
}

void Vtop::_settle__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//PulseGenerator.v:37
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->push_switch1) 
			     << 2U) | (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__state));
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state 
	= vlTOPp->__Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state
	[vlTOPp->__Vtableidx1];
    vlTOPp->top__DOT__digitalClock__DOT__mode = (2U 
						 == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__state));
    // ALWAYS at ../..//PulseGenerator.v:37
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->push_switch2) 
			     << 2U) | (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state));
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state 
	= vlTOPp->__Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state
	[vlTOPp->__Vtableidx2];
    // ALWAYS at ../..//PulseGenerator.v:37
    vlTOPp->__Vtableidx3 = (((IData)(vlTOPp->push_switch3) 
			     << 2U) | (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state));
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state 
	= vlTOPp->__Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state
	[vlTOPp->__Vtableidx3];
    // ALWAYS at ../..//PulseGenerator.v:37
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->push_switch4) 
			     << 2U) | (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__state));
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state 
	= vlTOPp->__Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state
	[vlTOPp->__Vtableidx4];
    // ALWAYS at ../..//StopTicker.v:50
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM 
	= vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMM;
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS 
	= vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curSS;
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMS 
	= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMS)));
    if ((0x64U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMS))) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS 
	    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS)));
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMS = 0U;
    }
    if ((0x3cU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS))) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM 
	    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM)));
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS = 0U;
    }
    if ((0x3cU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM))) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMS = 0x63U;
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS = 0x3bU;
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM = 0x3bU;
    }
    // ALWAYS at ../..//TimeTicker.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextSS 
	= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curSS)));
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curMM;
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curHH;
    if ((0x3cU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextSS))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM 
	    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM)));
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextSS = 0U;
    }
    if ((0x3cU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH 
	    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH)));
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM = 0U;
    }
    if ((0x18U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH = 0U;
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)));
    if (vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP) {
	if ((3U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState))) {
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState = 0U;
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextLoad = 1U;
	}
    } else {
	if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState))) {
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState = 0U;
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextLoad = 1U;
	}
    }
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextLoad 
	= (1U & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState))
		  ? 1U : 0U));
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upHH 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH;
    if (((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	 & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upHH 
	    = (0x7fU & ((0xcU > (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 ? ((IData)(0xcU) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH) 
			    - (IData)(0xcU))));
    }
    if ((((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP)) 
	 | ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upHH 
	    = (0x7fU & ((0x17U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downHH 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH;
    if (((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	 & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downHH 
	    = (0x7fU & ((0xcU > (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 ? ((IData)(0xcU) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH) 
			    - (IData)(0xcU))));
    }
    if ((((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP)) 
	 | ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downHH 
	    = (0x7fU & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 ? 0x17U : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH) 
				    - (IData)(1U))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upMM 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM;
    if ((((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP)) 
	 | ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upMM 
	    = (0x7fU & ((0x3bU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downMM 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM;
    if ((((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP)) 
	 | ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downMM 
	    = (0x7fU & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM))
			 ? 0x3bU : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM) 
				    - (IData)(1U))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)));
    if (vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP) {
	if ((3U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState))) {
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState = 0U;
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextLoad = 1U;
	}
    } else {
	if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState))) {
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState = 0U;
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextLoad = 1U;
	}
    }
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextLoad 
	= (1U & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState))
		  ? 1U : 0U));
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upHH 
	= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH;
    if (((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	 & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upHH 
	    = (0x7fU & ((0xcU > (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 ? ((IData)(0xcU) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH) 
			    - (IData)(0xcU))));
    }
    if ((((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP)) 
	 | ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upHH 
	    = (0x7fU & ((0x17U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downHH 
	= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH;
    if (((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	 & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downHH 
	    = (0x7fU & ((0xcU > (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 ? ((IData)(0xcU) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH) 
			    - (IData)(0xcU))));
    }
    if ((((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP)) 
	 | ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downHH 
	    = (0x7fU & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 ? 0x17U : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH) 
				    - (IData)(1U))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upMM 
	= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM;
    if ((((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP)) 
	 | ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upMM 
	    = (0x7fU & ((0x3bU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downMM 
	= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM;
    if ((((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP)) 
	 | ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downMM 
	    = (0x7fU & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM))
			 ? 0x3bU : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM) 
				    - (IData)(1U))));
    }
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT____Vcellinp__timeTicker____pinNumber3 
	= ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode)) 
	   & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__LOAD));
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT____Vcellinp__timeKeeper____pinNumber3 
	= ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode)) 
	   & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__LOAD));
    // ALWAYS at ../..//DigitalClock.v:89
    if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	vlTOPp->top__DOT__digitalClock__DOT__finalFlick 
	    = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode)
	        ? ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP)
		    ? ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState))
		        ? 0x20U : ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState))
				    ? 0xcU : ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState))
					       ? 3U
					       : 0U)))
		    : ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState))
		        ? 0x30U : ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState))
				    ? 0xcU : 0U))) : 
	       ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__ringing)
		 ? 0x3fU : 0U));
    } else {
	if ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    vlTOPp->top__DOT__digitalClock__DOT__finalFlick 
		= ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting)
		    ? ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP)
		        ? ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState))
			    ? 0x20U : ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState))
				        ? 0xcU : ((2U 
						   == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState))
						   ? 3U
						   : 0U)))
		        : ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState))
			    ? 0x30U : ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState))
				        ? 0xcU : 0U)))
		    : 0U);
	} else {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		vlTOPp->top__DOT__digitalClock__DOT__finalFlick = 0U;
	    }
	}
    }
    // ALWAYS at ../..//DigitalClock.v:89
    if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	vlTOPp->top__DOT__digitalClock__DOT__finalAP 
	    = vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP;
    } else {
	if ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    vlTOPp->top__DOT__digitalClock__DOT__finalAP 
		= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP;
	} else {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		vlTOPp->top__DOT__digitalClock__DOT__finalAP = 0U;
	    }
	}
    }
    // ALWAYS at ../..//DigitalClock.v:89
    if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	vlTOPp->top__DOT__digitalClock__DOT__finalHH 
	    = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode)
	        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH)
	        : (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curHH));
    } else {
	if ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    vlTOPp->top__DOT__digitalClock__DOT__finalHH 
		= ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON)
		    ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curHH)
		    : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting)
		        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH)
		        : 0x7fU));
	} else {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		vlTOPp->top__DOT__digitalClock__DOT__finalHH 
		    = vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMM;
	    }
	}
    }
    // ALWAYS at ../..//DigitalClock.v:89
    if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	vlTOPp->top__DOT__digitalClock__DOT__finalMM 
	    = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode)
	        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM)
	        : (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curMM));
    } else {
	if ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    vlTOPp->top__DOT__digitalClock__DOT__finalMM 
		= ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON)
		    ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curMM)
		    : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting)
		        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM)
		        : 0x7fU));
	} else {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		vlTOPp->top__DOT__digitalClock__DOT__finalMM 
		    = vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curSS;
	    }
	}
    }
    // ALWAYS at ../..//DigitalClock.v:89
    if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	vlTOPp->top__DOT__digitalClock__DOT__finalSS 
	    = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode)
	        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curSS)
	        : (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curSS));
    } else {
	if ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    vlTOPp->top__DOT__digitalClock__DOT__finalSS 
		= ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON)
		    ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curSS)
		    : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting)
		        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curSS)
		        : 0x7fU));
	} else {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		vlTOPp->top__DOT__digitalClock__DOT__finalSS 
		    = vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMS;
	    }
	}
    }
    // ALWAYS at ../..//ProcessTT.v:48
    if ((0x7fU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH))) {
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 = 0xfU;
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h2 = 0xfU;
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 = 0xfU;
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m2 = 0xfU;
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 = 0xfU;
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s2 = 0xfU;
    } else {
	if (vlTOPp->top__DOT__digitalClock__DOT__finalAP) {
	    if ((0xcU < (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 = 0xcU;
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h2 = 0xeU;
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 = 0U;
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH) 
				- (IData)(0xcU)));
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m2 
		    = (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	    } else {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = ((0xcU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH))
		        ? 0xcU : 0xdU);
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h2 = 0xeU;
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 = 0U;
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH))
				 ? 0xcU : (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH)));
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m2 
		    = (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		= vlTOPp->top__DOT__digitalClock__DOT__finalMM;
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 = 0U;
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s2 
		= (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	} else {
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		= vlTOPp->top__DOT__digitalClock__DOT__finalHH;
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 = 0U;
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h2 
		= (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 = 0xeU;
		}
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		= vlTOPp->top__DOT__digitalClock__DOT__finalMM;
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 = 0U;
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m2 
		= (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 = 0xeU;
		}
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		= vlTOPp->top__DOT__digitalClock__DOT__finalSS;
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 = 0U;
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s2 
		= (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	}
    }
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx6 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1;
    vlTOPp->top__DOT__digitalClock__DOT__D1 = vlTOPp->__Vtable6_top__DOT__digitalClock__DOT__D1
	[vlTOPp->__Vtableidx6];
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx7 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h2;
    vlTOPp->top__DOT__digitalClock__DOT__D2 = vlTOPp->__Vtable7_top__DOT__digitalClock__DOT__D2
	[vlTOPp->__Vtableidx7];
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx8 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1;
    vlTOPp->top__DOT__digitalClock__DOT__D3 = vlTOPp->__Vtable8_top__DOT__digitalClock__DOT__D3
	[vlTOPp->__Vtableidx8];
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx9 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m2;
    vlTOPp->top__DOT__digitalClock__DOT__D4 = vlTOPp->__Vtable9_top__DOT__digitalClock__DOT__D4
	[vlTOPp->__Vtableidx9];
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx10 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1;
    vlTOPp->top__DOT__digitalClock__DOT__D5 = vlTOPp->__Vtable10_top__DOT__digitalClock__DOT__D5
	[vlTOPp->__Vtableidx10];
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx11 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s2;
    vlTOPp->top__DOT__digitalClock__DOT__D6 = vlTOPp->__Vtable11_top__DOT__digitalClock__DOT__D6
	[vlTOPp->__Vtableidx11];
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment1 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D1)
			 : ((0x20U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D1)));
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment2 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D2)
			 : ((0x10U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D2)));
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment3 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D3)
			 : ((8U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D3)));
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment4 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D4)
			 : ((4U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D4)));
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment5 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D5)
			 : ((2U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D5)));
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment6 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D6)
			 : ((1U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D6)));
}

VL_INLINE_OPT void Vtop::_combo__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//PulseGenerator.v:37
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->push_switch1) 
			     << 2U) | (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__state));
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state 
	= vlTOPp->__Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state
	[vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//DigitalClock.v:46
    vlTOPp->top__DOT__digitalClock__DOT__currMode = 
	((IData)(vlTOPp->push_switch6) ? 0U : ((0U 
						== (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))
					        ? 1U
					        : (
						   (1U 
						    == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))
						    ? 2U
						    : 0U)));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//StopTicker.v:72
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMM = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__PAUSE)))) {
	    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMM 
		= vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM;
	}
    }
    // ALWAYS at ../..//StopTicker.v:72
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMS = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__PAUSE)))) {
	    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMS 
		= vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMS;
	}
    }
    // ALWAYS at ../..//StopTicker.v:72
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curSS = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__PAUSE)))) {
	    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curSS 
		= vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS;
	}
    }
}

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//TimeTicker.v:68
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curSS = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT____Vcellinp__timeTicker____pinNumber3)))) {
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curSS 
		= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextSS;
	}
    }
    // ALWAYS at ../..//TimeTicker.v:68
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curHH = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT____Vcellinp__timeTicker____pinNumber3)))) {
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curHH 
		= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH;
	}
    }
    // ALWAYS at ../..//TimeTicker.v:68
    if (vlTOPp->push_switch6) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curMM = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT____Vcellinp__timeTicker____pinNumber3)))) {
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curMM 
		= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM;
	}
    }
}

VL_INLINE_OPT void Vtop::_sequent__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//TimeSetter.v:130
    if (vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__LOAD = 0U;
    } else {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__LOAD = 0U;
	if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__LOAD 
		= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextLoad;
	}
    }
    // ALWAYS at ../..//TimeSetter.v:130
    if (vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState = 0U;
    } else {
	if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState 
		= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState;
	}
    }
    // ALWAYS at ../..//TimeSetter.v:130
    if (vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curSS = 0U;
    }
    // ALWAYS at ../..//TimeSetter.v:130
    if (vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH = 0U;
    } else {
	if ((2U != (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state))) {
		vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH 
		    = vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upHH;
	    }
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__state))) {
		vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH 
		    = vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downHH;
	    }
	}
    }
    // ALWAYS at ../..//TimeSetter.v:130
    if (vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM = 0U;
    } else {
	if ((2U != (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state))) {
		vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM 
		    = vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upMM;
	    }
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__state))) {
		vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM 
		    = vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downMM;
	    }
	}
    }
}

VL_INLINE_OPT void Vtop::_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//TimeSetter.v:130
    if (vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__LOAD = 0U;
    } else {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__LOAD = 0U;
	if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__LOAD 
		= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextLoad;
	}
    }
    // ALWAYS at ../..//TimeSetter.v:130
    if (vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState = 0U;
    } else {
	if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState 
		= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState;
	}
    }
    // ALWAYS at ../..//TimeSetter.v:130
    if (vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curSS = 0U;
    }
    // ALWAYS at ../..//TimeSetter.v:130
    if (vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH = 0U;
    } else {
	if ((2U != (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state))) {
		vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH 
		    = vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upHH;
	    }
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__state))) {
		vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH 
		    = vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downHH;
	    }
	}
    }
    // ALWAYS at ../..//TimeSetter.v:130
    if (vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM = 0U;
    } else {
	if ((2U != (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state))) {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state))) {
		vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM 
		    = vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upMM;
	    }
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__state))) {
		vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM 
		    = vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downMM;
	    }
	}
    }
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__11\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//DigitalClock.v:89
    if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	vlTOPp->top__DOT__digitalClock__DOT__finalAP 
	    = vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP;
    } else {
	if ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    vlTOPp->top__DOT__digitalClock__DOT__finalAP 
		= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP;
	} else {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		vlTOPp->top__DOT__digitalClock__DOT__finalAP = 0U;
	    }
	}
    }
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__12\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//StopTicker.v:50
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM 
	= vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMM;
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS 
	= vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curSS;
    vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMS 
	= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMS)));
    if ((0x64U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMS))) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS 
	    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS)));
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMS = 0U;
    }
    if ((0x3cU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS))) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM 
	    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM)));
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS = 0U;
    }
    if ((0x3cU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM))) {
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMS = 0x63U;
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS = 0x3bU;
	vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM = 0x3bU;
    }
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__13(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__13\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//TimeTicker.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextSS 
	= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curSS)));
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curMM;
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curHH;
    if ((0x3cU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextSS))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM 
	    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM)));
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextSS = 0U;
    }
    if ((0x3cU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH 
	    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH)));
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM = 0U;
    }
    if ((0x18U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH = 0U;
    }
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__14(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__14\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT____Vcellinp__timeKeeper____pinNumber3 
	= ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode)) 
	   & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__LOAD));
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__15(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__15\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)));
    if (vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP) {
	if ((3U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState))) {
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState = 0U;
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextLoad = 1U;
	}
    } else {
	if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState))) {
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState = 0U;
	    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextLoad = 1U;
	}
    }
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextLoad 
	= (1U & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState))
		  ? 1U : 0U));
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upHH 
	= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH;
    if (((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	 & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upHH 
	    = (0x7fU & ((0xcU > (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 ? ((IData)(0xcU) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH) 
			    - (IData)(0xcU))));
    }
    if ((((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP)) 
	 | ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upHH 
	    = (0x7fU & ((0x17U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downHH 
	= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH;
    if (((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	 & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downHH 
	    = (0x7fU & ((0xcU > (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 ? ((IData)(0xcU) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH) 
			    - (IData)(0xcU))));
    }
    if ((((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP)) 
	 | ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downHH 
	    = (0x7fU & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH))
			 ? 0x17U : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH) 
				    - (IData)(1U))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upMM 
	= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM;
    if ((((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP)) 
	 | ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upMM 
	    = (0x7fU & ((0x3bU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downMM 
	= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM;
    if ((((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP)) 
	 | ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downMM 
	    = (0x7fU & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM))
			 ? 0x3bU : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM) 
				    - (IData)(1U))));
    }
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__16(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__16\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT____Vcellinp__timeTicker____pinNumber3 
	= ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode)) 
	   & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__LOAD));
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__17(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__17\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)));
    if (vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP) {
	if ((3U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState))) {
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState = 0U;
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextLoad = 1U;
	}
    } else {
	if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState))) {
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState = 0U;
	    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextLoad = 1U;
	}
    }
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextLoad 
	= (1U & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState))
		  ? 1U : 0U));
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upHH 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH;
    if (((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	 & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upHH 
	    = (0x7fU & ((0xcU > (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 ? ((IData)(0xcU) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH) 
			    - (IData)(0xcU))));
    }
    if ((((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP)) 
	 | ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upHH 
	    = (0x7fU & ((0x17U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downHH 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH;
    if (((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	 & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downHH 
	    = (0x7fU & ((0xcU > (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 ? ((IData)(0xcU) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH) 
			    - (IData)(0xcU))));
    }
    if ((((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP)) 
	 | ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downHH 
	    = (0x7fU & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH))
			 ? 0x17U : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH) 
				    - (IData)(1U))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upMM 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM;
    if ((((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP)) 
	 | ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upMM 
	    = (0x7fU & ((0x3bU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM))));
    }
    // ALWAYS at ../..//TimeSetter.v:51
    vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downMM 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM;
    if ((((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	  & (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP)) 
	 | ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState)) 
	    & (~ (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP))))) {
	vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downMM 
	    = (0x7fU & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM))
			 ? 0x3bU : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM) 
				    - (IData)(1U))));
    }
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__18(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__18\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//DigitalClock.v:89
    if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	vlTOPp->top__DOT__digitalClock__DOT__finalFlick 
	    = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode)
	        ? ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__displayAP)
		    ? ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState))
		        ? 0x20U : ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState))
				    ? 0xcU : ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState))
					       ? 3U
					       : 0U)))
		    : ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState))
		        ? 0x30U : ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState))
				    ? 0xcU : 0U))) : 
	       ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__ringing)
		 ? 0x3fU : 0U));
    } else {
	if ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    vlTOPp->top__DOT__digitalClock__DOT__finalFlick 
		= ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting)
		    ? ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__displayAP)
		        ? ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState))
			    ? 0x20U : ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState))
				        ? 0xcU : ((2U 
						   == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState))
						   ? 3U
						   : 0U)))
		        : ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState))
			    ? 0x30U : ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState))
				        ? 0xcU : 0U)))
		    : 0U);
	} else {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		vlTOPp->top__DOT__digitalClock__DOT__finalFlick = 0U;
	    }
	}
    }
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__19(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__19\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//DigitalClock.v:89
    if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	vlTOPp->top__DOT__digitalClock__DOT__finalSS 
	    = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode)
	        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curSS)
	        : (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curSS));
    } else {
	if ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    vlTOPp->top__DOT__digitalClock__DOT__finalSS 
		= ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON)
		    ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curSS)
		    : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting)
		        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curSS)
		        : 0x7fU));
	} else {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		vlTOPp->top__DOT__digitalClock__DOT__finalSS 
		    = vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMS;
	    }
	}
    }
    // ALWAYS at ../..//DigitalClock.v:89
    if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	vlTOPp->top__DOT__digitalClock__DOT__finalHH 
	    = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode)
	        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH)
	        : (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curHH));
    } else {
	if ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    vlTOPp->top__DOT__digitalClock__DOT__finalHH 
		= ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON)
		    ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curHH)
		    : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting)
		        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH)
		        : 0x7fU));
	} else {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		vlTOPp->top__DOT__digitalClock__DOT__finalHH 
		    = vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMM;
	    }
	}
    }
    // ALWAYS at ../..//DigitalClock.v:89
    if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	vlTOPp->top__DOT__digitalClock__DOT__finalMM 
	    = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__submode)
	        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM)
	        : (IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curMM));
    } else {
	if ((1U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
	    vlTOPp->top__DOT__digitalClock__DOT__finalMM 
		= ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__AON)
		    ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curMM)
		    : ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__setting)
		        ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM)
		        : 0x7fU));
	} else {
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		vlTOPp->top__DOT__digitalClock__DOT__finalMM 
		    = vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curSS;
	    }
	}
    }
    // ALWAYS at ../..//ProcessTT.v:48
    if ((0x7fU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH))) {
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 = 0xfU;
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h2 = 0xfU;
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 = 0xfU;
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m2 = 0xfU;
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 = 0xfU;
	vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s2 = 0xfU;
    } else {
	if (vlTOPp->top__DOT__digitalClock__DOT__finalAP) {
	    if ((0xcU < (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 = 0xcU;
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h2 = 0xeU;
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 = 0U;
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH) 
				- (IData)(0xcU)));
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m2 
		    = (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	    } else {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = ((0xcU == (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH))
		        ? 0xcU : 0xdU);
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h2 = 0xeU;
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 = 0U;
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH))
				 ? 0xcU : (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalHH)));
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
			= (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				    - (IData)(0xaU)));
		}
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m2 
		    = (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		= vlTOPp->top__DOT__digitalClock__DOT__finalMM;
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 = 0U;
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s2 
		= (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	} else {
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		= vlTOPp->top__DOT__digitalClock__DOT__finalHH;
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 = 0U;
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h2 
		= (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1 = 0xeU;
		}
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		= vlTOPp->top__DOT__digitalClock__DOT__finalMM;
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 = 0U;
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m2 
		= (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	    if ((2U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__currMode))) {
		if ((0U == (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1))) {
		    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1 = 0xeU;
		}
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		= vlTOPp->top__DOT__digitalClock__DOT__finalSS;
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 = 0U;
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    if ((0xaU <= (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp))) {
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1)));
		vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp 
		    = (0xffU & ((IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp) 
				- (IData)(0xaU)));
	    }
	    vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s2 
		= (0xfU & (IData)(vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__temp));
	}
    }
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx6 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h1;
    vlTOPp->top__DOT__digitalClock__DOT__D1 = vlTOPp->__Vtable6_top__DOT__digitalClock__DOT__D1
	[vlTOPp->__Vtableidx6];
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx7 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__h2;
    vlTOPp->top__DOT__digitalClock__DOT__D2 = vlTOPp->__Vtable7_top__DOT__digitalClock__DOT__D2
	[vlTOPp->__Vtableidx7];
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx8 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m1;
    vlTOPp->top__DOT__digitalClock__DOT__D3 = vlTOPp->__Vtable8_top__DOT__digitalClock__DOT__D3
	[vlTOPp->__Vtableidx8];
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx9 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__m2;
    vlTOPp->top__DOT__digitalClock__DOT__D4 = vlTOPp->__Vtable9_top__DOT__digitalClock__DOT__D4
	[vlTOPp->__Vtableidx9];
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx10 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s1;
    vlTOPp->top__DOT__digitalClock__DOT__D5 = vlTOPp->__Vtable10_top__DOT__digitalClock__DOT__D5
	[vlTOPp->__Vtableidx10];
    // ALWAYS at ../..//BCHto7SegmentDecoder.v:4
    vlTOPp->__Vtableidx11 = vlTOPp->top__DOT__digitalClock__DOT__processTT__DOT__s2;
    vlTOPp->top__DOT__digitalClock__DOT__D6 = vlTOPp->__Vtable11_top__DOT__digitalClock__DOT__D6
	[vlTOPp->__Vtableidx11];
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment1 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D1)
			 : ((0x20U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D1)));
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment2 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D2)
			 : ((0x10U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D2)));
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment3 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D3)
			 : ((8U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D3)));
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment4 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D4)
			 : ((4U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D4)));
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment5 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D5)
			 : ((2U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D5)));
    // ALWAYS at ../..//DigitFlicker.v:43
    vlTOPp->segment6 = ((IData)(vlTOPp->top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick)
			 ? (IData)(vlTOPp->top__DOT__digitalClock__DOT__D6)
			 : ((1U & (IData)(vlTOPp->top__DOT__digitalClock__DOT__finalFlick))
			     ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__D6)));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__20(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__20\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//PulseGenerator.v:50
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__state 
	= ((IData)(vlTOPp->push_switch6) ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state));
    // ALWAYS at ../..//PulseGenerator.v:50
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state 
	= ((IData)(vlTOPp->push_switch6) ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state));
    // ALWAYS at ../..//PulseGenerator.v:50
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state 
	= ((IData)(vlTOPp->push_switch6) ? 0U : (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state));
}

VL_INLINE_OPT void Vtop::_combo__TOP__21(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__21\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../..//PulseGenerator.v:37
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->push_switch4) 
			     << 2U) | (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__state));
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state 
	= vlTOPp->__Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state
	[vlTOPp->__Vtableidx4];
    // ALWAYS at ../..//PulseGenerator.v:37
    vlTOPp->__Vtableidx3 = (((IData)(vlTOPp->push_switch3) 
			     << 2U) | (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state));
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state 
	= vlTOPp->__Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state
	[vlTOPp->__Vtableidx3];
    // ALWAYS at ../..//PulseGenerator.v:37
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->push_switch2) 
			     << 2U) | (IData)(vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state));
    vlTOPp->top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state 
	= vlTOPp->__Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state
	[vlTOPp->__Vtableidx2];
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6))))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    if ((((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__mode) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__mode))))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz))))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if ((((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz))))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__alarm__DOT__set_reset))))) {
	vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__set_reset))))) {
	vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	  | ((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6)))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__mode) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__mode))))) {
	vlTOPp->_multiclk__TOP__11(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	  | ((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6)))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz))))) {
	vlTOPp->_multiclk__TOP__12(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	  | ((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6)))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz))))) {
	vlTOPp->_multiclk__TOP__13(vlSymsp);
    }
    if ((((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	   | ((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6)))) 
	  | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__alarm__DOT__set_reset)))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__mode) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__mode))))) {
	vlTOPp->_multiclk__TOP__14(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	  | ((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6)))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__alarm__DOT__set_reset))))) {
	vlTOPp->_multiclk__TOP__15(vlSymsp);
    }
    if ((((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	   | ((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6)))) 
	  | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__set_reset)))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__mode) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__mode))))) {
	vlTOPp->_multiclk__TOP__16(vlSymsp);
    }
    if (((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	  | ((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6)))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__set_reset))))) {
	vlTOPp->_multiclk__TOP__17(vlSymsp);
    }
    if (((((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	    | ((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6)))) 
	   | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__alarm__DOT__set_reset)))) 
	  | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__set_reset)))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__mode) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__mode))))) {
	vlTOPp->_multiclk__TOP__18(vlSymsp);
    }
    if (((((((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	      | ((IData)(vlTOPp->push_switch6) & (~ (IData)(vlTOPp->__Vclklast__TOP__push_switch6)))) 
	     | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset) 
		& (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__alarm__DOT__set_reset)))) 
	    | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset) 
	       & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__set_reset)))) 
	   | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz)))) 
	  | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__mode) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__mode)))) 
	 | ((IData)(vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz))))) {
	vlTOPp->_multiclk__TOP__19(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__20(vlSymsp);
    }
    vlTOPp->_combo__TOP__21(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__push_switch6 = vlTOPp->push_switch6;
    vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__mode 
	= vlTOPp->top__DOT__digitalClock__DOT__mode;
    vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz 
	= vlTOPp->top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz;
    vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz;
    vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__alarm__DOT__set_reset 
	= vlTOPp->top__DOT__digitalClock__DOT__alarm__DOT__set_reset;
    vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__set_reset 
	= vlTOPp->top__DOT__digitalClock__DOT__clock__DOT__set_reset;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__push_switch6 = vlTOPp->push_switch6;
    vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__mode 
	= vlTOPp->top__DOT__digitalClock__DOT__mode;
    vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz = 0U;
    vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz = 0U;
    vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__alarm__DOT__set_reset = 0U;
    vlTOPp->__Vclklast__TOP__top__DOT__digitalClock__DOT__clock__DOT__set_reset = 0U;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((push_switch1 & 0xfeU))) {
	Verilated::overWidthError("push_switch1");}
    if (VL_UNLIKELY((push_switch2 & 0xfeU))) {
	Verilated::overWidthError("push_switch2");}
    if (VL_UNLIKELY((push_switch3 & 0xfeU))) {
	Verilated::overWidthError("push_switch3");}
    if (VL_UNLIKELY((push_switch4 & 0xfeU))) {
	Verilated::overWidthError("push_switch4");}
    if (VL_UNLIKELY((push_switch5 & 0xfeU))) {
	Verilated::overWidthError("push_switch5");}
    if (VL_UNLIKELY((push_switch6 & 0xfeU))) {
	Verilated::overWidthError("push_switch6");}
    if (VL_UNLIKELY((dip_switch1 & 0xfeU))) {
	Verilated::overWidthError("dip_switch1");}
    if (VL_UNLIKELY((dip_switch2 & 0xfeU))) {
	Verilated::overWidthError("dip_switch2");}
    if (VL_UNLIKELY((dip_switch3 & 0xfeU))) {
	Verilated::overWidthError("dip_switch3");}
    if (VL_UNLIKELY((dip_switch4 & 0xfeU))) {
	Verilated::overWidthError("dip_switch4");}
    if (VL_UNLIKELY((dip_switch5 & 0xfeU))) {
	Verilated::overWidthError("dip_switch5");}
    if (VL_UNLIKELY((dip_switch6 & 0xfeU))) {
	Verilated::overWidthError("dip_switch6");}
    if (VL_UNLIKELY((dip_switch7 & 0xfeU))) {
	Verilated::overWidthError("dip_switch7");}
    if (VL_UNLIKELY((dip_switch8 & 0xfeU))) {
	Verilated::overWidthError("dip_switch8");}
    if (VL_UNLIKELY((dip_switch9 & 0xfeU))) {
	Verilated::overWidthError("dip_switch9");}
    if (VL_UNLIKELY((dip_switch10 & 0xfeU))) {
	Verilated::overWidthError("dip_switch10");}
}
#endif // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    push_switch1 = VL_RAND_RESET_I(1);
    push_switch2 = VL_RAND_RESET_I(1);
    push_switch3 = VL_RAND_RESET_I(1);
    push_switch4 = VL_RAND_RESET_I(1);
    push_switch5 = VL_RAND_RESET_I(1);
    push_switch6 = VL_RAND_RESET_I(1);
    segment1 = VL_RAND_RESET_I(7);
    segment2 = VL_RAND_RESET_I(7);
    segment3 = VL_RAND_RESET_I(7);
    segment4 = VL_RAND_RESET_I(7);
    segment5 = VL_RAND_RESET_I(7);
    segment6 = VL_RAND_RESET_I(7);
    dip_switch1 = VL_RAND_RESET_I(1);
    dip_switch2 = VL_RAND_RESET_I(1);
    dip_switch3 = VL_RAND_RESET_I(1);
    dip_switch4 = VL_RAND_RESET_I(1);
    dip_switch5 = VL_RAND_RESET_I(1);
    dip_switch6 = VL_RAND_RESET_I(1);
    dip_switch7 = VL_RAND_RESET_I(1);
    dip_switch8 = VL_RAND_RESET_I(1);
    dip_switch9 = VL_RAND_RESET_I(1);
    dip_switch10 = VL_RAND_RESET_I(1);
    led1_red = VL_RAND_RESET_I(1);
    led2_yellow = VL_RAND_RESET_I(1);
    led3_green = VL_RAND_RESET_I(1);
    led4_red = VL_RAND_RESET_I(1);
    led5_yellow = VL_RAND_RESET_I(1);
    led6_green = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__mode = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__currMode = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__finalHH = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__finalMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__finalSS = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__finalFlick = VL_RAND_RESET_I(6);
    top__DOT__digitalClock__DOT__finalAP = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__D1 = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__D2 = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__D3 = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__D4 = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__D5 = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__D6 = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__state = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__state = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__state = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__state = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__clock__DOT__submode = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__clock__DOT__displayAP = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__clock__DOT__ringing = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__clock__DOT__set_reset = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__clock__DOT__LOAD = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__clock__DOT____Vcellinp__timeTicker____pinNumber3 = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__clk_1Hz = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curHH = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__curSS = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextHH = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__nextSS = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeTicker__DOT__tickSecond__DOT__cnt = VL_RAND_RESET_I(21);
    top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curHH = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__curSS = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upHH = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downHH = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__upMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__downMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__setState = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextSetState = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__clock__DOT__timeSetter__DOT__nextLoad = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__alarm__DOT__set_reset = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__alarm__DOT__setting = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__alarm__DOT__displayAP = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__alarm__DOT__AON = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__alarm__DOT__LOAD = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__alarm__DOT____Vcellinp__timeKeeper____pinNumber3 = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curHH = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__alarm__DOT__timeKeeper__DOT__curSS = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curHH = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__curSS = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upHH = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downHH = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__upMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__downMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__setState = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextSetState = VL_RAND_RESET_I(2);
    top__DOT__digitalClock__DOT__alarm__DOT__timeSetter__DOT__nextLoad = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__stopwatch__DOT__PAUSE = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__stopwatch__DOT__LOAD = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__clk_100Hz = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curSS = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__curMS = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMM = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextSS = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__nextMS = VL_RAND_RESET_I(7);
    top__DOT__digitalClock__DOT__stopwatch__DOT__stopTicker__DOT__tickHundredth__DOT__cnt = VL_RAND_RESET_I(21);
    top__DOT__digitalClock__DOT__processTT__DOT__h1 = VL_RAND_RESET_I(4);
    top__DOT__digitalClock__DOT__processTT__DOT__h2 = VL_RAND_RESET_I(4);
    top__DOT__digitalClock__DOT__processTT__DOT__m1 = VL_RAND_RESET_I(4);
    top__DOT__digitalClock__DOT__processTT__DOT__m2 = VL_RAND_RESET_I(4);
    top__DOT__digitalClock__DOT__processTT__DOT__s1 = VL_RAND_RESET_I(4);
    top__DOT__digitalClock__DOT__processTT__DOT__s2 = VL_RAND_RESET_I(4);
    top__DOT__digitalClock__DOT__processTT__DOT__temp = VL_RAND_RESET_I(8);
    top__DOT__digitalClock__DOT__digitFlicker__DOT__clk_flick = VL_RAND_RESET_I(1);
    top__DOT__digitalClock__DOT__digitFlicker__DOT__tick4flick__DOT__cnt = VL_RAND_RESET_I(21);
    __Vtableidx1 = VL_RAND_RESET_I(3);
    __Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state[0] = 0U;
    __Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state[1] = 0U;
    __Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state[2] = 0U;
    __Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state[3] = 0U;
    __Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state[4] = 2U;
    __Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state[5] = 1U;
    __Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state[6] = 1U;
    __Vtable1_top__DOT__digitalClock__DOT__SS__DOT__P1__DOT__next_state[7] = 0U;
    __Vtableidx2 = VL_RAND_RESET_I(3);
    __Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state[0] = 0U;
    __Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state[1] = 0U;
    __Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state[2] = 0U;
    __Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state[3] = 0U;
    __Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state[4] = 2U;
    __Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state[5] = 1U;
    __Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state[6] = 1U;
    __Vtable2_top__DOT__digitalClock__DOT__SS__DOT__P2__DOT__next_state[7] = 0U;
    __Vtableidx3 = VL_RAND_RESET_I(3);
    __Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state[0] = 0U;
    __Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state[1] = 0U;
    __Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state[2] = 0U;
    __Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state[3] = 0U;
    __Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state[4] = 2U;
    __Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state[5] = 1U;
    __Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state[6] = 1U;
    __Vtable3_top__DOT__digitalClock__DOT__SS__DOT__P3__DOT__next_state[7] = 0U;
    __Vtableidx4 = VL_RAND_RESET_I(3);
    __Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state[0] = 0U;
    __Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state[1] = 0U;
    __Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state[2] = 0U;
    __Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state[3] = 0U;
    __Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state[4] = 2U;
    __Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state[5] = 1U;
    __Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state[6] = 1U;
    __Vtable4_top__DOT__digitalClock__DOT__SS__DOT__P4__DOT__next_state[7] = 0U;
    __Vtableidx6 = VL_RAND_RESET_I(4);
    __Vtable6_top__DOT__digitalClock__DOT__D1[0] = 0x7eU;
    __Vtable6_top__DOT__digitalClock__DOT__D1[1] = 0x30U;
    __Vtable6_top__DOT__digitalClock__DOT__D1[2] = 0x6dU;
    __Vtable6_top__DOT__digitalClock__DOT__D1[3] = 0x79U;
    __Vtable6_top__DOT__digitalClock__DOT__D1[4] = 0x33U;
    __Vtable6_top__DOT__digitalClock__DOT__D1[5] = 0x5bU;
    __Vtable6_top__DOT__digitalClock__DOT__D1[6] = 0x5fU;
    __Vtable6_top__DOT__digitalClock__DOT__D1[7] = 0x70U;
    __Vtable6_top__DOT__digitalClock__DOT__D1[8] = 0x7fU;
    __Vtable6_top__DOT__digitalClock__DOT__D1[9] = 0x7bU;
    __Vtable6_top__DOT__digitalClock__DOT__D1[10] = 0U;
    __Vtable6_top__DOT__digitalClock__DOT__D1[11] = 0U;
    __Vtable6_top__DOT__digitalClock__DOT__D1[12] = 0x67U;
    __Vtable6_top__DOT__digitalClock__DOT__D1[13] = 0x77U;
    __Vtable6_top__DOT__digitalClock__DOT__D1[14] = 0U;
    __Vtable6_top__DOT__digitalClock__DOT__D1[15] = 1U;
    __Vtableidx7 = VL_RAND_RESET_I(4);
    __Vtable7_top__DOT__digitalClock__DOT__D2[0] = 0x7eU;
    __Vtable7_top__DOT__digitalClock__DOT__D2[1] = 0x30U;
    __Vtable7_top__DOT__digitalClock__DOT__D2[2] = 0x6dU;
    __Vtable7_top__DOT__digitalClock__DOT__D2[3] = 0x79U;
    __Vtable7_top__DOT__digitalClock__DOT__D2[4] = 0x33U;
    __Vtable7_top__DOT__digitalClock__DOT__D2[5] = 0x5bU;
    __Vtable7_top__DOT__digitalClock__DOT__D2[6] = 0x5fU;
    __Vtable7_top__DOT__digitalClock__DOT__D2[7] = 0x70U;
    __Vtable7_top__DOT__digitalClock__DOT__D2[8] = 0x7fU;
    __Vtable7_top__DOT__digitalClock__DOT__D2[9] = 0x7bU;
    __Vtable7_top__DOT__digitalClock__DOT__D2[10] = 0U;
    __Vtable7_top__DOT__digitalClock__DOT__D2[11] = 0U;
    __Vtable7_top__DOT__digitalClock__DOT__D2[12] = 0x67U;
    __Vtable7_top__DOT__digitalClock__DOT__D2[13] = 0x77U;
    __Vtable7_top__DOT__digitalClock__DOT__D2[14] = 0U;
    __Vtable7_top__DOT__digitalClock__DOT__D2[15] = 1U;
    __Vtableidx8 = VL_RAND_RESET_I(4);
    __Vtable8_top__DOT__digitalClock__DOT__D3[0] = 0x7eU;
    __Vtable8_top__DOT__digitalClock__DOT__D3[1] = 0x30U;
    __Vtable8_top__DOT__digitalClock__DOT__D3[2] = 0x6dU;
    __Vtable8_top__DOT__digitalClock__DOT__D3[3] = 0x79U;
    __Vtable8_top__DOT__digitalClock__DOT__D3[4] = 0x33U;
    __Vtable8_top__DOT__digitalClock__DOT__D3[5] = 0x5bU;
    __Vtable8_top__DOT__digitalClock__DOT__D3[6] = 0x5fU;
    __Vtable8_top__DOT__digitalClock__DOT__D3[7] = 0x70U;
    __Vtable8_top__DOT__digitalClock__DOT__D3[8] = 0x7fU;
    __Vtable8_top__DOT__digitalClock__DOT__D3[9] = 0x7bU;
    __Vtable8_top__DOT__digitalClock__DOT__D3[10] = 0U;
    __Vtable8_top__DOT__digitalClock__DOT__D3[11] = 0U;
    __Vtable8_top__DOT__digitalClock__DOT__D3[12] = 0x67U;
    __Vtable8_top__DOT__digitalClock__DOT__D3[13] = 0x77U;
    __Vtable8_top__DOT__digitalClock__DOT__D3[14] = 0U;
    __Vtable8_top__DOT__digitalClock__DOT__D3[15] = 1U;
    __Vtableidx9 = VL_RAND_RESET_I(4);
    __Vtable9_top__DOT__digitalClock__DOT__D4[0] = 0x7eU;
    __Vtable9_top__DOT__digitalClock__DOT__D4[1] = 0x30U;
    __Vtable9_top__DOT__digitalClock__DOT__D4[2] = 0x6dU;
    __Vtable9_top__DOT__digitalClock__DOT__D4[3] = 0x79U;
    __Vtable9_top__DOT__digitalClock__DOT__D4[4] = 0x33U;
    __Vtable9_top__DOT__digitalClock__DOT__D4[5] = 0x5bU;
    __Vtable9_top__DOT__digitalClock__DOT__D4[6] = 0x5fU;
    __Vtable9_top__DOT__digitalClock__DOT__D4[7] = 0x70U;
    __Vtable9_top__DOT__digitalClock__DOT__D4[8] = 0x7fU;
    __Vtable9_top__DOT__digitalClock__DOT__D4[9] = 0x7bU;
    __Vtable9_top__DOT__digitalClock__DOT__D4[10] = 0U;
    __Vtable9_top__DOT__digitalClock__DOT__D4[11] = 0U;
    __Vtable9_top__DOT__digitalClock__DOT__D4[12] = 0x67U;
    __Vtable9_top__DOT__digitalClock__DOT__D4[13] = 0x77U;
    __Vtable9_top__DOT__digitalClock__DOT__D4[14] = 0U;
    __Vtable9_top__DOT__digitalClock__DOT__D4[15] = 1U;
    __Vtableidx10 = VL_RAND_RESET_I(4);
    __Vtable10_top__DOT__digitalClock__DOT__D5[0] = 0x7eU;
    __Vtable10_top__DOT__digitalClock__DOT__D5[1] = 0x30U;
    __Vtable10_top__DOT__digitalClock__DOT__D5[2] = 0x6dU;
    __Vtable10_top__DOT__digitalClock__DOT__D5[3] = 0x79U;
    __Vtable10_top__DOT__digitalClock__DOT__D5[4] = 0x33U;
    __Vtable10_top__DOT__digitalClock__DOT__D5[5] = 0x5bU;
    __Vtable10_top__DOT__digitalClock__DOT__D5[6] = 0x5fU;
    __Vtable10_top__DOT__digitalClock__DOT__D5[7] = 0x70U;
    __Vtable10_top__DOT__digitalClock__DOT__D5[8] = 0x7fU;
    __Vtable10_top__DOT__digitalClock__DOT__D5[9] = 0x7bU;
    __Vtable10_top__DOT__digitalClock__DOT__D5[10] = 0U;
    __Vtable10_top__DOT__digitalClock__DOT__D5[11] = 0U;
    __Vtable10_top__DOT__digitalClock__DOT__D5[12] = 0x67U;
    __Vtable10_top__DOT__digitalClock__DOT__D5[13] = 0x77U;
    __Vtable10_top__DOT__digitalClock__DOT__D5[14] = 0U;
    __Vtable10_top__DOT__digitalClock__DOT__D5[15] = 1U;
    __Vtableidx11 = VL_RAND_RESET_I(4);
    __Vtable11_top__DOT__digitalClock__DOT__D6[0] = 0x7eU;
    __Vtable11_top__DOT__digitalClock__DOT__D6[1] = 0x30U;
    __Vtable11_top__DOT__digitalClock__DOT__D6[2] = 0x6dU;
    __Vtable11_top__DOT__digitalClock__DOT__D6[3] = 0x79U;
    __Vtable11_top__DOT__digitalClock__DOT__D6[4] = 0x33U;
    __Vtable11_top__DOT__digitalClock__DOT__D6[5] = 0x5bU;
    __Vtable11_top__DOT__digitalClock__DOT__D6[6] = 0x5fU;
    __Vtable11_top__DOT__digitalClock__DOT__D6[7] = 0x70U;
    __Vtable11_top__DOT__digitalClock__DOT__D6[8] = 0x7fU;
    __Vtable11_top__DOT__digitalClock__DOT__D6[9] = 0x7bU;
    __Vtable11_top__DOT__digitalClock__DOT__D6[10] = 0U;
    __Vtable11_top__DOT__digitalClock__DOT__D6[11] = 0U;
    __Vtable11_top__DOT__digitalClock__DOT__D6[12] = 0x67U;
    __Vtable11_top__DOT__digitalClock__DOT__D6[13] = 0x77U;
    __Vtable11_top__DOT__digitalClock__DOT__D6[14] = 0U;
    __Vtable11_top__DOT__digitalClock__DOT__D6[15] = 1U;
}
