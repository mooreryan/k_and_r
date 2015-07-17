/* 17 July 2015

   Make a histogram of word lengths. A "word" counts as any sequence
   of non ' ', '\t', or '\n' characters.

   The easy horizontal version :)

   If the last line doesn't have a newline character, this program
   will not count the last word.
*/

#include <stdio.h>

#define MAX_WORD_LEN 15
#define IN  1 /* In word */
#define OUT 0 /* Out of a word */

int main()
{
  int lengths[MAX_WORD_LEN];
  int c, len_word, in_word, i;
  len_word = 0;
  in_word = OUT;

  /* initialize array with zeros */
  for (i = 0; i < MAX_WORD_LEN; i++) {
    lengths[i] = 0;
  }

  while ( (c = getchar()) != EOF ) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (in_word) {
        /* add the current word length to the array */
        ++lengths[len_word - 1];
        len_word = 0;
      }

      in_word = OUT;
    } else {
      in_word = IN;
      len_word += 1;
    }
  }

  /* print the histogram */
  int j;
  for (i = 0; i < MAX_WORD_LEN; i++) {
    int this_word_len = lengths[i];
    printf("%2d ", i+1);
    for (j = 0; j < this_word_len; j++)
      putchar('*');

    putchar('\n');
  }

  return 0;
}
