#include <stdio.h>

int main() {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  fahr = lower;

  printf("F\tC\n");
  printf("-----------\n");

  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9; // Note that layout out the expression as
                                 // (5/9) * (fahr-32) invokes integer
                                 // truncation, leading to answers of “0” for
                                 // each result

    printf("%d\t%d\n", fahr, celsius);

    fahr += step; // Note: This is the compound form of `fahr = fahr + step`
  }

  return 0;
}
