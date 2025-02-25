#include <stdio.h>

int main(void) {
  int x = 10;

  // pointer_to_x is a pointer to int and is assigned the address of x
  int *pointer_to_x = &x;

  // The above is equivalent the two statements below. Note the second statement
  // int *pointer_to_x;
  // pointer_to_x = &x;

  printf("The value of “x” is %d and its address is %p\n", x, &x);
  printf("The value of “pointer_to_x” is %p\n", pointer_to_x);
  printf("The value of the variable to which “pointer_to_x” points is %d\n", *pointer_to_x);

  printf("\n--------------------------------------------------------------------------------\n\n");

  x = 987654321;

  printf("The value of “x” is now %d and its address has remained %p\n", x, &x);
  printf("The value of “pointer_to_x” has also remained %p\n", pointer_to_x);
  printf("The value of the variable to which “pointer_to_x” points is %d\n", *pointer_to_x);

  printf("\n--------------------------------------------------------------------------------\n\n");

  *pointer_to_x = 666;

  printf("The value of “x” is now %d and its address has remained %p\n", x, &x);
  printf("The value of “pointer_to_x” has also remained %p\n", pointer_to_x);
  printf("The value of the variable to which “pointer_to_x” points is %d\n", *pointer_to_x);

  return 0;
}
