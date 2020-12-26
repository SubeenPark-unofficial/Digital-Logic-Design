`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:44:14 12/16/2020 
// Design Name: 
// Module Name:    MODE0_CLOCK 
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
module ClockMode(
  input ASSERT,
  input clk_2MHz,
  input reset,
  input in_set,
  input in_op1,
  input in_op2,
  input in_alarm,
  output out_mode,
  output out_AP,
  output [6:0] outHH,
  output [6:0] outMM,
  output [6:0] outSS,
  output [5:0] out_flick,
  output [20:0] realTime
);

parameter TICKING = 1'b0; // regular clock ticking  
parameter SETTING = 1'b1; // settng time

reg submode = TICKING; // setting time, alarm set
reg displayAP = 0;

assign out_mode = submode;
assign out_AP = displayAP;

reg ringing = 0; // alarm set time = current time
reg set_reset = 0;
reg set_done = 0;

wire LOAD;

wire [6:0] tickHH, tickMM, tickSS;
wire [6:0] setHH, setMM, setSS;
wire [5:0] set_flick;



TimeTicker timeTicker(clk_2MHz, reset, ASSERT&LOAD, setHH, setMM, setSS, tickHH, tickMM, tickSS);
TimeSetter timeSetter(clk_2MHz, set_reset, in_set, in_op1, in_op2, displayAP, setHH, setMM, setSS, set_flick, LOAD);


assign outHH = ((submode == TICKING) ? tickHH : setHH);
assign outMM = ((submode == TICKING) ? tickMM : setMM);
assign outSS = ((submode == TICKING) ? tickSS : setSS);
assign out_flick = ((submode == TICKING) ? (ringing ? 6'b111111 : 6'b000000) : set_flick);
assign realTime = {tickHH, tickMM, tickSS};


always @(posedge clk_2MHz or posedge reset) begin
  if (reset) begin
    submode = TICKING;
    displayAP = 0;
    ringing = 0;
    set_reset = 1;
    set_done = 1;
  end
  else begin
    set_reset = 0;
    if (in_alarm) ringing = 1;
    if (ASSERT) begin
		 if (LOAD) begin
			set_done = 1;
			submode = TICKING;
		 end
       if (in_set) begin
          case (submode)
            TICKING: begin
              submode = SETTING;
              set_reset = 1;
              set_done = 0;
            end
            SETTING: ;
            default: ;
          endcase
		  end
        if (submode == TICKING) begin
           if (in_op1) displayAP = ~displayAP;
           if (in_op2) ringing = 0;
        end  
    end
  end
end



endmodule
