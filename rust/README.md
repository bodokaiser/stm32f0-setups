# Rust

Here you find examples written in rust based on [the excellent tutorial][1] from [nercury][2]

## Usage

Change into the respective directory, i.e. `cd hello-world` or `cd led`.

Let OpenOCD create a connection via ST-Link in another tab:

    openocd -f board/stm32f0discovery.cfg

Then exec `cargo run` to build and flash the program onto the discovery board.

If everything works fine you should see `Hello, World!` in the OpenOCD console.

[1]: http://nercury.github.io/rust/embedded/experiments/2018/04/29/rust-embedded-01-discovery-vl-flipping-bits.html
[2]: https://github.com/Nercury
