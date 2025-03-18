#include <stdio.h>

#define EXIT_SUCCESS 0;

int main(void) {
  int fahr;
  for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
    printf("%4d\t%6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }
  return EXIT_SUCCESS;
}
