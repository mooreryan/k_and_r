#include <stdio.h>

int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  /* add a header */
  printf("%3s %6s\n", "Far", "Cel");

  for (fahr = upper; fahr >= lower; fahr -= step) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
  }
}
