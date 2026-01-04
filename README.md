barbones builders 


sudo apt install dietlibc-dev



gcc -m32 -nostdlib  -fno-pie -no-pie  start.o hello.c -L/usr/lib/diet -lc -lgcc -o hello
