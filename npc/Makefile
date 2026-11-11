all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	rm -rf obj_dir wave.fst wave.vcd
	verilator --cc --exe --build --trace-fst csrc/sim_main.cpp vsrc/top.v
	./obj_dir/Vtop
	gtkwave wave.fst &
	echo "波形已生成，请手动查看"
include ../Makefile
