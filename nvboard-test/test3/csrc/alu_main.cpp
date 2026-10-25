#include <nvboard.h>
#include <Valu.h>

void nvboard_bind_all_pins(Valu* alu);


int main(int argc, char** argv) {
    VerilatedContext context;
    VerilatedContext* contextp = &context;

    contextp->commandArgs(argc, argv);
    Valu model(contextp);
    Valu* alu = &model;
   // 3. 根据生成的绑定代码，连接模型端口与板卡引脚。
    nvboard_bind_all_pins(alu);

    nvboard_init();

    // 4. 没有收到仿真结束标志时，持续运行。
    while (!contextp->gotFinish()) {
        // 处理板卡操作，更新模型输入和板卡输出。
        nvboard_update();

        // 根据当前输入计算电路行为。
        alu->eval();
    }

    // 5. 正常退出循环后，清理板卡并执行模型收尾操作。
    nvboard_quit();
    alu->final();

    return 0;
}
