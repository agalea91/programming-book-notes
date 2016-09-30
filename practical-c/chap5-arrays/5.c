#include <stdio.h>

int array[3][2];
int main(){
  int x, y;
  array[0][0] = 14;
  array[1][0] = 15;
  array[2][0] = 16;
  array[0][1] = 17;
  array[1][1] = 18;
  array[2][1] = 19;

  printf("array[%d]: ", 0);
  printf("%d ", array[0][0]);
  printf("%d ", array[0][1]);
  printf("\n");
  return (0);
}
