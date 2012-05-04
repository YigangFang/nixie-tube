################################################################################
# �Զ����ɵ��ļ�����Ҫ�༭��
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../NixieTubeTest.cpp 

OBJS += \
./NixieTubeTest.o 

CPP_DEPS += \
./NixieTubeTest.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo '���ڹ����ļ��� $<'
	@echo '���ڵ��ã� AVR C++ Compiler'
	avr-g++ -I"H:\arduino-1.0\hardware\arduino\cores\arduino" -I"H:\arduino-1.0\hardware\arduino\variants\standard" -I"H:\workspace\myArduinoLibs\nixie-tube" -I"H:\workspace\myArduinoLibs\nixie-tube\NixieTube" -D__IN_ECLIPSE__=1 -DARDUINO=100 -Wall -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" -x c++ "$<"
	@echo '�ѽ��������� $<'
	@echo ' '


