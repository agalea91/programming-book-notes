#include <stdio.h>

int non_pointer_fun(void);
int pointer_fun(void);

int array[] = {2, 4, 5, 3, 6, 2, 5, 3, 5, 2, 5, 6, 3, 5, 0, 3, 2, 5};
int index;
const int POINTER = 1;

int main(){
  if (POINTER != 0)
    pointer_fun();
  else if (POINTER == 0)
    non_pointer_fun();
  else
    printf("Unexpected behaviour");
  return 0;
}

int non_pointer_fun(){
  printf("Running non-pointer fun\n");
  index = 0;
  while (array[index] != 0)
    ++index;

  printf("# of elements pre 0: %d\n", index);
  return 0;
}

int pointer_fun(){
  printf("Running pointer fun\n");
  int *array_ptr;
  array_ptr = &array[0]; /* can also use array_ptr = array as shorthand */
  while ((*array_ptr) != 0)
    ++array_ptr;
  printf("# of elements pre 0: %d - %d = %d\n", array_ptr, array, array_ptr - array);
  return 0;
}
