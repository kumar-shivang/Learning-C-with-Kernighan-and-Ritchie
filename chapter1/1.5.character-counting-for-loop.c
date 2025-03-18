#include <stdio.h>

#define EXIT_SUCCESS 0;

int main(void) {
  double nc;
  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
  return EXIT_SUCCESS;
}
