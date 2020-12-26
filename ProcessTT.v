`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:44:41 12/17/2020 
// Design Name: 
// Module Name:    ProcessTT
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
module ProcessTT( 
  input showAP,
  input leadingZero,
  input [6:0] finalHH,
  input [6:0] finalMM,
  input [6:0] finalSS,
  output [3:0] H1,
  output [3:0] H2,
  output [3:0] M1,
  output [3:0] M2,
  output [3:0] S1,
  output [3:0] S2
);
  
reg [3:0] h1, h2, m1, m2, s1, s2;
reg [7:0] temp;
reg [3:0] i;


assign H1 = h1;
assign H2 = h2;
assign M1 = m1;
assign M2 = m2;
assign S1 = s1;
assign S2 = s2;


always @(*) begin
  if (finalHH == 7'b1111111) begin
    h1 = 4'd15;
    h2 = 4'd15;
    m1 = 4'd15;
    m2 = 4'd15;
    s1 = 4'd15;
    s2 = 4'd15;
  end
  else begin
    if (showAP) begin
      if (finalHH > 12) begin
        h1 = 4'd12;
        h2 = 4'd14;
		  m1 = 0;
		  m2 = 0;
		  temp = finalHH - 12;
		  for (i = 0; i <10;i = i + 1) begin
			 if (temp >= 10) begin m1 = m1 + 1; temp = temp - 10; end
		  end
			m2 = temp;
      end
      else begin
        h1 = (finalHH == 12) ? 4'd12 : 4'd13;
        h2 = 4'd14;
		  m1 = 0;
		  m2 = 0;
		  temp = (finalHH == 0) ? 12 : finalHH;
		  for(i=0; i<10; i=i+1) begin
				if(temp >= 10) begin m1 = m1+1; temp = temp-10;end
		  end
		  m2 = temp;
      end
		temp = finalMM;
		s1 = 0;
		s2 = 0;
		for (i = 0; i < 10; i = i + 1) begin
			if (temp >= 10) begin s1 = s1 + 1; temp = temp - 10; end
		end
		s2 = temp;
    end
    else begin
		temp = finalHH;
		h1 = 0;
		h2 = 0;
		for (i = 0; i < 10; i = i + 1) begin
			if (temp >= 10) begin h1 = h1 + 1; temp = temp - 10; end
		end
		h2 = temp;
		if (leadingZero) begin
			if (h1 == 0) begin
				h1 = 4'd14;
			end
		end
		temp = finalMM;
		m1 = 0;
		m2 = 0;
		for (i = 0; i < 10; i = i + 1) begin
			if (temp >= 10) begin m1 = m1 + 1; temp = temp - 10; end
		end
		m2 = temp;
		if (leadingZero) begin
			if (m1 == 0) begin
				m1 = 4'd14;
			end
		end
      temp = finalSS;
		s1 = 0;
		s2 = 0;
		for (i = 0; i < 10; i = i + 1) begin
			if (temp >= 10) begin s1 = s1 + 1; temp = temp - 10; end
		end
		s2 = temp;
    end
  end
end



endmodule
