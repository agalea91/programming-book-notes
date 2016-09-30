#include <stdio.h>

#define FUNKY(x, y) (((x)+5)*((x)-5) - y)

int main(){
  int counter;
  for (counter = 0; counter < 10; counter++){
    printf("x %d, x funky %d\n", counter+1, FUNKY(counter+1, 1000));
  }
  return (0);
}
