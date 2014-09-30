
#ifndef _UEI_IRRC_UART_H
#define _UEI_IRRC_UART_H

#if defined(CONFIG_MACH_APQ8064_GVKT)
#include <linux/gpio.h>
#include "../../../../arch/arm/mach-msm/lge/gv/board-gv.h"

#define VREG_3P0_IRDA_EN        PM8921_GPIO_PM_TO_SYS(18)
#endif
#define UEI_IRRC_NAME "UEI_IRRC"

struct uei_irrc_pdata_type{
	unsigned int en_gpio;
	int en_state;
	struct work_struct uei_irrc_work;
};

#endif /* _UEI_IRRC_UART_H */
