The  `Rust` server (`libchrx.so`)
## Concept.
Due to Chrome's [multi-process-architecture](https://www.chromium.org/developers/design-documents/multi-process-architecture/), there will be multiple instances of the [bridge](../bridge) shared library, which each connect to the server.

## POC
A proof of Concept for the `C++` <-> `Rust` bridge can be found in [POC](POC)