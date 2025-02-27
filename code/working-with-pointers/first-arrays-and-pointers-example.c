#include <stdio.h>

#define MAX    10
#define OFFSET (MAX + 12)

int main(void) {
  int a[MAX];        // Define an array a of size 10
  int *aPtr = &a[0]; // Point to element 0 of a; that is, aPtr contains the address of a[0];

  printf("Populating the array with numbers %d through %d, inclusive\n", (MAX + OFFSET), (MAX + OFFSET + (MAX - 1)));

  for (int i = 0; i < MAX; i++)
    printf("a[%d] = %d\n", i, a[i] = (i + MAX + OFFSET));

  for (int i = 0; i < MAX; i++)
    printf("a[%d] is %d\n", i, *(aPtr + i));

  for (int i = 0; i < MAX; i++)
    printf("The address of a[%d] is %p\n", i, (aPtr + i));

  return 0;
}
