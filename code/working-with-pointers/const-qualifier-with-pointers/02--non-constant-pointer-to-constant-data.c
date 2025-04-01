// fig07_07.c
// Printing a string one character at a time using
// a non-constant pointer to constant data.

// #include <ctype.h> // Required for “toupper”
#include <stdio.h>
#include "../../libs/colors.h"

void printCharacters(const char *sPtr);

int main(void) {
  char string[] = "Characters in a string";

  puts("The string is:");
  puts(BLUE);
  printCharacters(string);
  puts(NORMAL);
}

// sPtr cannot be used to modify the character to which it points,
// i.e., sPtr is a “read-only” pointer
// Read right to left as, “sPtr is a pointer to a character constant”
void printCharacters(const char *sPtr) {
  for (; *sPtr != '\0'; ++sPtr) {
    printf("%c", *sPtr);
    // *sPtr = toupper(*sPtr); // Throws error, since sPtr is read-only
  }
}
