cmake_minimum_required(VERSION 3.14)
project(RustCppBridge)

set(CMAKE_CXX_STANDARD 17)

# Path to the Rust library
add_library(bridge SHARED IMPORTED)
set_target_properties(bridge PROPERTIES
    IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/../out/bridge/libchrx.so"
)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE bridge)
