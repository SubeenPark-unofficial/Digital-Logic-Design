`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:03:37 12/16/2020 
// Design Name: 
// Module Name:    SignalSynchronizer 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SignalSynchronizer(
  input clk,
  input sw1_async, 
  input sw2_async, 
  input sw3_async, 
  input sw4_async, 
  input sw5_async, 
  input reset,
  output sw1,
  output sw2,
  output sw3,
  output sw4,
  output sw5
);

PulseGenerator P1(clk, sw1_async, reset, sw1);
PulseGenerator P2(clk, sw2_async, reset, sw2);
PulseGenerator P3(clk, sw3_async, reset, sw3);
PulseGenerator P4(clk, sw4_async, reset, sw4);
PulseGenerator P5(clk, sw5_async, reset, sw5);

endmodule
