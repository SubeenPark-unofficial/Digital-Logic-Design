cd SNU-BoardSim/resource
rm -rf obj_dir
../verilator/bin/verilator  --cc  ../../top.v -I../../  --exe sim.cpp >../../log.sim 2>&1
cp .sim.cpp obj_dir/sim.cpp
make -j -C obj_dir/ -f Vtop.mk Vtop
./obj_dir/Vtop
sleep 1000
