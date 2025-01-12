## Build bridge
Requires [rust](https://www.rust-lang.org/tools/install) to be installed
```bash
make bridge
```

This compiles [`bridge/src/lib.rs`](bridge/src/lib.rs) to `out/bridge/libchrx.so` and generates the headers for cpp to `out/bridge/cxx/chrx/src`

## Build cppapp
Requires [cmake](https://packages.debian.org/bullseye/cmake) to be installed
```bash
make cppapp
```

Compiles [`cpp/main.cpp`](cpp/main.cpp) to `out/cppapp`.

## Usage
```bash
LD_LIBRARY_PATH=out/bridge ./out/cppapp ./out/bridge/libchrx.so
```
(aequivalent to `make run`) \
output
```
chrx loaded from: /home/user/VSCProjects/chrxer/chrx-design/chrx/bridge/POC/out/bridge/libchrx.so
Got string: Hello World!, channel: testchannel://localhost:999 from Rust
Called on_startup from cpp
```