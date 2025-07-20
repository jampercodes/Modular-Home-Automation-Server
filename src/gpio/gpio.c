#include "gpio.h"

int init_gpio() {
#ifdef RASPBERRY_PI
    init_gpio_raspberry();
    return 0;
#else
    return 1;
#endif
}