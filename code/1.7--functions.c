#include <stdio.h>

int power(int m, int n);

int main(void) {
  printf("i\t2ⁱ\t-3ⁱ\n");
  printf("-----------------------\n");

  for(int i = 0; i < 10; i++)
    printf("%d\t%d\t%d\n", i, power(2, i), power(-3, i));

  return 0;
}

int power(int base, int n) {
  int p = 1;

  for(int i = 1; i <= n; ++i)
    p *= base;

  return p;
}
