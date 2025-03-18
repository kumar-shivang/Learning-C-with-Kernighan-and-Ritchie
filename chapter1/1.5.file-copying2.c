#include <stdio.h>

#define EXIT_SUCCESS 0;

int main(void) {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
  return EXIT_SUCCESS;
}
