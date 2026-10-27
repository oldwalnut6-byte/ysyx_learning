module top(
    input clk,
    input rst,

    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,	//行消隐控制，HSYNC拉高并不代表像素就有效，只有vaild拉高了才是有效像素
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B
);


wire [23:0]	vga_data;
wire [9:0]	h_addr;
wire [9:0]	v_addr;
vga_ctrl my_vga_ctrl(
    .pclk(clk),
    .reset(rst),
    .vga_data(vga_data),
    .h_addr(h_addr),
    .v_addr(v_addr),
    .hsync(VGA_HSYNC),
    .vsync(VGA_VSYNC),
    .valid(VGA_BLANK_N),
    .vga_r(VGA_R),
    .vga_g(VGA_G),
    .vga_b(VGA_B)
);


vmem my_vmem(
    .h_addr(h_addr),
    .v_addr(v_addr[8:0]),
    .vga_data(vga_data)
);



endmodule
