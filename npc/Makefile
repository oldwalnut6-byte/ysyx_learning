all:
	@echo "Write this Makefile by your self."

sim:
	#$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe --build -Wall --top-module example vsrc/example.v csrc/main.cpp
	./obj_dir/Vexample

include ../Makefile
