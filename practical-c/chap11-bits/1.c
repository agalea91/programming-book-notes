#include <stdio.h>

int i, j;

int main(){
    i = 0x45;
    j = 0x71;
    printf("I am a bits named: %d and %d\n", i, j);
    printf("I am the same bits named: %o and %o\n", i, j);
    int a;
    a = (1 << 7);
    printf("%x\n", a);
}
