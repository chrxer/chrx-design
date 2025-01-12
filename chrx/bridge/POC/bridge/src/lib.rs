#[cxx::bridge]
mod ffi {
    unsafe extern "C++" {
        include!("StartupData.hpp");

        type StartupData;

        fn get_str(&self) -> &CxxString;
        fn get_channel(&self) -> &CxxString;
    }

    extern "Rust" {
        fn on_startup(data: &StartupData);
    }
}

pub fn on_startup(data: &ffi::StartupData) {
    let url = data.get_str().to_string();
    let channel = data.get_channel().to_string();
    println!("Got string: {}, channel: {} from Rust", url, channel);
}