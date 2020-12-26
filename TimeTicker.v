`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:34:19 12/17/2020 
// Design Name: 
// Module Name:    TimeTicker 
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
module TimeTicker(
  input clk_2MHz,
  input reset,
  input set,
  input [6:0] setHH,
  input [6:0] setMM,
  input [6:0] setSS,
  output [6:0] outHH,
  output [6:0] outMM,
  output [6:0] outSS
    );


wire clk_1Hz;

TickSecond tickSecond(clk_2MHz, reset, clk_1Hz);


reg [6:0] curHH, curMM, curSS, nextHH, nextMM, nextSS;

assign outHH = curHH;
assign outMM = curMM;
assign outSS = curSS;

initial begin
  curHH = 0;
  curMM = 0;
  curSS = 0;
end

always @(*) begin
  nextSS = curSS + 1;
  nextMM = curMM;
  nextHH = curHH;
  if (nextSS == 7'd60) begin
    nextSS = 0;
    nextMM = nextMM + 1;
  end
  if (nextMM == 7'd60) begin
    nextMM = 0;
    nextHH = nextHH +1;
  end
  if (nextHH == 7'd24) begin
    nextHH = 0;
  end
end

always @(posedge clk_1Hz  or posedge reset) begin
  if (reset) begin
    curSS = 0; 
    curMM = 0;
    curHH = 0;
  end
  else begin
    if (!set) begin
      curSS = nextSS;
      curMM = nextMM;
      curHH = nextHH;
    end
  end
end

always @(posedge clk_2MHz) begin
	if (set) begin
		curSS = setSS;
		curMM = setMM;
		curHH = setHH;
	end
end


endmodule
