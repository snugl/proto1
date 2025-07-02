

run: image
	qemu-system-i386 -fda target/main.bin


debug: image
	qemu-system-i386 -fda target/main.bin -S -s &
	gdb -ex "target remote localhost:1234" -ex "symbol-file target/kernel.o"


image: ensure_target_dir_exists build_bootloader link_kernel
	cat \
		target/boot.bin \
		target/kernel.bin \
		> target/main.bin

link_kernel: build_kernel build_fs
	ld -m elf_i386 -nostdlib \
		-o target/kernel.bin \
		-Tlayout.ld \
		target/kernel.o \
		target/fs.o \
		--oformat binary
		

build_kernel:
	gcc -m32 -fno-pie \
		-nostdlib \
		-ffreestanding \
		-c src/kernel/main.c \
		-o target/kernel.o

build_fs:
	python3 mkimg.py \
		-o target/fs.bin \
		fs
	objcopy -I binary -O elf32-i386 -B i386 \
		--rename-section .data=.fs \
		target/fs.bin \
		target/fs.o

build_bootloader:
	nasm src/boot/boot.asm \
		-f bin \
		-o target/boot.bin

ensure_target_dir_exists:
	mkdir -p target

clean:
	-rm target/*
