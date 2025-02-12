#include <stdio.h>

int main(void) {
  int character, number_of_white_space_characters, number_of_other;
  int number_of_digits[10];
  number_of_white_space_characters = (number_of_other = 0);

  for(int i = 0; i < 10; ++i)
    number_of_digits[i] = 0;

  while((character = getchar()) != EOF)
    if((character >= '0') && (character <= '9'))
      ++number_of_digits[character - '0'];
    else
      if((character == ' ') || (character == '\n') || (character == '\t'))
        ++number_of_white_space_characters;
      else
        ++number_of_other;

  printf("Number of digits =");
  for(int i = 0; i < 10; ++i)
    printf(" %d", number_of_digits[i]);

  printf(", number of white space chars = %d, other = %d\n",
         number_of_white_space_characters, number_of_other);

  return 0;
}
