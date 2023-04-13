
#include <px4_platform_common/log.h>

__EXPORT int gpio_trigger_main(int argc, char *argv[]);

int gpio_trigger_main(int argc, char *argv[])
{
	PX4_INFO("TAKING A PICTURE");

    // px4_arch_configgpio(AUX_OUT_5);
    // px4_arch_configgpio(AUX_OUT_6);

    // px4_arch_gpiowrite(AUX_OUT_5,1);
    // px4_arch_gpiowrite(AUX_OUT_6,1);

    // px4_arch_gpiowrite(AUX_OUT_5,0);
    // px4_arch_gpiowrite(AUX_OUT_6,0);

	return OK;
}
