`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    20:12:50 12/16/2020
// Design Name:
// Module Name:    DigitalClock
// Project Name:
// Target Devices:
// Tool versions:
// Description:
// Wrapper for ALL MODULES (TOP LEVEL)
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module DigitalClock(
  input clk_2MHz,
  input s1_async,
  input s2_async,
  input s3_async,
  input s4_async,
  input s5_async,
  input reset,
  output [6:0] d1,
  output [6:0] d2,
  output [6:0] d3,
  output [6:0] d4,
  output [6:0] d5,
  output [6:0] d6
    );
  // SYNCHRONIZE SIGNALS
  wire mode, set, op1, op2, free;
  SignalSynchronizer SS(clk_2MHz, s1_async, s2_async, s3_async, s4_async, s5_async, reset, mode, set, op1, op2, free);

  // DECIDE MODE
  parameter MODE_CLOCK = 2'd0;
  parameter MODE_ALARM = 2'd1;
  parameter MODE_STOP = 2'd2;

  reg [1:0] currMode = MODE_CLOCK;
  always @(posedge mode or posedge reset) begin
    if (reset) begin
      currMode = MODE_CLOCK;
    end
    else begin
      case (currMode)
        MODE_CLOCK : currMode = MODE_ALARM;
        MODE_ALARM : currMode = MODE_STOP;
        MODE_STOP : currMode = MODE_CLOCK;
        default : currMode = MODE_CLOCK;
      endcase
    end
  end


  wire [6:0] clockHH, clockMM, clockSS;
  wire [6:0] alarmHH, alarmMM, alarmSS;
  wire [6:0] stopHH, stopMM, stopSS;
  wire [5:0] clockFlick, alarmFlick;
  wire [20:0] realTime, alarmTime;
  
  
  
  wire RINGING = (realTime == alarmTime);
  wire clockSETTING, alarmSETTING;
  wire clockAP, alarmAP;



  ClockMode clock((currMode == MODE_CLOCK), clk_2MHz, reset, set, op1, op2, RINGING, clockSETTING, clockAP, clockHH, clockMM, clockSS, clockFlick, realTime);

  AlarmMode alarm((currMode == MODE_ALARM), clk_2MHz, reset, set, op1, op2, clockAP, alarmSETTING, alarmAP, alarmHH, alarmMM, alarmSS, alarmFlick, alarmTime);

  StopMode stopwatch((currMode == MODE_STOP), clk_2MHz, reset, set, op1, stopHH, stopMM, stopSS);

  wire [6:0] outHH, outMM, outSS;
  wire [5:0] outFlick;
  wire outAP;

  reg [6:0] finalHH, finalMM, finalSS;
  reg [5:0] finalFlick;
  reg finalAP;

  always @(*) begin
    case (currMode)
      MODE_CLOCK: begin
        finalHH = clockHH;
        finalMM = clockMM;
        finalSS = clockSS;
        finalFlick = clockFlick;
        finalAP = clockAP;
      end
      MODE_ALARM: begin
        finalHH = alarmHH;
        finalMM = alarmMM;
        finalSS = alarmSS;
        finalFlick = alarmFlick;
        finalAP = alarmAP;
      end
      MODE_STOP: begin
        finalHH = stopHH;
        finalMM = stopMM;
        finalSS = stopSS;
        finalFlick = 6'b000000;
        finalAP = 0;
      end
      default: ;
    endcase
  end

  assign outHH = finalHH;
  assign outMM = finalMM;
  assign outSS = finalSS;
  assign outFlick = finalFlick;
  assign outAP = finalAP;

  wire [3:0] H1, H2, M1, M2, S1, S2;
  wire [6:0] D1, D2, D3, D4, D5, D6;
  ProcessTT processTT(outAP, (currMode == MODE_STOP), outHH, outMM, outSS, H1, H2, M1, M2, S1, S2);
  BCHto7SegmentDecoder digit1(H1, D1);
  BCHto7SegmentDecoder digit2(H2, D2);
  BCHto7SegmentDecoder digit3(M1, D3);
  BCHto7SegmentDecoder digit4(M2, D4);
  BCHto7SegmentDecoder digit5(S1, D5);
  BCHto7SegmentDecoder digit6(S2, D6);
  DigitFlicker digitFlicker(clk_2MHz, reset, outFlick, D1, D2, D3, D4, D5, D6, d1, d2, d3, d4, d5, d6);

endmodule
