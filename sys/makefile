

run: image
	qemu-system-i386 -fda target/main.bin


image: build_bootloader #build_kernel link_kernel
	cat \
		target/boot.bin \
		> target/main.bin

#link_kernel:
#	ld -m elf_i386 -nostdlib \
#		-o target/kernel.bin
#		-Ttext $(KERNEL_ORIGIN)

build_bootloader:
	nasm src/boot/boot.asm \
		-f bin \
		-o target/boot.bin

