/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file    subghz_phy_app.h
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
#ifndef __SUBGHZ_PHY_APP_H__
#define __SUBGHZ_PHY_APP_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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
  * @brief  Init Subghz Application
  */
void SubghzApp_Init(void);

/* USER CODE BEGIN EFP */

typedef void (*PacketSendCallback)(uint8_t state);

typedef void (*PacketRecviceCallback)(uint8_t state, int16_t rssi, int8_t snr,
		uint8_t *payload, uint8_t payload_size);

void PacketSendCallbackRegister(PacketSendCallback callback);

void PacketRecviceCallbackRegister(PacketRecviceCallback callback);

void SubghzApp_Sleep();

void SubghzApp_TX(uint8_t *payload, uint8_t payload_size);

void SubghzApp_RX(uint16_t timeout);

/* USER CODE END EFP */

#ifdef __cplusplus
}
#endif

#endif /*__SUBGHZ_PHY_APP_H__*/
