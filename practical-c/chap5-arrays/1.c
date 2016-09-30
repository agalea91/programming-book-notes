#include <stdio.h>

float data[5];
float total;
float average;

int main()
{
  int i;
  total = 0.0;
  for (i = 0; i < 5; i++){
    data[i] = i * 10.0;
    total = total + data[i];
  }
  average = total / 5;
  printf("%.2f\n", average);
  printf("%.2f", total);
  return (0);
}
