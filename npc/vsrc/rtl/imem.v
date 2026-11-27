//指令存储器实例化
module imem(
    input  wire [2:0] addr,  //pc寄存器实际8位，截取低位2位地址
    output wire [7:0] inst   // 8位指令
);

    // 声明硬件数组：8个深度，每个指令8位宽
    reg [7:0] mem [0:7]; 

    // 初始化（把你写死的指令塞进去）
    initial begin
        mem[0] = 8'b10_00_1010; // 0: li r0, 10
        mem[1] = 8'b10_01_0000; // 1: li r1, 0
        mem[2] = 8'b10_10_0000; // 2: li r2, 0
        mem[3] = 8'b10_11_0001; // 3: li r3, 1
        mem[4] = 8'b00_01_01_11; // 4: add r1, r1, r3
        mem[5] = 8'b00_10_10_01; // 5: add r2, r2, r1
        mem[6] = 8'b11_0100_01;  // 6: bner0 r1, 4 (R0!=R1时跳回地址4)
        mem[7] = 8'b11_0111_11;  // 7: bner0 r3, 7 (R0!=R3时跳回地址7)
    end

    // 纯连线：给地址，吐数据
    assign inst = mem[addr];
    
endmodule
