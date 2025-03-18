#include <stdio.h>

#define EXIT_SUCCESS 0;

int main(void) {
  int c, nl;
  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n') {
      printf("New line");
      ++nl;
    }
  printf("%d\n", nl);
  return EXIT_SUCCESS;
}
