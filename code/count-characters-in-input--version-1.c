#include <stdio.h>

int main(void) {
  long nc;

  nc = 0;

  // Replace EOF wih '\n' to see this program work in your CLI
  while(getchar() != EOF)
    ++nc;

  printf("%ld\n", nc); // ld is a long integer

  return 0;
}
