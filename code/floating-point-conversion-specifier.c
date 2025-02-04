#include <stdio.h>

int main() {
  float floating_point_number = 1.;

  printf("In the following floating point conversion specifier examples, arrows denote the\n"
  "bounded region of the output.\n\n");

  printf("Print a floating point number:\n%%f →%f←\n\n",
    floating_point_number);
  printf("Print a floating point number, at least 16 chars wide:\n%%16f →%16f←\n\n",
    floating_point_number);
  printf("Print a floating point number with a precision (chars after the decimal point) of 2:\n"
    "%%.2f →%.2f←\n\n",
      floating_point_number);
  printf("Print a floating point number with a width of 5 and a precision of 1:\n"
    "%%5.1f →%5.1f←\n\n",
      floating_point_number);
  printf("Print a floating point number with a width of 5 and a precision of 0, which suppresses\n"
    "the decimal point:\n%%5.0f →%5.0f←\n",
      floating_point_number);

  return 0;
}
