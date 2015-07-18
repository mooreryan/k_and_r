/* 18 July 2015 */
/* Write a program to print all input lines that are longer than 80 characters. */

#include <stdio.h>
#define MAXLINE 100

int get_line(char line[], int maxline)
{
  int idx, c;
  idx = c = 0;

  for (idx = 0; idx < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++idx) {
    line[idx] = c;
  }

  if (c == '\n') { /* this only happens if the idx < maxline */
    line[idx] = '\n';
    ++idx;
  }

  line[idx] = '\0';

  return idx;
}

int main()
{
  char line[MAXLINE];
  int len = 0;

  while ( (len = get_line(line, MAXLINE)) > 0 ) {
    if (len >= 80) {
      printf("%s", line);
    }
  }

  return 0;
}
