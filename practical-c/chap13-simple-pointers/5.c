#include <stdio.h>

void copy_string(char *dest, char *source) {
  while(1){
    *dest = *source;
    if (*dest == '\0')
      return;
    *dest++;
    *source++;
  }
}

int main(){
  char a[] = "Apple";
  char b[6];
  copy_string(&b[0], &a[0]); /* can also feed in (b, a) as shorthand */
  printf("a = %s\n", a);
  printf("b = %s\n", b);
}
