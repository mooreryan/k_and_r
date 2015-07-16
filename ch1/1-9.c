#include <stdio.h>

int main()
{
  int c, last_char;
  last_char = 'a';

  while ( (c = getchar()) != EOF) {
    if (last_char == ' ' && c == ' ') {
      ;
    } else {
      putchar(c);
    }

    last_char = c;
  }

  return 0;
}
