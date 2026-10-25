module top
(
    input  wire [7:0] a,
    output wire [2:0] y,
    output wire       valid,
    output wire [7:0] o_seg
);

    pencoder u_pencoder (
        .a     (a),
        .y     (y),
        .valid (valid)
    );

    seg u_seg (
        .i_seg (y),
        .o_seg (o_seg)
    );

endmodule
