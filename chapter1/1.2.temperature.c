#include <stdio.h>

int main(void) {
  /* print fahrenheit celsius table */
  int fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Fahr\tCelsius\n");
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%3d\t%6d\n", fahr, celsius);
    fahr = fahr + step;
  }
}
