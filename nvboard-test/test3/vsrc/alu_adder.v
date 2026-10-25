module alu_adder #(
    parameter N = 4
)(
    input  wire [N-1:0] in_a,
    input  wire [N-1:0] in_b,
    input  wire         sub,       // 0: 加法; 1: 减法

    output wire [N-1:0] result,
    output wire         carry,     // 加法进位；减法时1表示无借位
    output wire         overflow,  // 有符号溢出
    output wire         zero
);

wire [N-1:0] b = sub ? ((~in_b) + {{(N-1){1'b0}}, 1'b1}) : in_b;

assign {carry, result} = {1'b0, in_a} + {1'b0, b};

assign overflow = sub
    ? ((in_a[N-1] != in_b[N-1]) && (result[N-1] != in_a[N-1]))
    : ((in_a[N-1] == in_b[N-1]) && (result[N-1] != in_a[N-1]));

assign zero = (result == {N{1'b0}});

endmodule
