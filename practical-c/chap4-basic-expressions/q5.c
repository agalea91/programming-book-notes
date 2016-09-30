#include <stdio.h>
#include <string.h>
int a;
float b;
char c;
main(){
  a = 5;
  b = 5.6;
  c = 'F';
  printf("Correct:\n");
  printf("%.2f\n", b);
  printf("%d\n", a);
  printf("%c\n", c);
  printf("Incorrect\n");
  printf("%d\n", b);
  printf("%.2f\n", a);
  printf("%d\n", c);
  return (0);
}
