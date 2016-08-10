################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Basic\ Searching\ -\ Sorting\ Algs.cpp \
../Main.cpp 

OBJS += \
./Basic\ Searching\ -\ Sorting\ Algs.o \
./Main.o 

CPP_DEPS += \
./Basic\ Searching\ -\ Sorting\ Algs.d \
./Main.d 


# Each subdirectory must supply rules for building sources it contributes
Basic\ Searching\ -\ Sorting\ Algs.o: ../Basic\ Searching\ -\ Sorting\ Algs.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Basic Searching - Sorting Algs.d" -MT"Basic\ Searching\ -\ Sorting\ Algs.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


