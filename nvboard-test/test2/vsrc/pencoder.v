module pencoder (
    input  wire [7:0] a,
    output wire [2:0] y,
    output wire       valid
);

    // 至少一个输入为 1 时，编码有效。
    assign valid = |a;
	

    reg [2:0] y_r;

    always @(*) begin
        casez (a)
            8'b1???????: y_r = 3'd7;
            8'b01??????: y_r = 3'd6;
            8'b001?????: y_r = 3'd5;
            8'b0001????: y_r = 3'd4;
            8'b00001???: y_r = 3'd3;
            8'b000001??: y_r = 3'd2;
            8'b0000001?: y_r = 3'd1;
            8'b00000001: y_r = 3'd0;
            default:     y_r = 3'd0;
        endcase
    end

    assign y = y_r;
endmodule
