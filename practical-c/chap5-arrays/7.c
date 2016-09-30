#include <stdio.h>
char line[100];
int a;
float b;

main(){
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %f", &a, &b);
  printf("%d %.3f", a, b);
}
