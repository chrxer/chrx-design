The  `C++` <-> `Rust` bridge (`libchrx.so`) is implemented with [cxx](https://github.com/dtolnay/cxx) and [cxx_gen](https://docs.rs/cxx-gen/latest/cxx_gen/).

## Concept
Bridge can be compiled seperatly from Chromium, allowing
1. Integration of updates
2. Easier customization
4. Shorter (developer-friendlier) compillation times
5. Faster communication between the browser and bridge

## POC
A proof of Concept for the `C++` <-> `Rust` bridge can be found in [POC](POC)