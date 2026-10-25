module shift_reg#(parameter M = 8)
(
    	input  	wire       	clk,
    	input  	wire       	rst,      
   	input  	wire 	[2:0] 	mode,       
    	input  	wire 	[M-1:0] din,        
    	input  	wire       	serial_in,  
	output 	reg  	[M-1:0] dout       
);

localparam [2:0] CLR      = 3'b000; // 清0
localparam [2:0] LOAD     = 3'b001; // 置数
localparam [2:0] SHR      = 3'b010; // 逻辑右移
localparam [2:0] SHL      = 3'b011; // 逻辑左移
localparam [2:0] ASR      = 3'b100; // 算术右移
localparam [2:0] SER_IN   = 3'b101; // 左端串行输入1位，并行输出8位
localparam [2:0] ROR      = 3'b110; // 循环右移
localparam [2:0] ROL      = 3'b111; // 循环左移


always @(posedge clk)
begin
	if (rst)
	begin
	
		dout <= {M{1'b0}};
	
	end
	else begin
		case(mode)
			CLR:dout <= {M{1'b0}};
			LOAD:dout <= din;
			SHR:dout <= {1'b0,dout[M-1:1]};
			SHL:dout <= {dout[M-2:0],1'b0};
			ASR:dout <= {dout[M-1],dout[M-1:1]};
			SER_IN:dout <= {serial_in,dout[M-1:1]};
			ROR:dout <= {dout[0],dout[M-1:1]};
			ROL:dout <= {dout[M-2:0],dout[M-1]};
			default:dout <= dout;
		endcase
	end		   
end




endmodule
