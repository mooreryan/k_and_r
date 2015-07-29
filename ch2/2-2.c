#include <stdio.h>

int main(void)
{

  int i = 0;
  int c = 0;
  int lim = 100;
  /* original  */
  /* for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i) { */
  /*   putchar(c); */
  /* } */

  for (i = 0; i < lim - 1; ++i) {
    c = getchar();

    if (c == '\n') {
      break;
    }

    if (c == EOF) {
      break;
    }

    putchar(c);

  }

  putchar('\n');

  return 0;
}
