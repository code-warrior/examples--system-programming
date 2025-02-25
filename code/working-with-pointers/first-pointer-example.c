#include <stdio.h>

int main(void) {
  int x, *px;

  x = 10;
  px = &x;

  // The above could have been written…
  // int x = 10, *px = &x;

  printf("The value of x is %i\n", x);
  printf("The value of px is %p\n", px);
  printf("Dereferencing px (*px): %i\n", *px);

  // Updating the value of x through indirection
  *px = 20;

  printf("The value of x is %i\n", x);

  return 0;
}
