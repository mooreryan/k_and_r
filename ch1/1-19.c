/* 26 July 2015 */

#include <stdio.h>
#define MAXLINE 100

void reverse(char str[], int len)
{
  int i = 0;
  int j = len-2;
  int c = 0;

  for (i = 0; i < len / 2; i++, j--) {
    c = str[j];
    str[j] = str[i];
    str[i] = c;
  }

  str[len-1] = '\n';
}


int get_line(char line[], int max_len)
{
  int i, c = 0;

  for (i = 0; i < max_len && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = '\n';
    i++;
  }

  line[i] = '\0';

  /* return the len of the line */
  return i;
}

int main()
{
  int line_len = 0;
  char line[MAXLINE];

  while ( (line_len = get_line(line, MAXLINE)) > 0 ) {
    reverse(line, line_len);
    printf("%s", line);
  }

  return 0;
}
