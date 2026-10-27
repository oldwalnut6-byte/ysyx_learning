module Seg(
  input  wire [3:0] i_seg,
  output wire [7:0] o_seg
);

reg [7:0] o_seg_r;

// 位序：[7]:A, [6]:B, [5]:C, [4]:D, [3]:E, [2]:F, [1]:G, [0]:DP
// 极性：共阳极（0 亮，1 灭）
always @(*) begin
  case (i_seg)
    4'd0:  o_seg_r = 8'h03;
    4'd1:  o_seg_r = 8'h9F;
    4'd2:  o_seg_r = 8'h25;
    4'd3:  o_seg_r = 8'h0D;
    4'd4:  o_seg_r = 8'h99;
    4'd5:  o_seg_r = 8'h49;
    4'd6:  o_seg_r = 8'h41;
    4'd7:  o_seg_r = 8'h1F;
    4'd8:  o_seg_r = 8'h01;
    4'd9:  o_seg_r = 8'h09;
    4'd10: o_seg_r = 8'h11; // A
    4'd11: o_seg_r = 8'hC1; // b
    4'd12: o_seg_r = 8'h63; // C
    4'd13: o_seg_r = 8'h91; // d
    4'd14: o_seg_r = 8'h61; // E
    4'd15: o_seg_r = 8'h71; // F
    default: o_seg_r = 8'hFF; // 全灭
  endcase
end

assign o_seg = o_seg_r;

endmodule
