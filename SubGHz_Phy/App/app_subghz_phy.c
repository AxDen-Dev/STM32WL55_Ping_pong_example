/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file    app_subghz_phy.c
 * @author  MCD Application Team
 * @brief   Application of the SubGHz_Phy Middleware
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

/* Includes ------------------------------------------------------------------*/
#include "app_subghz_phy.h"
#include "subghz_phy_app.h"
#include "sys_app.h"
#include "cmsis_os.h"

/* USER CODE BEGIN Includes */

#include "stdio.h"
#include "string.h"

/* USER CODE END Includes */

/* External variables ---------------------------------------------------------*/
/* USER CODE BEGIN EV */

extern osSemaphoreId_t radioBinarySemHandle;

/* USER CODE END EV */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

static uint8_t radio_tx_state = 0x00;
static uint8_t radio_rx_state = 0x00;

static int16_t rx_rssi = 0;
static int8_t rx_snr = 0;
static uint8_t rx_payload_size = 0;
static uint8_t rx_payload_buffer[128] = { 0x00 };

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

static void packetSendCallback(uint8_t state);

static void packetRecviceCallback(uint8_t state, int16_t rssi, int8_t snr,
		uint8_t *payload, uint8_t payload_size);

/* USER CODE END PFP */

/* Exported functions --------------------------------------------------------*/

void MX_SubGHz_Phy_Init(void)
{
  /* USER CODE BEGIN MX_SubGHz_Phy_Init_1 */

  /* USER CODE END MX_SubGHz_Phy_Init_1 */
  SystemApp_Init();
  SubghzApp_Init();
  /* USER CODE BEGIN MX_SubGHz_Phy_Init_2 */

	PacketSendCallbackRegister(packetSendCallback);
	PacketRecviceCallbackRegister(packetRecviceCallback);

  /* USER CODE END MX_SubGHz_Phy_Init_2 */
}

/* USER CODE BEGIN EF */

static void packetSendCallback(uint8_t state) {

	radio_tx_state = state;

	osSemaphoreRelease(radioBinarySemHandle);

}

static void packetRecviceCallback(uint8_t state, int16_t rssi, int8_t snr,
		uint8_t *payload, uint8_t payload_size) {

	radio_rx_state = state;

	rx_rssi = rssi;
	rx_snr = snr;
	rx_payload_size = payload_size;
	memcpy(rx_payload_buffer, payload, rx_payload_size);

	osSemaphoreRelease(radioBinarySemHandle);

}

void MX_SubGhz_Phy_Radio_Sleep() {

	SubghzApp_Sleep();

}

void MX_SubGhz_Phy_SendPacket(uint8_t *payload, uint8_t payload_size) {

	radio_tx_state = 0x00;
	SubghzApp_TX(payload, payload_size);

}

uint8_t MX_SubGhz_Phy_Get_SendPacket_State() {

	return radio_tx_state;

}

void MX_SubGhz_Phy_RecvicePacket() {

	radio_rx_state = 0x00;
	SubghzApp_RX(0);

}

uint8_t MX_SubGhz_Phy_Get_RecvicePacket_State() {

	return radio_rx_state;

}

void MX_SubGhz_Phy_Get_RecvicePacket(int16_t *rssi, int8_t *snr,
		uint8_t *payload, uint8_t *payload_size) {

	*rssi = rx_rssi;
	*snr = rx_snr;
	*payload_size = rx_payload_size;
	memcpy(payload, rx_payload_buffer, rx_payload_size);

}

/* USER CODE END EF */

/* Private Functions Definition -----------------------------------------------*/
/* USER CODE BEGIN PrFD */

/* USER CODE END PrFD */
