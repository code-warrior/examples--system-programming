#include <stdio.h>
#include "../libs/colors.h"

int main(void) {
  int a = 10;
  int *aPtr = &a;

  // Dereference aPtr, add ten, then assign the result to what aPtr points to, which is variable a
  *aPtr += 10;

  printf("Dereferencing aPtr: %s%d%s\n", BLUE, *aPtr, NORMAL);
  printf("a: %s%d%s\n\n", BLUE, a, NORMAL);

  // The unary preincrement operator is at the same level of precedence as the unary dereference operator. Because this
  // level of precedence occurs right to left, the dereference takes place before the increment operation
  ++*aPtr;

  printf("The value of the dereferenced aPtr is %s%d%s\n", BLUE, *aPtr, NORMAL);
  printf("a: %s%d%s\n\n", BLUE, a, NORMAL);

  // The unary postincrement operator has higher precedence than the unary dereference operator. Without parentheses,
  // aPtr’s address would be incremented by 1, then dereferenced. Since the dereferenced expression does nothing, such
  // as be part of a larger expression, or even printed, the dereferencing would be useless and equivalent to aPtr++
  //
  // With parens in place, aPtr is dereferenced first, then the value of the variable to which aPtr points is
  // incremented by 1
  (*aPtr)++;

  printf("The value of the dereferenced aPtr is %s%d%s\n", BLUE, *aPtr, NORMAL);
  printf("a: %s%d%s\n", BLUE, a, NORMAL);

  // Based on the previous comment, can you guess what happens when you uncomment the following?
  // *aPtr++;

  return 0;
}
