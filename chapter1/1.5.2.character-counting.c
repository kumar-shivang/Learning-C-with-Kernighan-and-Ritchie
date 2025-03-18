#include <stdio.h>

#define EXIT_SUCCESS 0;

int main(void) {
  long nc;
  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);

  return EXIT_SUCCESS;
}
