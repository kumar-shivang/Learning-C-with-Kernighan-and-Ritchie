#include <stdio.h>

/* print Fahrenheit Celsius Table with float precison */

int main(void) {
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;
  printf("fahr\tcelsius\n");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%4.0f\t%7.2f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}
