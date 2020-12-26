`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:33:34 12/17/2020 
// Design Name: 
// Module Name:    Tick4Flick 
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
module Tick4Flick(
  input clk_2MHz,
  input reset, 
  output reg clk_2Hz
);

  reg [20:0] cnt;

  initial begin
    cnt = 0;
    clk_2Hz = 0;
  end

  always @(posedge clk_2MHz or posedge reset) begin
    if (reset) begin
      cnt = 0;
      clk_2Hz = 0;
    end
    else begin
      cnt = cnt + 1;
      if (cnt >= 250000) begin
        clk_2Hz = ~clk_2Hz;
        cnt = 0;
      end
    end
  end

endmodule
