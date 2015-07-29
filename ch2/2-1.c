/* 28 July 2015 */

/* Print out some of the info from limits.h */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
  printf("char -- size: %lu, min: %d, max: %d\n",
         sizeof(char), CHAR_MIN, CHAR_MAX);
  printf("signed char -- size: %lu, min: %d, max: %d\n",
         sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char -- size: %lu, max: %d\n",
         sizeof(unsigned char), UCHAR_MAX);

  printf("int -- size: %lu, min: %d, max: %d\n",
         sizeof(int), INT_MIN, INT_MAX);
  printf("unsinged int -- size: %lu, max: %u\n",
         sizeof(unsigned int), UINT_MAX);

  printf("short -- size: %lu, min: %d, max: %d\n",
         sizeof(short), SHRT_MIN, SHRT_MAX);
  printf("unsigned short -- size: %lu, max: %d\n",
         sizeof(unsigned short), USHRT_MAX);

  printf("long -- size: %lu, min: %ld, max: %ld\n",
         sizeof(long), LONG_MIN, LONG_MAX);
  printf("unsigned long -- size: %lu, max: %lu\n",
         sizeof(unsigned long), ULONG_MAX);


  return 0;
}
