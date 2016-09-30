#include <stdio.h>

/* Example of type casting (altering type) */

int a = 24;
int b = 6;

main(){
    float c;
    c = ((float) a) / b;
    printf("%5.5f\n", c);
    return (0);
}
