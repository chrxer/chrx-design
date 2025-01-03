.PHONY: all bridge cpp clean run
all:
	$(MAKE) bridge
	$(MAKE) cpp	
	$(MAKE) run

bridge:
	rm -rf out/bridge/
	make -C ./bridge
	mkdir -p out/bridge
	cp bridge/target/release/libchrx.so out/bridge
	cp -r -L bridge/target/cxxbridge/ out/bridge/cxx/

cpp:
	make -C ./cpp
	mkdir -p out
	cp cpp/cppapp out/

run:
	LD_LIBRARY_PATH=out/bridge ./out/cppapp ./out/bridge/libchrx.so

clean:
	make -C ./bridge clean
	make -C ./cpp clean
	rm -rf out
	mkdir -p out