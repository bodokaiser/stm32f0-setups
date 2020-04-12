#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>


int main(void) {
    rcc_periph_clock_enable(RCC_GPIOC);
    gpio_mode_setup(GPIOC, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO6);
    gpio_mode_setup(GPIOC, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO7);
    gpio_mode_setup(GPIOC, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO8);
    gpio_mode_setup(GPIOC, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO9);

    gpio_toggle(GPIOC, GPIO6);
    gpio_toggle(GPIOC, GPIO7);
    gpio_toggle(GPIOC, GPIO8);
    gpio_toggle(GPIOC, GPIO9);

    int i;

    while (true) {
        gpio_toggle(GPIOC, GPIO7);

        for (i = 0; i < 10000; i++) {
            __asm__("nop");
        }
    }

    return 0;
}
