/* 18 July 2015 */
/* Write a program to remove trailing blanks and tabs from each line
   of input, and to delete entirely blank lines. */

#include <stdio.h>
#include <assert.h>
#define MAXLINE 100

/* this returns the length of the string plus newline not counting the final '\0' */
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

/* assumes that the line has a \n char before the \0 */
int remove_blanks(char line[], int len)
{
  int i = 0;
  int print_len = len - 1;

  assert(line[len-1] == '\n');

  for (i = len - 2; i >= 0; i++) {
    if (line[i] == ' ' || line[i] == '\t') {
      --print_len;
    }
    else {
      break;
    }
  }

  return print_len;
}

int main()
{
  char line[MAXLINE];
  int len = 0;
  int print_len = 0;
  int i = 0;

  while ((len = get_line(line, MAXLINE)) > 0) {
    print_len = remove_blanks(line, len);
    if (print_len > 0) {
      for (i = 0; i < print_len; i++) {
        putchar(line[i]);
      }
      putchar('\n');
    }
  }

  return 0;
}
