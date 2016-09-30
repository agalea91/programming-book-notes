#include <stdio.h>
#include <string.h>
#include <math.h>

const float PI = 3.1415;

int main(){
  float radius = 5e4;
  printf("Volume = %.2f", PI * 4.0 / 3.0 * pow(radius, 3));
  return (0);
}
