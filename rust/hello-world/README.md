Let OpenOCD create a connection via ST-Link in another tab:

    openocd -f board/stm32f0discovery.cfg

Then exec `cargo run` to build and flash the program onto the discovery board.

If everything works fine you should see `Hello, World!` in the OpenOCD console.
