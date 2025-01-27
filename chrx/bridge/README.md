The  `libchrx.so` is built as a [chromium component](https://chromium.googlesource.com/chromium/src/+/HEAD/docs/component_build.md) and communicates with the server based on [Cap'n Proto](https://github.com/capnproto/capnproto-rust/tree/master) over the port `back-chn`.
## Concept
Bridge can be compiled seperatly from Chromium, allowing
1. Integration of updates
2. Easier customization
4. Shorter (developer-friendlier) compillation times
5. Faster communication between the browser and bridge

## API
TBD