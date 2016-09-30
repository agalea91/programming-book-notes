#include <stdio.h>
#include <stdlib.h>

#define DIE \
  {fprintf(stderr, "Fatal error abort\n"); exit(8);}

int main(){
  int value = 1;
  if (value < 0) {
    printf("Hit it\n");
    DIE;
  }
  printf("Did not die\n");

  value = -1;
  if (value < 0) {
    printf("Hit it\n");
    DIE;
  }
  printf("Did not die\n");

  return (value);
}
