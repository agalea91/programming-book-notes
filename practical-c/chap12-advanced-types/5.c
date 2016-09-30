#include <stdio.h>
#include <string.h>

struct mailing {
    char name[60];
    char address1[60];
    char address2[60];
    char city[40];
    char state[2];
    long int zip;
};

const int MAX_ENTRIES = 10;

int main(){
    struct mailing my_list[MAX_ENTRIES];
    my_list[11].zip = 12459393;
    printf("%ld\n", my_list[11].zip);
    strcpy(my_list[9].name, "Diana");
    printf("%s\n", my_list[9].name);
    strcpy(my_list[0].state, "AB");
    printf("%s\n", my_list[0].state);
    printf("%x\n", my_list[0].state[0]);
    printf("%x\n", my_list[0].state[1]);
}
