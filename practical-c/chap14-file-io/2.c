#include <stdio.h>

char line[100];
int count, total;
int scan_count;

int main(){

    fgets(line, sizeof(line), stdin);
    scan_count = sscanf(line, "%d %d", &count, &total);

    switch (scan_count){
        case EOF:
            printf("End of file\n");
        case 0:
            printf("No number found\n");
            break;
        case 1:
            printf("Found #1: %d\n", count);
            break;
        case 2:
            printf("Found #1 and #2: %d %d\n", count, total);
            break;
        default:
            printf("Will never happen\n");
            break;
    }
    return 0;
}
