#include <stdio.h>

int main(void) {
  float fahr, celsius;
  int upper, lower, step;
  upper = 100;
  lower = 0;
  step = 10;
  printf("Celsius\tFahr\n");
  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32;
    printf("%7.0f\t%4.2f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}
