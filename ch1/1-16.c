/* 18 July 2015 */
/* Revise the main routine of the longest-line program so it will
   correctly print the length of arbitrary long input lines, and as
   much as possible of the text.  */

#include <stdio.h>
#define MAXLINE 6 /* max input line len */
#define YES 1
#define NO  0

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
  int len = 0;               /* current line len */
  int max = 0;               /* max len seen so far */
  int incomplete_line_len = 0;
  int line_finished = NO;
  char line[MAXLINE];    /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  while ( (len = get_line(line, MAXLINE)) > 0 ) {
    /* check if the line finished or if it ran out of space */
    if (len == MAXLINE && line[len - 1] != '\n') { /* didn't reach the end of line  */
      incomplete_line_len += len;
      line_finished = NO;
      copy(longest, line);
    }
    else { /* and now it's finished  */
      if (line_finished == NO) {
        len += incomplete_line_len;
        incomplete_line_len = 0;
      }

      if (len > max) {
        max = len;
      }

      line_finished = YES;
    }
  }

  if (max > 0) { /* there was a line */
    printf("longest len: %d\nstart of longest line: %s\n", max, longest);
  }

  return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ( (to[i] = from[i]) != '\0') {
    ++i;
  }
}
