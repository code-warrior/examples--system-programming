#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main() {
  int fahrenheit = LOWER, celsius;

  printf("F\tC\n");
  printf("-----------\n");

  while (fahrenheit <= UPPER) {
    celsius = 5 * (fahrenheit - 32) / 9;

    printf("%d\t%d\n", fahrenheit, celsius);

    fahrenheit += STEP;
  }

  return 0;
}
