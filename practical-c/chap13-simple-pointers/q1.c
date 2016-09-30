#include <stdio.h>

/* Writing a program that uses pointers to set each
   element of an array to 0. */

const int SIZE = 10;
int *a_ptr;

int main(){
    int a[SIZE];
    int i;
//    a_ptr = a;
    a_ptr = &a[0];
    for (i=0; i<SIZE; i++){
        *a_ptr = 99;
        a_ptr++;
    }
    for (i=0; i<SIZE; i++){
        printf("Element %d value = %d\n", i, a[i]);
    }
}
