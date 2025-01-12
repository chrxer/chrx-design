#include <iostream>
#include "StartupData.hpp"
#include "utils.cpp"
#include "lib.rs.h"
#include "lib.rs.cc"

std::string const& StartupData::get_str() const {
    static std::string hello = "Hello World!";
    return hello;
}

int main(int argc, char* argv[]) {
    setupLibrary(argc, argv);

    StartupData data("testchannel://localhost:999");
    on_startup(data);

    std::cout << "Called on_startup from cpp\n";

    return 0;
}