#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[100];
    FILE *in_file;

    printf("Name: ");
    fgets(name, sizeof(name), stdin);

/*
print statement below does not work :(
printf("File has length of %d\n", strlen(name));
sad panda...
*/

    printf("Printing file name, character by character...\n");
    int i = 0;
    while (1){
        printf("%c\n", name[i]);
        if (name[i] == '\0')
            break;
        i++;
    }
 

    name[strlen(name) - 1] = '\0';
   
    in_file = fopen(name, "r");
    if (in_file == NULL){
        fprintf(stderr, "Could not open file\n");
        exit(8);
    }

    printf("File found named %s\n", name);
    fclose(in_file);
    return 0;
}
