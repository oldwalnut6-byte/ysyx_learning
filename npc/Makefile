# 未另行指定时，默认运行双控开关
TOPNAME ?= example

# 每个实验使用独立的生成目录
BUILD_DIR = $(abspath ./build/$(TOPNAME))

# 根据实验名称选择约束文件
NXDC_FILES = $(abspath ./constr/$(TOPNAME).nxdc)

BIN = $(BUILD_DIR)/$(TOPNAME)
SRC_AUTO_BIND = $(BUILD_DIR)/auto_bind.cpp

# 收集 Verilog 文件，由 --top-module 选择顶层
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")

# 只选择当前实验的 C++ 激励文件
CSRCS = $(abspath ./csrc/$(TOPNAME)_main.cpp)
CSRCS += $(SRC_AUTO_BIND)

all: sim

include $(NVBOARD_HOME)/scripts/nvboard.mk

.PHONY: all sim

sim: $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
#	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	mkdir -p $(BUILD_DIR)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $(NXDC_FILES) $(SRC_AUTO_BIND)
	verilator --cc --exe --build \
		--top-module $(TOPNAME) \
		--Mdir $(BUILD_DIR)/obj_dir \
		-o $(BIN) \
		$^ \
		-CFLAGS "$(CXXFLAGS) -I$(NVBOARD_HOME)/usr/include" \
		-LDFLAGS "$(LDFLAGS)"
	$(BIN)

include ../Makefile
