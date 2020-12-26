`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:44:41 12/17/2020 
// Design Name: 
// Module Name:    TimeSetter 
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
module TimeSetter(
  input clk_2MHz,
  input reset, 
  input in_set, 
  input in_inc,
  input in_dec,
  input showAP,
  output [6:0] outHH,
  output [6:0] outMM,
  output [6:0] outSS,
  output [5:0] out_flick,
  output reg load
);

reg [6:0] curHH, curMM, curSS, upHH, downHH, upMM, downMM;
reg [1:0] setState, nextSetState;
reg [5:0] flick;

assign outHH = curHH;
assign outMM = curMM;
assign outSS = curSS;
assign out_flick = flick;

reg nextLoad;

parameter S0 = 2'd0; // set AP in showAP, set HH else
parameter S1 = 2'd1; // set HH in showAP, set MM else
parameter S2 = 2'd2; // set MM in showAP
parameter S3 = 2'd3; // dummy

always @(*) begin
  
  // STATE CYCLE
  nextSetState = setState + 1;

  if (showAP) begin
    if (nextSetState == S3) begin
      nextSetState = S0;
		nextLoad = 1;
    end
  end
  else begin
    if (nextSetState == S2) begin
      nextSetState = S0;
		nextLoad = 1;
    end
  end

  // DECIDE LOAD
  nextLoad = (nextSetState == S0) ? 1:0;

  // DECIDE FLICK POSITION
  if (showAP) begin
    case (setState)
      S0: flick = 6'b100000;
      S1: flick = 6'b001100;
      S2: flick = 6'b000011;
      default: flick = 6'b000000;
    endcase
  end
  else begin
    case (setState) 
      S0: flick = 6'b110000;
      S1: flick = 6'b001100;
      default: flick = 6'b000000;
    endcase
  end

  // TIME INCREMENT
  upHH = curHH;
  downHH =curHH;
  upMM = curMM;
  downMM = curMM;

  if ((setState == S0)&&showAP) begin
    if (curHH < 12) begin
      upHH = curHH + 12;
      downHH = curHH + 12;
    end
    else begin
      upHH = curHH - 12;
      downHH = curHH - 12;
    end
  end
 

  if (((setState == S1)&&showAP) || ((setState == S0)&&(~showAP)))begin
    if (curHH == 23) upHH = 0;
    else upHH = curHH + 1;
    if (curHH == 0) downHH = 23;
    else downHH = curHH - 1;
  end

  if (((setState == S2)&&showAP) || ((setState == S1)&&(~showAP)))begin
    if (curMM == 59) upMM = 0;
    else upMM = curMM + 1;
    if (curMM == 0) downMM = 59;
    else downMM = curMM - 1;
  end
end

initial begin
  curHH = 0;
  curMM = 0;
  curSS = 0;
  setState = S0;
  load = 0;
end

always @(posedge clk_2MHz or posedge reset) begin
  if (reset) begin
    curHH = 0;
    curMM = 0;
    curSS = 0;
    setState = S0;
    load = 0;
  end
  else begin
    load = 0;
    if (in_set) begin
      setState = nextSetState;
      load = nextLoad;
    end
    else begin
      if (in_inc) begin
        curHH = upHH;
        curMM = upMM;
      end
      if (in_dec) begin
        curHH = downHH;
        curMM = downMM;
      end
    end
  end
end

endmodule