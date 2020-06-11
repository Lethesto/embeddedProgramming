
PLATFORM = HOST

CSTD=c99 #c standard
CPU=cortex-m0plus #target CPU

#get the proper compiler
ifeq($(PLATFORM), HOST)
	CC = gcc
else
	CC = arm-none-eabi-gcc


# -g to tell complier and linker to generate and retain source debugging/symbol information
# -std sets the c standard to use
# -mcpu sets the target cpu to build for
# -mthumb to generate code in Thumb States (ISA)
CFLAGS = -g -std=$(CSTD) -mcpu=$(CPU) -mthumb