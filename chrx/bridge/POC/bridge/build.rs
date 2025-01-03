fn main() {
    cxx_build::bridge("src/lib.rs")
        .std("c++11")
        .compile("bridge"); 
    
    println!("cargo:rerun-if-changed=src/main.rs");
}