`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:25:42 12/17/2020 
// Design Name: 
// Module Name:    StopMode 
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
module StopMode(
  input ASSERT,
  input clk_2MHz,
  input reset,
  input in_set,
  input in_op1,
  output [6:0] outMM,
  output [6:0] outSS,
  output [6:0] outMS
);

reg PAUSE, LOAD;

StopTicker stopTicker(clk_2MHz, reset, 7'b0000000, 7'b00000000, 7'b0000000, LOAD, PAUSE, outMM, outSS, outMS);


initial begin
  PAUSE = 1;
  LOAD = 1;
end

always @ (posedge clk_2MHz or posedge reset) begin
  if (reset) begin
    PAUSE = 1;
    LOAD = 1;
  end
  else begin
    LOAD = 0;
    if (ASSERT) begin
      if (in_set) PAUSE = ~PAUSE;
      else begin
        if (in_op1) begin
          LOAD = 1;
        end
      end
    end
  end
end


endmodule
