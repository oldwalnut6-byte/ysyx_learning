#include <nvboard.h>
#include "Vtop.h"

// Makefile 将 TOP_NAME 定义为 Vshift_reg。
static TOP_NAME dut;

// 实现由 auto_pin_bind.py 自动生成。
void nvboard_bind_all_pins(TOP_NAME* top);

// 自动产生一个时钟周期。
static void single_cycle() {
    dut.clk = 0;
    dut.eval();

    dut.clk = 1;
    dut.eval();
}

// 高电平同步复位，持续 n 个周期。
static void reset(int n) {
    dut.rst = 1;

    while (n-- > 0) {
        single_cycle();
    }

    dut.rst = 0;
}


int main() {
    // 连接模型端口与虚拟板卡引脚。
    nvboard_bind_all_pins(&dut);

    // 初始化板卡。
    nvboard_init();
    

    reset(10);
    // 持续更新板卡并驱动电路。
    while (1) {
        nvboard_update();
	single_cycle();	
	//dut.eval();
    }
}
