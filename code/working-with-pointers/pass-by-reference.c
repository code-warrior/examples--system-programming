#include <stdio.h>

#define RED    "\033[31m"
#define YELLOW "\033[33m"
#define RESET  "\033[0m"

void add_one_to(int *x) {
  printf("Automatic pointer variable %sx%s is %s%d%s\n",
         YELLOW, RESET, YELLOW, *x, RESET);

  *x += 1;

  printf("Automatic pointer variable %sx%s after increment is now %s%d%s\n",
         YELLOW, RESET, YELLOW, *x, RESET);
}

int main(void) {
  int a = 20;

  printf("Local variable %sa%s before call-by-reference function call: %s%d%s\n",
         RED, RESET, RED, a, RESET);

  add_one_to(&a);

  printf("Local variable %sa%s after call-by-reference function call: %s%d%s\n",
         RED, RESET, RED, a, RESET);

  return 0;
}
