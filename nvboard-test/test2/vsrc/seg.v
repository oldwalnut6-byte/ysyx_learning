module seg(
  input  wire [2:0] i_seg,
  output wire [7:0] o_seg
);

reg [7:0] o_seg_r;

// 位序：[7]:A, [6]:B, [5]:C, [4]:D, [3]:E, [2]:F, [1]:G, [0]:DP
// 极性：共阳极（0 亮，1 灭）
always @(*) begin
  case (i_seg)
    3'd0: o_seg_r = 8'h03;
    3'd1: o_seg_r = 8'h9F;
    3'd2: o_seg_r = 8'h25;
    3'd3: o_seg_r = 8'h0D;
    3'd4: o_seg_r = 8'h99;
    3'd5: o_seg_r = 8'h49;
    3'd6: o_seg_r = 8'h41;
    3'd7: o_seg_r = 8'h1F;
    default: o_seg_r = 8'hFF; // 全灭
  endcase
end

assign o_seg = o_seg_r; // 不再取反

endmodule
