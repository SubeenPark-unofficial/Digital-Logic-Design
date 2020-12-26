module top(
    input clk,
    input push_switch1,
    input push_switch2,
    input push_switch3,
    input push_switch4,
    input push_switch5,
    input push_switch6,

    output [6:0] segment1,
    output [6:0] segment2,
    output [6:0] segment3,
    output [6:0] segment4,
    output [6:0] segment5,
    output [6:0] segment6,
    
    input dip_switch1,
    input dip_switch2,
    input dip_switch3,
    input dip_switch4,
    input dip_switch5,
    input dip_switch6,
    input dip_switch7,
    input dip_switch8,
    input dip_switch9,
    input dip_switch10,

    output led1_red,
    output led2_yellow,	
    output led3_green,
    output led4_red,
    output led5_yellow,
    output led6_green
);

// Instantiate your design module here
// Example) Your_module uut( .clk(clk), .XX(led1_red) .YY(led2_yellow) ....);
DigitalClock digitalClock(
	.clk_2MHz(clk),
	.reset(push_switch6),
	.s1_async(push_switch1),
	.s2_async(push_switch2),
	.s3_async(push_switch3),
	.s4_async(push_switch4),
	.s5_async(push_switch5),
	.d1(segment1),
	.d2(segment2),
	.d3(segment3),
	.d4(segment4),
	.d5(segment5),
	.d6(segment6)
    );




endmodule