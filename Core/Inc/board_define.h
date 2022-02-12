#ifndef INC_BOARD_DEFINE_H_
#define INC_BOARD_DEFINE_H_

#include "main.h"

//Application Board PinMap
#define GPIO_LED_0_Pin SPI1_MISO_Pin
#define GPIO_LED_0_Port SPI1_MISO_GPIO_Port

#define GPIO_LED_1_Pin SPI1_SCK_Pin
#define GPIO_LED_1_Port SPI1_SCK_GPIO_Port

#define GPIO_LED_2_Pin SPI1_NSS_Pin
#define GPIO_LED_2_Port SPI1_NSS_GPIO_Port

#define GPIO_GPIO_0_Pin GPIO_0_Pin
#define GPIO_GPIO_0_Port GPIO_0_GPIO_Port

#define GPIO_BUTTON_0_Pin GPIO_1_Pin
#define GPIO_BUTTON_0_Port GPIO_1_GPIO_Port

#define GPIO_BUTTON_1_Pin GPIO_2_Pin
#define GPIO_BUTTON_1_Port GPIO_2_GPIO_Port

#define GPIO_GPIO_3_Pin GPIO_3_Pin
#define GPIO_GPIO_3_Port GPIO_3_GPIO_Port

#endif /* INC_BOARD_DEFINE_H_ */
