# Assembly

Based on [this tutorial][1].

The assembly file `core.S` sets register `r0` to `0` and then increments `r0` by `1`.

## Usage

Connect the STM32F0 discovery board via USB and launch an OpenOCD server in a terminal via `openocd -f board/stm32f0discovery.cfg`.

Then run `make` to build the binaries and `make flash` to open a `gdb` shell.

In the `gdb` shell, connect to the OpenOCD server via:

    target extended-remote :3333

Flash the program onto the chip via:

    load

Let the program run for some iterations and examine the registers via:

    info registers

We should see that `r0` has increased.

[1]: https://vivonomicon.com/2018/04/02/bare-metal-stm32-programming-part-1-hello-arm/