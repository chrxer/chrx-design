#include <iostream>
#include <dlfcn.h>
#include <unistd.h>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// Helper function to resolve the absolute path of the library
std::string resolveLibPath(const std::string& libPath) {
    char resolvedPath[PATH_MAX];
    if (realpath(libPath.c_str(), resolvedPath) != nullptr) {
        return std::string(resolvedPath);
    } else {
        std::cerr << "Error resolving library path: " << strerror(errno) << std::endl;
        exit(1);
    }
}

// Context manager class for handling shared library loading and unloading
class LibraryLoader {
public:
    explicit LibraryLoader(const std::string& libPath) {
        std::string resolvedPath = resolveLibPath(libPath);
        handle = dlopen(resolvedPath.c_str(), RTLD_LAZY);
        if (!handle) {
            std::cerr << "Error loading chrx: " << dlerror() << std::endl;
            exit(1);
        }
        std::cout << "chrx loaded from: " << resolvedPath << std::endl;
    }

    ~LibraryLoader() {
        if (handle) {
            dlclose(handle);
        }
    }

private:
    void* handle;
};

void setupLibrary(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <chrx_path.so>" << std::endl;
        exit(1);
    }

    // Load the library using the context manager
    LibraryLoader loader(argv[1]);
}
