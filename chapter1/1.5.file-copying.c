#include <stdio.h>

#define EXIT_SUCCESS 0;

int main(void) {
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  if (c == EOF) {
    printf("bye");
  }
  return EXIT_SUCCESS;
}
