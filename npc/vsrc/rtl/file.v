//register file 
moudle file(
	input clk,
	input rst,
	input [7:0] in,
	output reg [7:0] out,
);
reg #(8,0) pc_reg(
	.clk(clk),
	.din(in),
	.dout(out),
	.wen(1'b1),
);
endmodule
