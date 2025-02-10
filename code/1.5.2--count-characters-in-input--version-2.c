#include <stdio.h>

int main(void) {
  double nc;

  // Replace EOF wih '\n' to see this program work in your CLI
  for (nc = 0; getchar() != EOF; ++nc)
    ;

  printf("%.0f\n", nc);

  return 0;
}
