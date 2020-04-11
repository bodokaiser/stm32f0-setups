# STM32F072-Discovery board development setups

The aim of this repository is compare different development setups for the [STM32F072-Discovery kit][1].

| Name | Description | Build tool |
|------|-------------|------------|
| vanilla | No external dependencies | Makefile |
| [libopencm3][2] | Open source ARM Cortex-M microcontroller library | Makefile |
| [platformio][3] | New generation ecosystem for embedded development | Python |
| [rust][4] | Enabling usage of Rust on Embedded Platforms | Rust |

In order to use platformio with libopencm3 and the STM32F072-Discovery board,
it is necessary to apply [these changes][5].

[1]: https://www.st.com/en/evaluation-tools/32f072bdiscovery.html
[2]: https://github.com/libopencm3/libopencm3-template
[3]: https://platformio.org
[4]: https://docs.rust-embedded.org/discovery
[5]: https://gist.github.com/bodokaiser/8f714b5e5832ab02d0a7589ee210e595