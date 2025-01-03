#include <iostream>
#include <dlfcn.h>
#include <unistd.h>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "chrx/src/lib.rs.h"
#include "chrx/src/lib.rs.cc"

#include "utils.cpp"

int main(int argc, char* argv[]) {
    // Setup the library (load and resolve paths)
    setupLibrary(argc, argv);

    // Create a Point struct
    Point point;
    point.x = 10;
    point.y = 20;

    // Call the Rust function with the struct
    print_point(point);

    return 0;
}
