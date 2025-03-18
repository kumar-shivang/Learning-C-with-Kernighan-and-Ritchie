#include <stdio.h>

#define EXIT_SUCCESS 0;

int main(void) {
  int c, b, t, nl;
  b = 0;
  t = 0;
  nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      ++t;
    } else {
      if (c == ' ') {
        ++b;
      } else {
        if (c == '\n') {
          ++nl;
        }
      }
    }
  }
  printf("New Line=%d\nTab=%d\nBlank=%d\n", nl, t, b);
  return EXIT_SUCCESS;
}
