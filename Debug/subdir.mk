################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../DP.cpp \
../disjoint_set.cpp \
../graph.cpp \
../Main.cpp \
../Searching-Sorting.cpp \
../SegmentTree.cpp 

OBJS += \
./DP.o \
./disjoint_set.o \
./graph.o \
./Main.o \
./Searching-Sorting.o \
./SegmentTree.o 

CPP_DEPS += \
./DP.d \
./disjoint_set.d \
./graph.d \
./Main.d \
./Searching-Sorting.d \
./SegmentTree.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


