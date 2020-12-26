`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:25:51 12/17/2020 
// Design Name: 
// Module Name:    StopTicker 
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
module StopTicker(
  input clk_2MHz, 
  input reset, 
  input [6:0] setMM, 
  input [6:0] setSS,
  input [6:0] setMS,
  input LOAD,
  input PAUSE,
  output [6:0] outMM,
  output [6:0] outSS,
  output [6:0] outMS
);

wire clk_100Hz;

TickHundredth tickHundredth(clk_2MHz, reset, clk_100Hz);

reg [6:0] curMM, curSS, curMS, nextMM, nextSS, nextMS;

assign outMM = curMM;
assign outSS = curSS;
assign outMS = curMS;

initial begin
  curMM = 0;
  curSS = 0;
  curMS = 0;
end

always @(*) begin
  nextMM = curMM;
  nextSS = curSS;
  nextMS = curMS + 1;

  if (nextMS == 7'd100) begin 
    nextMS = 0;
    nextSS = nextSS + 1;
  end

  if (nextSS == 7'd60) begin
    nextSS = 0;
    nextMM = nextMM + 1;
  end

  if (nextMM == 7'd60) begin
    nextMS = 99;
    nextSS = 59;
    nextMM = 59;
  end
end

always @ (posedge clk_100Hz or posedge reset) begin
  if (reset) begin
    curMM = 0;
    curSS = 0;
    curMS = 0;
  end
	else begin
      if (!PAUSE) begin
        curMM = nextMM;
        curSS = nextSS;
        curMS = nextMS;
      end
  end
end

always @ (posedge clk_2MHz) begin
	if (LOAD) begin
		curMM = setMM;
		curSS = setSS;
		curMS = setMS;
	end
end
endmodule
