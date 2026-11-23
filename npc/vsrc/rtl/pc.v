module pc(//8位寄存器,定义输入输出
	input clk,
	input rst,//复位reset
	input [7:0] in,
	output reg [7:0] out,
);
  reg #(8,0) pc_reg(
        .clk(clk),
	.rst(rst),
	.din(in),
	.dout(out),
	.wen(1'b1),
  );
endmodule
