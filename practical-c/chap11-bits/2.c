#include <stdio.h>

const int HIGH_SPEED = (1<<7);

const int DIRECT_CONNECT = (1<<6);

char flags = 0;

int main(){
//    flags |= HIGH_SPEED;
    flags |= DIRECT_CONNECT;

    if ((flags & HIGH_SPEED) != 0)
        printf("Set HS\n");
    if ((flags & DIRECT_CONNECT) != 0)
        printf("Set DC\n");

    printf(" %x\n %d\n %o\n", flags, flags, flags);
    return (0);
}
