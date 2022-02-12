#include "radio_pin_manager.h"

static GPIO_TypeDef *RF_SWITCH_VDD_GPIO_PORT;
static uint16_t RF_SWITCH_VDD_GPIO_PIN;

static GPIO_TypeDef *RF_SWITCH_GPIO_PORT;
static uint16_t RF_SWITCH_GPIO_PIN;

void set_radio_pin_manager_rf_switch_vdd_pin(GPIO_TypeDef *port, uint16_t pin) {

	RF_SWITCH_VDD_GPIO_PORT = port;
	RF_SWITCH_VDD_GPIO_PIN = pin;

}

void set_radio_pin_manager_rf_switch_vdd_pin_set() {

	HAL_GPIO_WritePin(RF_SWITCH_VDD_GPIO_PORT, RF_SWITCH_VDD_GPIO_PIN,
			GPIO_PIN_SET);

}

void set_radio_pin_manager_rf_switch_vdd_pin_clear() {

	HAL_GPIO_WritePin(RF_SWITCH_VDD_GPIO_PORT, RF_SWITCH_VDD_GPIO_PIN,
			GPIO_PIN_RESET);

}

void set_radio_pin_manager_rf_switch_pin(GPIO_TypeDef *port, uint16_t pin) {

	RF_SWITCH_GPIO_PORT = port;
	RF_SWITCH_GPIO_PIN = pin;

}

void set_radio_pin_manager_rf_switch_pin_set() {

	HAL_GPIO_WritePin(RF_SWITCH_GPIO_PORT, RF_SWITCH_GPIO_PIN, GPIO_PIN_SET);

}

void set_radio_pin_manager_rf_switch_pin_clear() {

	HAL_GPIO_WritePin(RF_SWITCH_GPIO_PORT, RF_SWITCH_GPIO_PIN, GPIO_PIN_RESET);

}
