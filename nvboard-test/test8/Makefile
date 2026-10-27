# 默认实验
TOPNAME ?= top

# 生成文件
BUILD_DIR = $(abspath ./build/$(TOPNAME))
BIN = $(BUILD_DIR)/$(TOPNAME)
SRC_AUTO_BIND = $(BUILD_DIR)/auto_bind.cpp

# 约束文件
NXDC_FILES = $(abspath ./constr/$(TOPNAME).nxdc)

# 源码目录
VSRC = $(abspath ./vsrc)
CSRC = $(abspath ./csrc)

# 源文件列表
VSRCS = $(shell find $(VSRC) -name "*.v")
CSRCS = $(CSRC)/$(TOPNAME)_main.cpp
CSRCS += $(SRC_AUTO_BIND)

# 保持它为第一个普通目标
all: sim

# 引入 NVBoard 的变量和构建规则
include $(NVBOARD_HOME)/scripts/nvboard.mk

# 准备传给 C++ 编译器的选项
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME=V$(TOPNAME)	#相当于在代码编译的时候自动加一个宏定义

.PHONY: all sim lint clean

# 生成引脚绑定代码
$(SRC_AUTO_BIND): $(NXDC_FILES)
	mkdir -p $(BUILD_DIR)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $< $@

# 构建并运行仿真
sim: $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	verilator --cc --exe --build \
		--top-module $(TOPNAME) \
		--Mdir $(BUILD_DIR)/obj_dir \
		-o $(BIN) \
		$^ \
		-CFLAGS "$(CXXFLAGS)" \
		-LDFLAGS "$(LDFLAGS)"
	$(BIN)

# RTL 静态检查
lint:
	verilator --lint-only --top-module $(TOPNAME) $(VSRCS)

# 仅删除本工程的生成目录
clean:
	rm -rf ./build
