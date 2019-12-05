################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../target/generated-sources/antlr4/caffeinatedBaseListener.cpp \
../target/generated-sources/antlr4/caffeinatedBaseVisitor.cpp \
../target/generated-sources/antlr4/caffeinatedLexer.cpp \
../target/generated-sources/antlr4/caffeinatedListener.cpp \
../target/generated-sources/antlr4/caffeinatedParser.cpp \
../target/generated-sources/antlr4/caffeinatedVisitor.cpp 

OBJS += \
./target/generated-sources/antlr4/caffeinatedBaseListener.o \
./target/generated-sources/antlr4/caffeinatedBaseVisitor.o \
./target/generated-sources/antlr4/caffeinatedLexer.o \
./target/generated-sources/antlr4/caffeinatedListener.o \
./target/generated-sources/antlr4/caffeinatedParser.o \
./target/generated-sources/antlr4/caffeinatedVisitor.o 

CPP_DEPS += \
./target/generated-sources/antlr4/caffeinatedBaseListener.d \
./target/generated-sources/antlr4/caffeinatedBaseVisitor.d \
./target/generated-sources/antlr4/caffeinatedLexer.d \
./target/generated-sources/antlr4/caffeinatedListener.d \
./target/generated-sources/antlr4/caffeinatedParser.d \
./target/generated-sources/antlr4/caffeinatedVisitor.d 


# Each subdirectory must supply rules for building sources it contributes
target/generated-sources/antlr4/%.o: ../target/generated-sources/antlr4/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/karina/eclipse-workspace/caffeinated" -I"/home/karina/eclipse-workspace/caffeinated/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


