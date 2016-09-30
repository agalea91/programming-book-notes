/* Write a program that uses strings e.g. +2.449E+9 to represent floating numbers. */
#include <stdio.h>

int main(){
  float num1, num2;
  int i;
  int counter = 0;
  char sgn, sgn_exp;

  /* Define a value */
  num1 = -0.00000000000914857573;

  /* Extract the sign and change the value to +ive */
  if (num1 >= 0)
    sgn = '+';
  else{
    sgn = '-';
    num1 = -num1;
  }
  num2 = num1;

  while (1){
    if (num1 < 1.0){
      sgn_exp = '-';
      if (num2 >= 1.0)
        break;
      num2 = num2 * 10.0;
    }
    else if (num1 >= 1.0){
      sgn_exp = '+';
      if (num2 < 10.0)
        break;
      num2 = num2 / 10.0;
    }
    counter++;
  }

  printf("%c", sgn);
  printf("%.3f", num2);
  printf("E%c", sgn_exp);
  printf("%d\n", counter);
}
