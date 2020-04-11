#![no_main]
#![no_std]

#[allow(unused)]
use panic_halt;

use cortex_m_rt::entry;
use cortex_m_semihosting::hprintln;

#[entry]
fn main() -> ! {
    hprintln!("Hello, world!").unwrap();

    loop {

    }
}
