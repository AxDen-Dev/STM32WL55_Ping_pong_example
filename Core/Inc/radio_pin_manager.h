#ifndef INC_RADIO_PIN_MANAGER_H_
#define INC_RADIO_PIN_MANAGER_H_

#include "stdio.h"
#include "stm32wlxx_hal.h"

void set_radio_pin_manager_rf_switch_vdd_pin(GPIO_TypeDef *port, uint16_t pin);

void set_radio_pin_manager_rf_switch_vdd_pin_set();

void set_radio_pin_manager_rf_switch_vdd_pin_clear();

void set_radio_pin_manager_rf_switch_pin(GPIO_TypeDef *port, uint16_t pin);

void set_radio_pin_manager_rf_switch_pin_set();

void set_radio_pin_manager_rf_switch_pin_clear();

#endif /* INC_RADIO_PIN_MANAGER_H_ */
