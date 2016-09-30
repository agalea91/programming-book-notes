#include <stdio.h>
#include <string.h>

/* Writing a function that takes a single string
   as its argument and returns a pointer to the
   first nonwhite character in the string. */

char *point_at_nonwhite(char a[100]);

int main(){
    char a[100];
    char *a_ptr;
    fgets(a, sizeof(a), stdin);
    printf("Thanks for your input:\n");
    printf("%s", a);
    a_ptr = point_at_nonwhite(a);
    printf("Pointer = %p (%s)\n", a_ptr, a_ptr);
    printf("Assigning value via pointer ...\n");
    char b[sizeof(a)];
    strcpy(b, a_ptr);
    printf("Printing assigned variable below:\n%s", b);
    printf("Length of assigned variable: %lu\n", sizeof(a_ptr));
    printf("%c\n", a_ptr[0]);
    printf("%c\n", a_ptr[1]);
    printf("%c\n", a_ptr[2]);
    printf("%c\n", a_ptr[3]);
    printf("%c\n", a_ptr[4]);
    printf("%c\n", a_ptr[5]);
    printf("%c\n", a_ptr[6]);
    return 0;
}

char *point_at_nonwhite(char a[100]){
    int i = 0;
    char *temp_ptr;
    while (1){
        if ((a[i] != ' ') && (a[i] != '\n')){
            temp_ptr = &a[i];
            break;
        }
        else{
            i++;
        }
    }
    printf("%d\n", i);
    return temp_ptr;
}
