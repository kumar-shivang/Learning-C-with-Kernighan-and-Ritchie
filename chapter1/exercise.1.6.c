#include <stdio.h>

#define EXIT_SUCCESS 0;

int main(void) {
  int c;
  c = getchar() != EOF;
  printf("%d", c);
  return EXIT_SUCCESS;
}
