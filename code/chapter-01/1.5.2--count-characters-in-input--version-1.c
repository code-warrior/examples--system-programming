#include <stdio.h>

int main(void) {
  long number_of_characters;

  number_of_characters = 0;

  // Type CNTRL + D to generate EOF
  while(getchar() != EOF)
    ++number_of_characters;

  // The ld conversion specifier is a long integer
  printf("Number of characters is %ld\n", number_of_characters);

  return 0;
}
