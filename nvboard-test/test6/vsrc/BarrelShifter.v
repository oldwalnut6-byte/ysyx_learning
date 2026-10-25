module BarrelShifter #(parameter W = 8)
(
    input   wire    [W-1:0] din,
    input   wire    [2:0]   shamt,  // 移位位数 shamt 为 3 位
    input   wire            lr,     // 1 为左移 0 为右移
    input   wire            al,     // 1 为算术 0 为逻辑
    output  wire    [W-1:0] dout
);

reg [W-1:0] r_dout;

localparam AL = 2'b11;  // 算术左移
localparam AR = 2'b10;  // 算术右移
localparam LL = 2'b01;  // 逻辑左移
localparam LR = 2'b00;  // 逻辑右移

always @(*) begin
    case({al, lr})
        AL, LL: begin
            case(shamt)
                3'd0: r_dout = din;
                3'd1: r_dout = {din[W-2:0], 1'b0};
                3'd2: r_dout = {din[W-3:0], 2'b0};
                3'd3: r_dout = {din[W-4:0], 3'b0};
                3'd4: r_dout = {din[W-5:0], 4'b0};
                3'd5: r_dout = {din[W-6:0], 5'b0};
                3'd6: r_dout = {din[W-7:0], 6'b0};
                3'd7: r_dout = {din[W-8:0], 7'b0};
                default: r_dout = din;
            endcase
        end

        AR: begin
            case(shamt)
                3'd0: r_dout = din;
                3'd1: r_dout = {{1{din[W-1]}}, din[W-1:1]};
                3'd2: r_dout = {{2{din[W-1]}}, din[W-1:2]};
                3'd3: r_dout = {{3{din[W-1]}}, din[W-1:3]};
                3'd4: r_dout = {{4{din[W-1]}}, din[W-1:4]};
                3'd5: r_dout = {{5{din[W-1]}}, din[W-1:5]};
                3'd6: r_dout = {{6{din[W-1]}}, din[W-1:6]};
                3'd7: r_dout = {{7{din[W-1]}}, din[W-1:7]};
                default: r_dout = din;
            endcase
        end
        LR: begin
            case(shamt)
                3'd0: r_dout = din;
                3'd1: r_dout = {1'b0, din[W-1:1]};
                3'd2: r_dout = {2'b0, din[W-1:2]};
                3'd3: r_dout = {3'b0, din[W-1:3]};
                3'd4: r_dout = {4'b0, din[W-1:4]};
                3'd5: r_dout = {5'b0, din[W-1:5]};
                3'd6: r_dout = {6'b0, din[W-1:6]};
                3'd7: r_dout = {7'b0, din[W-1:7]};
                default: r_dout = din;
            endcase
        end

        default: r_dout = din;
    endcase
end

assign dout = r_dout;

endmodule
