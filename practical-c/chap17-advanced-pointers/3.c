/* Search through a list of pointers */
#include <stdio.h>
#include <string.h>

struct linked_list {
  struct linked_list *next_ptr;
  char *data;
};

struct linked_list *first_ptr;

int find(char *name){
  struct linked_list *current_ptr;
  current_ptr = first_ptr;

  while ((strcmp(current_ptr->data, name) != 0) &&
         (current_ptr != NULL))
    current_ptr = (*current_ptr).next_ptr;

  return (current_ptr != NULL);
}

int main(){
//  if (find(&name) == FALSE)
//    printf("We did it!\n");

  /* This isn't wokring */
  char name = 'a';
  find(&name);
  return 0;
}
