/* Allocate memory for a string */
#include <stdio.h>
#include <string.h>

int main(){
  /*Pointer to a string that can not be called directly*/
  char *string_ptr;
  char my_string[] = "This is the string";

  string_ptr = malloc(80);
  printf("%p\n", string_ptr);
  string_ptr = &my_string;
  printf("%s\n", string_ptr);

  return 0;
}
