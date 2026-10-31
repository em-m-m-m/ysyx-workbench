  #include "stdio.h"
  #include "stdlib.h"
  #include "assert.h"
  #include "Vexample.h"
  #include "verilated.h"
  #include "verilated_fst_c.h"
  int main(int argc, char** argv) {
      VerilatedContext* contextp = new VerilatedContext;
      contextp->commandArgs(argc, argv);
      Verilated::traceEverOn(true); // ⚠️ 关键的一行：开启全局波形追踪功能！
      Vexample* top = new  Vexample{contextp};
      VerilatedFstC* tfp = new VerilatedFstC;
      top->trace(tfp, 99);
      tfp->open("wave.fst");
      for(int i = 0; i< 10; i++) {
         int a = rand() & 1;
         int b = rand() & 1;
         top->a = a;
         top->b = b;
         top->eval(); //核心！每 eval 一次，就咔嚓拍一帧照
         tfp->dump(contextp->time());
         printf("a = %d, b = %d, f = %d\n", a, b, top->f);
         contextp->timeInc(1);
      }
      tfp->close();
      delete top;
      delete contextp;
      return 0;
  }
                      
