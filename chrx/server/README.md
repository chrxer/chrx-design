The  `Rust` server, to which `libchrx.so` and the framework implementation (different languages) connect to.

## Concept.
Due to Chrome's [multi-process-architecture](https://www.chromium.org/developers/design-documents/multi-process-architecture/), there will be multiple instances of the [bridge](../bridge) shared library, which each connect to the server.

## API
TBD