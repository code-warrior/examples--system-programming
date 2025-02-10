#include <stdio.h>

int main(void) {
  double number_of_characters;

  // Replace EOF wih '\n' to see this program work in your CLI
  for (number_of_characters = 0; getchar() != EOF; ++number_of_characters)
    ;

  printf("Number of characters is %.0f\n", number_of_characters);

  return 0;
}
