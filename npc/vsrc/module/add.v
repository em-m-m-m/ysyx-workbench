 //加法器标准模板
  module add #(WIDTH = 1) (
    input [WIDTH-1,0] a,
    input [WIDTH-1,0] b,
    output [WIDTH-1,0] c
  );
    assign c=a+b;
  endmodule
    
    
