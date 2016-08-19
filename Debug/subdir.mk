################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Main.cpp \
../Searching,\ Sorting.cpp \
../SegmentTree.cpp 

OBJS += \
./Main.o \
./Searching,\ Sorting.o \
./SegmentTree.o 

CPP_DEPS += \
./Main.d \
./Searching,\ Sorting.d \
./SegmentTree.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Searching,\ Sorting.o: ../Searching,\ Sorting.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Searching, Sorting.d" -MT"Searching,\ Sorting.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


