barbones builders 


sudo apt install dietlibc-dev

nasm -f elf32 start.asm -o start.o

gcc -m32 -nostdlib start.o hello.c -L/usr/lib/diet -lc -lgcc -o hello
