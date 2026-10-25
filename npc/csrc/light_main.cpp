#include "Vlight.h"
#include "verilated.h"
#include <nvboard.h>

// 实现由引脚绑定工具生成。
void nvboard_bind_all_pins(Vlight* top);

// 产生一个时钟周期。
void single_cycle(Vlight* top) {
    top->clk = 0;
    top->eval();

    top->clk = 1;
    top->eval();
}

// 保持复位有效，并运行 n 个时钟周期。
void reset(Vlight* top, int n) {
    top->rst = 1;

    while (n > 0) {
        single_cycle(top);
        n--;
    }

    top->rst = 0;
}

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    Vlight* top = new Vlight{contextp};

    nvboard_bind_all_pins(top);
    nvboard_init();

    reset(top, 10);

    while (!contextp->gotFinish()) {
        nvboard_update();
        single_cycle(top);
    }

    nvboard_quit();
    top->final();
    delete top;
    delete contextp;

    return 0;
}
