#include <stdio.h>

char line[100];
int total, item;
int i, j;

i = 10;

int main(){
  total = 0;
  while(1){
    i = i - 1;
    printf("Hey");
    j = 0;
    while(j < i){
      printf("\n ");
      ++j;
    }
    if (i == 0)
      break;
  }
}
