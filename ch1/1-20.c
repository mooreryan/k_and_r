/* 26 July 2015 */

/* Write a program detab that replaces tabs in the input with the
   proper number of blanks to space to the next tab stop. Assume a
   fixed set of tab stops, say every n columns. Should n be a variable
   or a symbolic parameter? */

/* Not exactly sure what they mean by the 'assume a fixed set of tab
   stops' bit, so this program will just replace every tab it sees
   with four spaces. */

#include <stdio.h>
#define MAXLINE 100
#define TAB '\t'
#define TAB_LEN 4

int main(void)
{

  int c = 0;
  int i = 0;

  while ( (c = getchar()) != EOF ) {
    if (c == TAB) {
      for (i = 0; i < TAB_LEN; i++) {
        putchar(' ');
      }
    }
    else {
      putchar(c);
    }
  }

  return 0;
}
