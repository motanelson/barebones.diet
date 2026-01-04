
//sudo apt install dietlibc-dev
//gcc -m32 -nostdlib -fno-pie -no-pie hello.c -L/usr/lib/diet -lc -lgcc -o hello
#include<stdio.h>
#include<stdlib.h>
int main(){
    char *c="hello world...\n";
    puts(c);
    
    return 0;

}
void _start(){
    main();
    exit(0);
}