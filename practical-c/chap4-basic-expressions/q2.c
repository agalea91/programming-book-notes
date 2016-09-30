#include <stdio.h>
#include <string.h>
int main()
{
  printf("*****\n");
  int i;
  for (i = 0; i < 5; i++){
    loop_fun();
  }
  printf("*****\n");
  return (0);
}

int loop_fun()
{
  printf("*   *\n");
  return (0);
}
