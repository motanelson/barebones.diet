barbones builders 


sudo apt install dietlibc-dev

gcc -m32 -nostdlib hello.c -L/usr/lib/diet -lc -lgcc -o hello
