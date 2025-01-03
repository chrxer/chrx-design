#[cxx::bridge]
mod bridge {
    struct Point {
        x: i32,
        y: i32,
    }

    extern "Rust" {
        fn print_point(p: Point);
    }
}

fn print_point(p: bridge::Point) {
    println!("Point: ({}, {})", p.x, p.y);
}
