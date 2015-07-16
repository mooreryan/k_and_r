#include <stdio.h>

int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 100;
  step = 5;

  printf("%3s %6s\n", "Cel", "Far");

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
