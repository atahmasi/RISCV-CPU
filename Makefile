CC = riscv64-unknown-elf-gcc
OBJCOPY = riscv64-unknown-elf-objcopy
CFLAGS = -march=rv32i -mabi=ilp32 -nostdlib -T link.ld

all: program.hex

program.elf: start.s main.c link.ld
	$(CC) $(CFLAGS) start.s main.c -o program.elf

program.bin: program.elf
	$(OBJCOPY) -O binary program.elf program.bin

program.hex: program.bin
	python3 -c "\
import struct;\
data = open('program.bin','rb').read();\
data += b'\x00' * ((4 - len(data) % 4) % 4);\
open('program.hex','w').write('\n'.join(f'{struct.unpack(\"<I\",data[i:i+4])[0]:08x}' for i in range(0,len(data),4)) + '\n')"

clean:
	rm -f program.elf program.bin program.hex

.PHONY: all clean
