`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:34:42 12/17/2020 
// Design Name: 
// Module Name:    TimeKeeper 
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
module TimeKeeper(
  input clk_2MHz,
  input reset,
  input set,
  input [6:0] alarmHH, 
  input [6:0] alarmMM,
  output [6:0] outHH,
  output [6:0] outMM,
  output [6:0] outSS
);

reg [6:0] curHH, curMM, curSS;

assign outHH = curHH;
assign outMM = curMM;
assign outSS = curSS;

initial begin 
  curHH = 7'b0000000;
  curMM = 7'b0000000;
  curSS = 7'b0000000;
end

always @(posedge clk_2MHz or posedge reset) begin
  if (reset) begin
    curHH = 7'b0000000;
    curMM = 7'b0000000;
  end
  else begin
    if (set) begin
      curHH = alarmHH;
      curMM = alarmMM;
    end
  end
end

endmodule
