################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
INO_SRCS += \
../fastLED/examples/Fire2012WithPalette/Fire2012WithPalette.ino 

INO_DEPS += \
./fastLED/examples/Fire2012WithPalette/Fire2012WithPalette.ino.d 


# Each subdirectory must supply rules for building sources it contributes
fastLED/examples/Fire2012WithPalette/Fire2012WithPalette.o: ../fastLED/examples/Fire2012WithPalette/Fire2012WithPalette.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -c -g -Os -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -fno-rtti -fno-exceptions -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '


