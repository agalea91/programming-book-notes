#include <stdio.h>

#define FUNKY(x, y) (((x)+5)*((x)-5) - y)

int main(){
  int counter = 0;
  int i;
  while(counter < 5){
    printf("x %d\n", counter++);
    i += 1;
    if (i==10)
      break;
  }
  return (0);
}
