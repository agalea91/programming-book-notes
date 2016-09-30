/* Defining pointers to structures */
#include <stdio.h>

int main(){
  struct wine{
    char name[20];
    int year;
    float cost;
  };

  struct wine *yellowtail;
  yellowtail = malloc(sizeof(struct wine));
  printf("%p", yellowtail);

  /* Trying to determine heap size.
  This isn't wokring ...

  struct wine wine_ptr[100];
  int i = 0;
  while (1){
    wine_ptr[i] = malloc(sizeof(struct wine));
    if (wine_ptr[i] == NULL){
      fprintf(stderr, "Out of memory\n");
      exit(8);
    }
    i++;
  }
  */

  return 0;
}
