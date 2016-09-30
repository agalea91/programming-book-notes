#include <stdio.h>
#include <string.h>
char line[100];

int main()
{
  printf("Enter a line: ");
  fgets(line, sizeof(line), stdin);
  printf("sizeof function returns %d\n", sizeof(line));
  printf("Length = %d", strlen(line));
  return (0);
}
