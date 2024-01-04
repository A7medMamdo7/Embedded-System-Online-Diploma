#@copyright : Ahmed Mamdouh
CC= arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -gdwarf-2 -g
TNCS= -I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As= $(wildcard *.s)
AsOBJ= $(As:.s=.o)
project_name=Lab3_cortex_m4

all: $(project_name).bin
	@echo "======Build is done======="

#startup.o: startup.s
#	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@
$(project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=map_file.map
	cp $(project_name).elf $(project_name).axf
$(project_name).bin: $(project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin
clean: 
	rm *.elf *.bin