`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:45:29 12/17/2020 
// Design Name: 
// Module Name:    AlarmMode 
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
module AlarmMode(
  input ASSERT,
  input clk_2MHz,
  input reset, 
  input in_set,
  input in_op1,
  input in_op2,
  input in_AP,
  output out_mode,
  output out_AP,
  output [6:0] outHH,
  output [6:0] outMM,
  output [6:0] outSS,
  output [5:0] out_flick,
  output [20:0] alarmTime
);



reg set_reset = 0;
reg setting = 0;
reg displayAP = 0;
reg AON = 0;

assign out_mode = setting;
assign out_AP = displayAP;

wire LOAD;



wire [6:0] setHH, setMM, setSS;
wire [6:0] curHH, curMM, curSS;
wire [5:0] set_flick;

TimeKeeper timeKeeper(clk_2MHz, reset, ASSERT&LOAD, setHH, setMM, curHH, curMM, curSS);
TimeSetter timeSetter(clk_2MHz, set_reset, in_set, in_op1, in_op2, displayAP, setHH, setMM, setSS, set_flick, LOAD);

assign outHH = ((AON) ? curHH : ((setting) ? setHH : 7'b1111111));
assign outMM = ((AON) ? curMM : ((setting) ? setMM : 7'b1111111));
assign outSS = ((AON) ? curSS : ((setting) ? setSS : 7'b1111111));
assign out_flick = ((setting) ? set_flick : 6'b000000);

assign alarmTime = ((AON) ? {curHH, curMM, curSS} : 21'd2097151);

always @(posedge clk_2MHz or posedge reset) begin
  if (reset) begin
    displayAP = 0; 
    setting = 0;
    AON = 0;
    set_reset = 1;
  end
  else begin
    set_reset = 0;
    if (ASSERT) begin
      if (LOAD) begin
        setting = 0; 
        AON = 1;
      end
      else begin
        if (in_set) begin
          if (setting == 0) begin
            setting = 1;
            set_reset = 1;
            AON = 0;
          end 
			 else begin
				setting = 1;
			 end
			end
        else begin
          if (setting == 0) begin
            if (in_op1) displayAP = ~displayAP;
            if (in_op2) AON = 0;
          end
        end
      end
    end
	 else begin
		displayAP = in_AP;
	 end
  end
end

endmodule