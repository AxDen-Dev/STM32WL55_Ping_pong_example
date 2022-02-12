################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio.c \
../Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio_driver.c \
../Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio_fw.c 

OBJS += \
./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio.o \
./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio_driver.o \
./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio_fw.o 

C_DEPS += \
./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio.d \
./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio_driver.d \
./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio_fw.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/%.o: ../Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/%.c Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32WL55xx -c -I../Core/Inc -I../Drivers/STM32WLxx_HAL_Driver/Inc -I../Drivers/STM32WLxx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32WLxx/Include -I../Drivers/CMSIS/Include -I../SubGHz_Phy/App -I../SubGHz_Phy/Target -I../Utilities/trace/adv_trace -I../Utilities/misc -I../Utilities/timer -I../Utilities/lpm/tiny_lpm -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/SubGHz_Phy -I../Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Middlewares-2f-Third_Party-2f-SubGHz_Phy-2f-stm32_radio_driver

clean-Middlewares-2f-Third_Party-2f-SubGHz_Phy-2f-stm32_radio_driver:
	-$(RM) ./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio.d ./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio.o ./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio_driver.d ./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio_driver.o ./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio_fw.d ./Middlewares/Third_Party/SubGHz_Phy/stm32_radio_driver/radio_fw.o

.PHONY: clean-Middlewares-2f-Third_Party-2f-SubGHz_Phy-2f-stm32_radio_driver

