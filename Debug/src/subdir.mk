################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/insertionSorters.cpp \
../src/main.cpp \
../src/medianSorters.cpp \
../src/misc.cpp \
../src/quickSorters.cpp \
../src/stringIntMap.cpp 

OBJS += \
./src/insertionSorters.o \
./src/main.o \
./src/medianSorters.o \
./src/misc.o \
./src/quickSorters.o \
./src/stringIntMap.o 

CPP_DEPS += \
./src/insertionSorters.d \
./src/main.d \
./src/medianSorters.d \
./src/misc.d \
./src/quickSorters.d \
./src/stringIntMap.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I../src -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


