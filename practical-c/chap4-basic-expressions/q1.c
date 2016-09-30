#include <stdio.h>
#include <string.h>
char my_name[10];
int my_SIN;
char birthday[11];

main()
{
  strcpy(my_name, "Alex");
  my_SIN = 13;
  strcpy(birthday, "29/08/1974");
  printf("My name is %s\n", my_name);
  printf("SIN = %d\n", my_SIN);
  printf("Birthday = %s\n", birthday);
}
