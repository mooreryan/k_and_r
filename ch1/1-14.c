/* 17 July 2015

   A program to print a histogram of frequencies of different
   characters in its input.

   Only tracks counts of ascii chars 32 - 126. Max count is 80 for
   nice printing.
*/

#include <stdio.h>

#define NUM_CHARS 95 /* ascii 127 - ascii 32 + 1 = 95, nice ascii chars */
#define MIN_ASCII 32
#define MAX_ASCII 126
#define MAX_COUNT 80 /* For nice horizontal printing */

int main()
{

  int c, i, j, num;
  int char_counts[NUM_CHARS];

  for (i = 0; i < NUM_CHARS; i++) {
    char_counts[i] = 0;
  }

  while ( (c = getchar()) != EOF ) {
    if (MIN_ASCII <= c && c <= MAX_ASCII) {
      if (char_counts[c - MIN_ASCII] < MAX_COUNT) {
        ++char_counts[c - MIN_ASCII];
      }
    }
  }

  num = 0;
  for (i = 0; i < NUM_CHARS; i++) {
    num = char_counts[i];
    printf("|%c| ", i + MIN_ASCII);
    for (j = 0; j < num; j++) {
      putchar('*');
    }

    putchar('\n');
  }

  return 0;
}
