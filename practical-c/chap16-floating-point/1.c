/* Deterime the floating point precision of a machine. */
#include <stdio.h>
int main(){
  float num1, num2;
  float result;
  int counter;
  num1 = 1.0;
  num2 = 1.0;
  counter = 0;

  while (num1 + num2 != num1){
    ++counter;
    num2 /= 10.0;
  }
  printf("%2d digits accuracy in calculations\n", counter);

  num2 = 1.0;
  counter = 0;

  while (1){
    result = num1 + num2;
    if (result == num1)
      break;
    ++counter;
    num2 /= 10.0;
  }
  printf("%2d digits accuracy in storage\n", counter);
  return 0;
}
