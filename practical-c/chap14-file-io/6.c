#include <stdio.h>
#include <stdlib.h>
// Using UNIX
#define __UNIX__
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#ifndef O_BINARY
#define O_BINARY 0
#endif

#define BUFFER_SIZE (16 * 1024) /* Using 16K buffers */

int main(int argc, char *argv[]){
    char buffer[BUFFER_SIZE];
    int in_file;
    int out_file;
    int read_size;
    
    if (argc != 3) {
        printf("Error you fool\n");
    }
    
    in_file = open(argv[1], O_RDONLY|O_BINARY);
    if (in_file < 0) {
        printf("Error unable to open %s\n", argv[1]);
    }
    
    out_file = open(argv[2], O_WRONLY|O_TRUNC|O_CREAT|O_BINARY, 0666);
    if (out_file < 0) {
        printf("Error unable to open %s\n", argv[2]);
    }

    while (1) {
        read_size = read(in_file, buffer, sizeof(buffer));
        if (read_size == 0)
            break;
        if (read_size < 0){
            fprintf(stderr, "Fuckkkkk\n");
            exit(8);
        }
        write(out_file, buffer, (unsigned int) read_size);
    }
    close(in_file);
    close(out_file);
    return 0;
}
