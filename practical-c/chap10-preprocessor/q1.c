#include <stdio.h>
#include <math.h>

#define DIV_BY_TEN(x) ((x) % 10 == 0)

int main(){
  int a, b;
  a = DIV_BY_TEN(30);
  b = DIV_BY_TEN(33);
  printf("0 = False, 1 = True\n");
  printf("%d\n", a);
  printf("%d\n", b);
  return (0);
}
