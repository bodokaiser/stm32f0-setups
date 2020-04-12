#include <modm/board.hpp>

using namespace Board;

int
main()
{
    Board::initialize();

    LedUp::set();
    LedDown::set();

    while (true) {
        LedRight::toggle();
        LedUp::toggle();
        LedLeft::toggle();
        LedDown::toggle();
        modm::delay(1000ms);
    }
}