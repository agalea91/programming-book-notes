#include <stdio.h>
#include <string.h>

char first[100];
char last[100];
char full[200];

int main(){
  printf("enter a name\n");
  fgets(first, sizeof(first), stdin);
  printf("enter another name\n");
  fgets(last, sizeof(last), stdin);

  first[4] = ' ';
  strcpy(full, first);
//  strcat(full, " ");
  strcat(full, last);

  printf("combine name = %s\n", full);
}
