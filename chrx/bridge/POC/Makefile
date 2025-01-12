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
	mkdir -p build
	cp -rf cpp/* build
	cp -rf out/bridge/cxx/chrx/src/* build
	cmake -B./build -S./build
	make -C ./build
	mkdir -p out
	mv build/main out/cppapp
	rm -rf build

run:
	LD_LIBRARY_PATH=out/bridge ./out/cppapp ./out/bridge/libchrx.so

clean:
	make -C ./bridge clean
	rm -rf out build cppbuild
	mkdir -p out