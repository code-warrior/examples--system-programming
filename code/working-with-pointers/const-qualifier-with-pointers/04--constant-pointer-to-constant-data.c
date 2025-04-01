// fig07_10.c
// Attempting to modify a
// constant pointer to constant data.
#include <stdio.h>

int main(void) {
  int x = 5;
  int y = 0;

  // constPtrToConstData is a constant pointer to a constant integer.
  // constPtrToConstData always points to the same location; the integer at that
  // location cannot be modified.
  // Read right to left as,
  //    “constPtrToConstData is a constant pointer to an integer constant”
  const int *const constPtrToConstData = &x;

  printf("%d\n", *constPtrToConstData);
  // *constPtrToConstData = 7; // error: *constPtrToConstData is const; cannot assign new value
  // constPtrToConstData = &y; // error: constPtrToConstData is const; cannot assign new address
}
