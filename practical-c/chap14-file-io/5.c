#include <stdio.h>

struct {
    int width;
} rectangle;

int read_size;
int write_size;

int main(){
    FILE *in_file;
    in_file = fopen("binary.txt", "r");
    read_size = fread((char *)&rectangle, 1, sizeof(rectangle), in_file);
    printf("%d\n", (int)rectangle.width);
    if (read_size != sizeof(rectangle))
        printf("Nope %d\n", read_size);
    write_size = fwrite((int *)&rectangle, 1, sizeof(rectangle), "binary2.txt");
    return 0;
}
