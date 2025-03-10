#include <stdio.h>
#include "../libs/colors.h"

#define MAXLINE 1000

// Function prototypes
int get_line(char string[], int limit);
void copy(char to[], const char from[]);

int main(void) {
  int len;
  char line[MAXLINE];
  char longest[MAXLINE];
  int max = 0;

  while((len = get_line(line, MAXLINE)) > 1) {
    if(len > max) {
      max = len;

      copy(longest, line);
    }
  }

  if(max > 0) {
    printf("The longest string is %d chars long. The string is %s%s%s\n",
      max, RED, longest, RESET);
  }

  return 0;
}

/**
 * @brief Read a line into string and return its length
 *
 * @param string String into which a line is read
 * @param limit An integer that sets the limit
 * @return int The length of string
 */
int get_line(char string[], int limit) {
  int character,
    length;

  /*
   * Before reading in a new character, it’s necessary to check that there’s
   * enough room to store this new character in the array “string”, so the test
   * “length < (limit - 1)” *must* be made first.
   */
  for(length = 0; (length < (limit - 1)) && ((character = getchar()) != EOF && (character != '\n')); ++length) {
    string[length] = character;
  }

  if(character == '\n') {
    string[length] = character;

    ++length;
  }

  // Append the null character to the end of the character array (string)
  string[length] = '\0';

  return length;
}

/**
 * @brief Copy the string in from[] to to[]
 *
 * @param to A character array (string) to which a string will be copied
 * @param from A character array (string) from which a string will be copied
 */
void copy(char to[], const char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
