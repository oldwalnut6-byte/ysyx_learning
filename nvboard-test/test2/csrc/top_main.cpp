#include <nvboard.h>
#include <Vtop.h>

void nvboard_bind_all_pins(Vtop* top);


int main(int argc, char** argv) {
    VerilatedContext context;
    VerilatedContext* contextp = &context;

    contextp->commandArgs(argc, argv);
    Vtop model(contextp);
    Vtop* top = &model;
   // 3. 根据生成的绑定代码，连接模型端口与板卡引脚。
    nvboard_bind_all_pins(top);

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

    return 0;
}
