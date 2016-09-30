#include <stdio.h>
#include <string.h>

char line[100];
float x, y;

int main(){
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &x);
  y = 9.0 * x / 5.0 + 32.0;
  printf("%.2f", y);
  return (0);
}
