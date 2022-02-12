/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wlxx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SPI1_SCK_Pin GPIO_PIN_3
#define SPI1_SCK_GPIO_Port GPIOB
#define SPI1_MISO_Pin GPIO_PIN_4
#define SPI1_MISO_GPIO_Port GPIOB
#define SPI1_MOSI_Pin GPIO_PIN_5
#define SPI1_MOSI_GPIO_Port GPIOB
#define GPIO_1_Pin GPIO_PIN_8
#define GPIO_1_GPIO_Port GPIOB
#define GPIO_0_Pin GPIO_PIN_0
#define GPIO_0_GPIO_Port GPIOA
#define GPIO_3_Pin GPIO_PIN_1
#define GPIO_3_GPIO_Port GPIOA
#define RF_SWITCH_VDD_Pin GPIO_PIN_5
#define RF_SWITCH_VDD_GPIO_Port GPIOA
#define RF_SWITCH_CTRL_Pin GPIO_PIN_0
#define RF_SWITCH_CTRL_GPIO_Port GPIOB
#define ADC_0_Pin GPIO_PIN_2
#define ADC_0_GPIO_Port GPIOB
#define WKUP_Pin GPIO_PIN_12
#define WKUP_GPIO_Port GPIOB
#define ADC_1_Pin GPIO_PIN_10
#define ADC_1_GPIO_Port GPIOA
#define GPIO_2_Pin GPIO_PIN_13
#define GPIO_2_GPIO_Port GPIOC
#define SPI1_NSS_Pin GPIO_PIN_15
#define SPI1_NSS_GPIO_Port GPIOA
void   MX_SUBGHZ_Init(void);
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
