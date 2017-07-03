################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../fastLED/FastLED.cpp \
../fastLED/colorpalettes.cpp \
../fastLED/colorutils.cpp \
../fastLED/hsv2rgb.cpp \
../fastLED/lib8tion.cpp \
../fastLED/noise.cpp \
../fastLED/power_mgt.cpp \
../fastLED/wiring.cpp 

LINK_OBJ += \
./fastLED/FastLED.cpp.o \
./fastLED/colorpalettes.cpp.o \
./fastLED/colorutils.cpp.o \
./fastLED/hsv2rgb.cpp.o \
./fastLED/lib8tion.cpp.o \
./fastLED/noise.cpp.o \
./fastLED/power_mgt.cpp.o \
./fastLED/wiring.cpp.o 

CPP_DEPS += \
./fastLED/FastLED.cpp.d \
./fastLED/colorpalettes.cpp.d \
./fastLED/colorutils.cpp.d \
./fastLED/hsv2rgb.cpp.d \
./fastLED/lib8tion.cpp.d \
./fastLED/noise.cpp.d \
./fastLED/power_mgt.cpp.d \
./fastLED/wiring.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
fastLED/FastLED.cpp.o: ../fastLED/FastLED.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -c -g -Os -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -fno-rtti -fno-exceptions -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

fastLED/colorpalettes.cpp.o: ../fastLED/colorpalettes.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -c -g -Os -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -fno-rtti -fno-exceptions -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

fastLED/colorutils.cpp.o: ../fastLED/colorutils.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -c -g -Os -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -fno-rtti -fno-exceptions -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

fastLED/hsv2rgb.cpp.o: ../fastLED/hsv2rgb.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -c -g -Os -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -fno-rtti -fno-exceptions -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

fastLED/lib8tion.cpp.o: ../fastLED/lib8tion.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -c -g -Os -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -fno-rtti -fno-exceptions -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

fastLED/noise.cpp.o: ../fastLED/noise.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -c -g -Os -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -fno-rtti -fno-exceptions -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

fastLED/power_mgt.cpp.o: ../fastLED/power_mgt.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -c -g -Os -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -fno-rtti -fno-exceptions -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

fastLED/wiring.cpp.o: ../fastLED/wiring.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/arduino-1.5.2/hardware/tools/g++_arm_none_eabi/bin/arm-none-eabi-g++" -c -g -Os -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -fno-rtti -fno-exceptions -Dprintf=iprintf -mcpu=cortex-m3 -DF_CPU=84000000L -DARDUINO=152 -D__SAM3X8E__ -mthumb -DUSB_PID=0x003e -DUSB_VID=0x2341 -DUSBCON "-IC:/arduino-1.5.2/hardware/arduino/sam/system/libsam" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/CMSIS/Include/" "-IC:/arduino-1.5.2/hardware/arduino/sam/system/CMSIS/Device/ATMEL/"   -I"C:\arduino-1.5.2\hardware\arduino\sam\cores\arduino" -I"C:\arduino-1.5.2\hardware\arduino\sam\variants\arduino_due_x" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '


