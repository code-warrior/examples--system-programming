#include <stdio.h>

#define INSIDE_A_WORD  1
#define OUTSIDE_A_WORD 0

int main(void) {
  int character,
      number_of_lines,
      number_of_words,
      number_of_characters,
      state;

  state = OUTSIDE_A_WORD;
  number_of_lines = number_of_words = number_of_characters = 0;
  // The above is equivalent to the following:
  // number_of_lines = (number_of_words = (number_of_characters = 0));

  // Replace “EOF” with '\n'
  while((character = getchar()) != EOF) {
    ++number_of_characters;

    if(character == '\n')
      ++number_of_lines;

    // Test for a whitespace character, which would mean we’re not inside a word
    if((character == ' ') || (character == '\n') || (character == '\t'))
      state = OUTSIDE_A_WORD;
    else {
      if(state == OUTSIDE_A_WORD) {
        state = INSIDE_A_WORD;
        ++number_of_words;
      }
    }
  }

  printf("Number of lines: %d Number of words: %d Number of characters: %d\n",
    number_of_lines, number_of_words, number_of_characters);

  return 0;
}
