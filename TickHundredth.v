`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:19:34 12/17/2020 
// Design Name: 
// Module Name:    TickHundredth 
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
module TickHundredth(
 input clk_2MHz, 
 input reset,
 output reg clk_100Hz
);

reg [20:0] cnt;

initial begin
  cnt = 0;
  clk_100Hz = 0;
end

always @(posedge clk_2MHz or posedge reset) begin
  if (reset) begin
    cnt = 0;
    clk_100Hz = 0;
  end
  else begin
    cnt = cnt + 1;
    if (cnt >= 10000) begin
      clk_100Hz = ~clk_100Hz;
      cnt = 0;
    end
  end
end

endmodule
