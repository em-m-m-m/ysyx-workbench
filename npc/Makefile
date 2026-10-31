all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	rm -rf obj_dir
	verilator --cc --exe --build --trace-fst main.cpp example.v
	./obj_dir/Vexample
	gtkwave wave.fst &
	echo "波形已生成，请手动查看"
include ../Makefile
