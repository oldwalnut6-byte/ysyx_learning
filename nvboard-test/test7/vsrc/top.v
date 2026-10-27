module top (
    input  wire       clk,
    input  wire       rst,
    input  wire       ps2_clk,
    input  wire       ps2_data,

    output wire  [7:0] o_seg1,
    output wire  [7:0] o_seg2

);

wire [7:0] keyboard_data;
wire       ready;
wire 	clrn = ~rst;


ps2_keyboard u_keyboard (
	.clk        (clk),
        .clrn       (clrn),
        .ps2_clk    (ps2_clk),
        .ps2_data   (ps2_data),
        .data       (keyboard_data),
        .ready      (ready),
        .nextdata_n (~ready),
        .overflow   ()			//overflow是表征之前有没有溢出的一个标志位。
);
Seg u_Seg1(
	.i_seg(keyboard_data[3:0]),
	.o_seg(o_seg1)
	);


Seg u_Seg2(
	.i_seg(keyboard_data[7:4]),
	.o_seg(o_seg2)
	);

endmodule
