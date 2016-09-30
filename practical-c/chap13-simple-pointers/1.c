#include <stdio.h>

int thing;
int *thing_ptr;

int main(){
    thing = 4;
    thing_ptr = &thing;
    printf("%d\n", *thing_ptr);
    *thing_ptr = 7;
    printf("%d\n", *thing_ptr);
    printf("%d\n", thing);
    return (0);
}
