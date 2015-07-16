/* Count newlines, blanks and tabs */

#include <stdio.h>

int main()
{
  int c, newlines, blanks, tabs;
  newlines = blanks = tabs = 0;

  while ( (c = getchar()) != EOF ) {
    if (c == '\n') {
      ++newlines;
    } else if (c == '\t') {
      ++tabs;
    } else if (c == ' ') {
      ++blanks;
    }
  }
  printf("newlines: %d -- blanks: %d -- tabs: %d\n",
         newlines, blanks, tabs);
}
