#include <stdio.h>
#include <string.h>

/* Program is not working as I woud like...
   I don't really know how to deal with
   string pointers. */

char *first_ptr[5], *second_ptr[4];

int main(){
    char name[] = "Neils Bohr";
    char first_name[5];
    strncpy(first_name, &name + 0, 5);
    strcpy(first_ptr, &first_name);
    printf("%s likes electrons\n", *first_ptr);
    return 0;
}
