`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:53:41 12/16/2020 
// Design Name: 
// Module Name:    TickSecond 
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
module TickSecond(
  input clk_2MHz,
  input reset, 
  output reg clk_1Hz
);

  reg [20:0] cnt;

  initial begin
    cnt = 0;
    clk_1Hz = 0;
  end

  always @(posedge clk_2MHz or posedge reset) begin
    if (reset) begin
      cnt = 0;
      clk_1Hz = 0;
    end
    else begin
      cnt = cnt + 1;
      if (cnt >= 1000000) begin
        clk_1Hz = ~clk_1Hz;
        cnt = 0;
      end
    end
  end

endmodule
