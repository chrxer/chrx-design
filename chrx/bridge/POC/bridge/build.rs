fn main() {
    cxx_build::bridge("src/lib.rs")
        .include("../cpp")
        .flag_if_supported("-std=c++17")
        .compile("chrx");

    println!("cargo:rerun-if-changed=src/lib.rs");
    println!("cargo:rerun-if-changed=../cpp/StartupData.hpp");
}
