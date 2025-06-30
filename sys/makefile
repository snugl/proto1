
KERNEL_ORIGIN=0x9000


run: image
	qemu-system-i386 -fda target/main.bin


image: build_bootloader build_kernel link_kernel
	cat \
		target/boot.bin 	\
		target/kernel.bin 	\
		> target/main.bin

link_kernel:
	ld -m elf_i386 -nostdlib 	\
		-o target/kernel.bin	\
		-Ttext $(KERNEL_ORIGIN)	\
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

