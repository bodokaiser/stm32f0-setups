# platformio

[platform.io][1] is an embedded development environment supports the developer to work with different hardware platforms and libraries.
In my opinion, the greatest value is created by taking care of the linking procedure which can be very challenging.
To enable libopencm3 for the stm32f072 discovery board one needs to [hack][2] into platform.io.
Unfortunately, I am not able to [create builds with said hack][3].

[1]: https://platformio.org
[2]: https://community.platformio.org/t/stm32f072-discovery-board-with-libopencm3/12995/4
[3]: https://community.platformio.org/t/syntax-error-in-ld-file-at-linking/13031/3
