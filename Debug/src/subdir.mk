################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ArraysChallenge.cpp \
../src/ArraysChallenge_test.cpp \
../src/C1P5.cpp \
../src/C1P5_test.cpp \
../src/C1P7.cpp \
../src/C1P7_test.cpp \
../src/Chars.cpp \
../src/Chars_test.cpp \
../src/Const.cpp \
../src/Const_test.cpp \
../src/CstyleString.cpp \
../src/CstyleString_test.cpp \
../src/Main_test.cpp \
../src/OperatorPrecedenceAndAssociativity.cpp \
../src/OperatorPrecedenceAndAssociativity_test.cpp \
../src/Pointers.cpp \
../src/Pointers_test.cpp \
../src/Precis.cpp \
../src/Precis_test.cpp \
../src/SizeOf.cpp \
../src/SizeOf_test.cpp \
../src/Sorting.cpp \
../src/Sorting_test.cpp \
../src/StringsCPP.cpp \
../src/StringsCPP_test.cpp \
../src/StructCPP.cpp \
../src/StructCPP_test.cpp \
../src/main.cpp 

OBJS += \
./src/ArraysChallenge.o \
./src/ArraysChallenge_test.o \
./src/C1P5.o \
./src/C1P5_test.o \
./src/C1P7.o \
./src/C1P7_test.o \
./src/Chars.o \
./src/Chars_test.o \
./src/Const.o \
./src/Const_test.o \
./src/CstyleString.o \
./src/CstyleString_test.o \
./src/Main_test.o \
./src/OperatorPrecedenceAndAssociativity.o \
./src/OperatorPrecedenceAndAssociativity_test.o \
./src/Pointers.o \
./src/Pointers_test.o \
./src/Precis.o \
./src/Precis_test.o \
./src/SizeOf.o \
./src/SizeOf_test.o \
./src/Sorting.o \
./src/Sorting_test.o \
./src/StringsCPP.o \
./src/StringsCPP_test.o \
./src/StructCPP.o \
./src/StructCPP_test.o \
./src/main.o 

CPP_DEPS += \
./src/ArraysChallenge.d \
./src/ArraysChallenge_test.d \
./src/C1P5.d \
./src/C1P5_test.d \
./src/C1P7.d \
./src/C1P7_test.d \
./src/Chars.d \
./src/Chars_test.d \
./src/Const.d \
./src/Const_test.d \
./src/CstyleString.d \
./src/CstyleString_test.d \
./src/Main_test.d \
./src/OperatorPrecedenceAndAssociativity.d \
./src/OperatorPrecedenceAndAssociativity_test.d \
./src/Pointers.d \
./src/Pointers_test.d \
./src/Precis.d \
./src/Precis_test.d \
./src/SizeOf.d \
./src/SizeOf_test.d \
./src/Sorting.d \
./src/Sorting_test.d \
./src/StringsCPP.d \
./src/StringsCPP_test.d \
./src/StructCPP.d \
./src/StructCPP_test.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


