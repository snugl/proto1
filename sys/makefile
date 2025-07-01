

run: image
	qemu-system-i386 -fda target/main.bin


debug: image
	qemu-system-i386 -fda target/main.bin -S -s &
	gdb -ex "target remote localhost:1234" -ex "symbol-file target/kernel.o"


image: build_bootloader build_kernel link_kernel
	cat \
		target/boot.bin 	\
		target/kernel.bin 	\
		> target/main.bin

link_kernel:
	ld -m elf_i386 -nostdlib 	\
		-o target/kernel.bin	\
		-e kmain \
		-Tlayout.ld				\
		target/kernel.o 		\
		--oformat binary

build_kernel:
	gcc -m32 -fno-pie -nostdlib -ffreestanding \
		-c src/kernel/main.c \
		-o target/kernel.o

build_bootloader:
	nasm src/boot/boot.asm \
		-f bin \
		-o target/boot.bin


clean:
	-rm target/*
