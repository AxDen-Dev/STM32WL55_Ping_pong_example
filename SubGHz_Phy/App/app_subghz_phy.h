/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file    app_subghz_phy.h
 * @author  MCD Application Team
 * @brief   Header of application of the SubGHz_Phy Middleware
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
#ifndef __APP_SUBGHZ_PHY_H__
#define __APP_SUBGHZ_PHY_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include "stdio.h"

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* External variables --------------------------------------------------------*/
/* USER CODE BEGIN EV */

/* USER CODE END EV */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
/**
  * @brief  Init SubGHz Radio Application
  */
void MX_SubGHz_Phy_Init(void);

/* USER CODE BEGIN EFP */

void MX_SubGhz_Phy_Radio_Sleep();

void MX_SubGhz_Phy_SendPacket(uint8_t *payload, uint8_t payload_size);

uint8_t MX_SubGhz_Phy_Get_SendPacket_State();

void MX_SubGhz_Phy_RecvicePacket();

uint8_t MX_SubGhz_Phy_Get_RecvicePacket_State();

void MX_SubGhz_Phy_Get_RecvicePacket(int16_t *rssi, int8_t *snr,
		uint8_t *payload, uint8_t *payload_size);

/* USER CODE END EFP */

#ifdef __cplusplus
}
#endif

#endif /*__APP_SUBGHZ_PHY_H__*/
