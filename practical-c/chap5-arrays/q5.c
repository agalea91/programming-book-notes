#include <stdio.h>

char line[100];
int a, b;

main(){
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d hour %d min", &a, &b);
  printf("%d hour + %d min = %d min", a, b, 60 * a + b);
}
