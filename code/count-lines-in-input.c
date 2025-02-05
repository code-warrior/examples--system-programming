#include <stdio.h>

int main(void) {
  int character, number_of_lines;
  number_of_lines = 0;

  while((character = getchar()) != EOF)
    if(character == 'A')
      ++number_of_lines;

  return 0;
}
