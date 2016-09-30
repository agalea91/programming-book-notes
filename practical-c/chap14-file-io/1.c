#include <stdio.h>
const char FILE_NAME[] = "input.txt";
#include <stdlib.h> /* Need this to use exit(8) */

int main()
{
    int count = 0;
    FILE *in_file; /* Point to file location */
    int ch;

    in_file = fopen(FILE_NAME, "r");
    if (in_file == NULL){
        printf("Can't open file\n");
        exit(8);
    }

    while (1){
        ch = fgetc(in_file);
        printf("%c", ch); /* Printing integer characters with %c */
        if (ch == EOF)
            break;
        ++count;
    }
    
    printf("\nNumber of characters in file = %d\n", count);

    fclose(in_file);
    return 0;
}
