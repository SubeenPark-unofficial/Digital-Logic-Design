`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:29:54 12/17/2020 
// Design Name: 
// Module Name:    DigitFlicker 
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
module DigitFlicker(
  input clk_2MHz,
  input reset,
	input [5:0] flick,
	input [6:0] H1,
	input [6:0] H2,
	input [6:0] M1,
	input [6:0] M2,
	input [6:0] S1,
	input [6:0] S2,
	output reg [6:0] D1,
  output reg [6:0] D2,
  output reg [6:0] D3,
  output reg [6:0] D4,
  output reg [6:0] D5,
  output reg [6:0] D6
    );

  wire clk_flick;

  Tick4Flick tick4flick(clk_2MHz, reset, clk_flick);

  always @(clk_flick) begin
    if (clk_flick) begin
      D1 = H1; D2 = H2; D3 = M1; D4 = M2; D5 = S1; D6 = S2;
    end
    else begin
      if (flick[5]) D1 = 7'b0000000;
      else D1 = H1;
      if (flick[4]) D2 = 7'b0000000;
      else D2 = H2;
      if (flick[3]) D3 = 7'b0000000;
      else D3 = M1;
      if (flick[2]) D4 = 7'b0000000;
      else D4 = M2;
      if (flick[1]) D5 = 7'b0000000;
      else D5 = S1;
      if (flick[0]) D6 = 7'b0000000;
      else D6 = S2;
   end
end


endmodule
