//加法器
module sum(
  input [7,0] a,
  input [7,0] b,
  output [7,0] c,
);
add #(8) sum_add(
  .a(8'b1),
  .b(b),
  .c(c),
);
endmodule
