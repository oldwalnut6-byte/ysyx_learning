module alu
#(
    parameter W = 4
)
(
    input  wire [W-1:0] a,
    input  wire [W-1:0] b,
    input  wire [2:0]   instr,

    output wire [W-1:0] alu_result,
    output wire [0:0]   cmp_less,
    output wire [0:0]   cmp_equal
);

    localparam [2:0] OP_ADD = 3'b000;
    localparam [2:0] OP_SUB = 3'b001;
    localparam [2:0] OP_NOT = 3'b010;
    localparam [2:0] OP_AND = 3'b011;
    localparam [2:0] OP_OR  = 3'b100;
    localparam [2:0] OP_XOR = 3'b101;
    localparam [2:0] OP_LT  = 3'b110;
    localparam [2:0] OP_EQ  = 3'b111;

    wire         sub_en;
    wire [W-1:0] arith_result;
    wire         arith_carry;
    wire         arith_overflow;
    wire         arith_zero;
    wire         less_signed;
    wire         equal_flag;

    assign sub_en = (instr == OP_SUB) ||
                    (instr == OP_LT)  ||
                    (instr == OP_EQ);

    alu_adder #(
        .N(W)
    ) u_alu_adder (
        .in_a     (a),
        .in_b     (b),
        .sub      (sub_en),
        .result   (arith_result),
        .carry    (arith_carry),
        .overflow (arith_overflow),
        .zero     (arith_zero)
    );

    // 有符号比较：A-B 的符号位与溢出位异或
    assign less_signed = arith_result[W-1] ^ arith_overflow;
    // A-B == 0 等价于 A == B
    assign equal_flag  = arith_zero;

    reg [W-1:0] r_alu_result;
    reg [0:0]   r_cmp_less;
    reg [0:0]   r_cmp_equal;

    always @(*) begin
        // 关键修改：开头给所有输出默认值，消除 latch
        r_alu_result = {W{1'b0}};
        r_cmp_less   = 1'b0;
        r_cmp_equal  = 1'b0;

        case (instr)
            OP_ADD, OP_SUB: r_alu_result = arith_result;
            OP_NOT:         r_alu_result = ~a;
            OP_AND:         r_alu_result = a & b;
            OP_OR:          r_alu_result = a | b;
            OP_XOR:         r_alu_result = a ^ b;

            OP_LT: begin
                r_cmp_less   = less_signed;

            end
            OP_EQ: begin
                r_cmp_equal  = equal_flag;

            end

            default: begin
                r_alu_result = {W{1'b0}};
                r_cmp_less   = 1'b0;
                r_cmp_equal  = 1'b0;
            end
        endcase
    end

    assign alu_result = r_alu_result;
    assign cmp_less   = r_cmp_less;
    assign cmp_equal  = r_cmp_equal;

endmodule
