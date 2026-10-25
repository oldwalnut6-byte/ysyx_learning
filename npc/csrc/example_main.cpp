#include "Vexample.h"   // Verilator 生成的电路模型接口
#include "verilated.h"  // Verilator 的仿真管理接口
#include <nvboard.h>    // NVBoard 的接口

// 函数声明：实现位于自动生成的 auto_bind.cpp 中。
void nvboard_bind_all_pins(Vexample* top);

int main(int argc, char** argv) {
    // 1. 创建仿真上下文对象，再取得它的地址。
    VerilatedContext context;
    VerilatedContext* contextp = &context;

    // 把程序启动时收到的命令行参数交给仿真上下文。
    contextp->commandArgs(argc, argv);

    // 2. 创建电路模型对象，让它使用上面的仿真上下文。
    Vexample model(contextp);

    // 取得模型对象的地址，后面通过 top 操作模型。
    Vexample* top = &model;

    // 3. 根据生成的绑定代码，连接模型端口与板卡引脚。
    nvboard_bind_all_pins(top);

    // 初始化虚拟板卡。
    nvboard_init();

    // 4. 没有收到仿真结束标志时，持续运行。
    while (!contextp->gotFinish()) {
        // 处理板卡操作，更新模型输入和板卡输出。
        nvboard_update();

        // 根据当前输入计算电路行为。
        top->eval();
    }

    // 5. 正常退出循环后，清理板卡并执行模型收尾操作。
    nvboard_quit();
    top->final();

    // model 和 context 都是局部对象，不使用 delete。
    // 正常离开函数时，先销毁 model，再销毁 context。
    return 0;
}
