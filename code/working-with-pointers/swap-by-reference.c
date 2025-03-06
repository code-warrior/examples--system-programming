#include <stdio.h>
#include "../libs/colors.h"

void swap_by_reference(int *aPtr, int *bPtr) {
  const int TEMP = *aPtr;

  *aPtr = *bPtr;
  *bPtr = TEMP;
}

int main(void) {
  int first_number = 10,
    second_number = 20;

  printf("%sFirst number%s before swapping by reference: %s%d%s\n", BOLDGREEN, NORMAL, BOLDGREEN, first_number, NORMAL);
  printf("%sSecond number%s before swapping by reference: %s%d%s\n\n", BOLDRED, NORMAL, BOLDRED, second_number, NORMAL);

  swap_by_reference(&first_number, &second_number);

  printf("%sFirst number%s after swapping by reference: %s%d%s\n", BOLDGREEN, NORMAL, BOLDRED, first_number, NORMAL);
  printf("%sSecond number%s after swapping by reference: %s%d%s\n", BOLDRED, NORMAL, BOLDGREEN, second_number, NORMAL);

  return 0;
}
