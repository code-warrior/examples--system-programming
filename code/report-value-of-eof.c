#include <stdio.h>

// Most operating systems will yield “-1” as the value to EOF.
// Does your OS report -1?
int main(void) {
  printf("EOF is %d\n", EOF);

  return 0;
}
