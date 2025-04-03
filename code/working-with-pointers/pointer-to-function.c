#include <stdio.h>

int square(int a) {
  return a * a;
}

int cube(int b) {
  return b * b * b;
}

int main( void ) {
  int z = 4;
  // Without the parens, this would declare a function that returns a pointer
  // to an integer. Alos, the following two statements could have also been
  // written as:
  //
  //   int (*ptr_to_function) (int) = square;
  //
  int (*ptr_to_function) (int);
  ptr_to_function = square;

  // Parens around *ptr_to_function are required.
  printf("ptr_to_function(%d) returns %d \n", z, (ptr_to_function)(z));
  printf("square(%d) returns %d \n", z, square(z));
  printf("cube(%d) returns %d \n", z, cube(z));

  puts("");

  printf("The address to which *ptr_to_function points: %p \n", *ptr_to_function);
  printf("The address of the square function: %p\n", &square);
  printf("The address of the cube function: %p\n", &cube);

  puts("");

  ptr_to_function = cube;

  printf("The address to which *ptr_to_function points: %p \n", *ptr_to_function);
  printf("The address of the square function: %p\n", &square);
  printf("The address of the cube function: %p\n", &cube);

  return 0;
}
