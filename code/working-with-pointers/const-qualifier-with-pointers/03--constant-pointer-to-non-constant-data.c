// fig07_09.c
// Attempting to modify a
// constant pointer to non-constant data.
#include <stdio.h>

int main(void) {
  int x = 0;
  int y = 0;

  // constPtr is a constant pointer to an integer that can be modified
  // through constPtr, but constPtr always points to the same memory
  // location.
  // Read right to left as, “constPtr is a constant pointer to an integer”
  int * const constPtr = &x;

  *constPtr = 7;  // allowed: *constPtr is not const
// constPtr = &y; // error: ptr is const; cannot assign new address
}
