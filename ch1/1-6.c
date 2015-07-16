#include <stdio.h>

int main()
{
  int c;
  while ( (c = getchar()) != EOF ) {
    printf("c != EOF is: %d\n", c != EOF);
  }

  printf("At the end c != EOF is: %d\n", c != EOF);
}
