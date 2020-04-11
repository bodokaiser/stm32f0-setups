TARGET=bin/main

CC=arm-none-eabi-gcc
LD=arm-none-eabi-gcc
AR=arm-none-eabi-ar
AS=arm-none-eabi-as
CP=arm-none-eabi-objcopy
OD=arm-none-eabi-objdump
SE=arm-none-eabi-size
SF=st-flash

CFLAGS  = -std=gnu11 -g -O2 -Wall
CFLAGS += -mlittle-endian -mthumb -mthumb-interwork -mcpu=cortex-m0
CFLAGS += -fsingle-precision-constant -Wdouble-promotion

SRCS = src/main.c

.PHONY: $(TARGET)

$(TARGET): $(TARGET).elf

$(TARGET).elf: $(SRCS)
		mkdir -p bin
		$(CC) --specs=nosys.specs $(INCLUDE) $(CFLAGS) $^ -o $@
		$(CP) -O binary $(TARGET).elf $(TARGET).bin

clean:
		rm -rf bin

flash:
		$(SF) write $(TARGET).bin 0x8000000