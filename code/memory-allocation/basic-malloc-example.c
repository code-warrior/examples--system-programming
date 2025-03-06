#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *x = malloc(sizeof(int));               // The memory allocation function malloc() automatically casts the
                                                  // return pointer to an int. This statement is equivalent to the
                                                  // following:
                                                  // int *x = (int *) malloc(sizeof(int));

  *x = 10;                                        // Dereference the pointer in order to assign an integer ❡

  printf("Variable x is %d\n", *x);

  free(x);                                        // Release the block of memory allocated by malloc() to the system for
                                                  // recycling. Note that the pointer argument must contain the same
                                                  // exact address assigned by malloc(). Otherwise, behavior is
                                                  // undefined ❡

  x = NULL;                                       // Assign NULL to x so any future calls to x throw an error, such as
                                                  // a Segmentation Fault ❡

  return 0;
}
