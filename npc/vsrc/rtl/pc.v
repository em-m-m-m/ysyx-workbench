module pc #(WIDTH = 8 /*, RESET_VAL = 0*/) (//8位寄存器,定义输入输出
	input clk,
	//input rst,//复位reset
	input [WIDTH-1:0] din,
	output reg [WIDTH-1:0] dout,
	input wen
);
  always @(posedge clk) begin//计算动作
      // if (rst) dout <= RESET_VAL;
      // else
      if (wen) dout <= din;
  end
endmodule
