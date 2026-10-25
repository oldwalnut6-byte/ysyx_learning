# 未另行指定时，默认运行双控开关
TOPNAME ?= decoder
# 每个实验使用独立的生成目录
BUILD_DIR = $(abspath ./build/$(TOPNAME))

# 根据实验名称选择约束文件
NXDC_FILES = $(abspath ./constr/$(TOPNAME).nxdc)

#生成可执行文件的路径
BIN = $(BUILD_DIR)/$(TOPNAME)
#自动绑定管脚函数的路径
SRC_AUTO_BIND = $(BUILD_DIR)/auto_bind.cpp

# 收集 Verilog 文件，由 --top-module 选择顶层
VSRC = $(abspath ./vsrc)
CSRC = $(abspath ./csrc)
VSRCS = $(shell find $(VSRC) -name "*.v")

# 只选择当前实验的 C++ 激励文件
CSRCS = $(abspath $(CSRC)/$(TOPNAME)_main.cpp)
CSRCS += $(SRC_AUTO_BIND)

all: sim

include $(NVBOARD_HOME)/scripts/nvboard.mk

.PHONY: all sim

sim: $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	verilator --cc --exe --build \
                --top-module $(TOPNAME) \
                --Mdir $(BUILD_DIR)/obj_dir \
                -o $(BIN) \
                $^ \
                -CFLAGS "$(CXXFLAGS) -I$(NVBOARD_HOME)/usr/include" \
                -LDFLAGS "$(LDFLAGS)"
	$(BIN)

$(SRC_AUTO_BIND): $(NXDC_FILES)
	mkdir -p $(BUILD_DIR)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $(NXDC_FILES) $(SRC_AUTO_BIND)


remake: 
	rm -rf ./vsrc/*.v
	rm -rf ./csrc/*.cpp
	rm -rf ./constr/*.nxdc
	rm -rf ./build

lint:
	verilator --lint-only --top-module $(TOPNAME) $(VSRC)/$(TOPNAME).v 
