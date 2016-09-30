#include <stdio.h>
#include <string.h>
float width, height;
width = 5.2;
height = 1.0;
int main()
{
  float a;
  printf("Width = %.2f, Height = %.2f\n", width, height);
  a = get_area();
  printf("Area = %.2f\n", width * height);
  a = get_perimeter();
  printf("Perimeter = %.2f\n", 2 * width + 2 * height);
  return (0);
}

/* The functions below are not working :/ */
float get_area(){
  float a;
  a = width*height;
  return (a);
}

float get_perimeter(){
  printf("Width = %.2f, Height = %.2f\n", width, height);
  return (2.0*width + 2.0*height);
}
