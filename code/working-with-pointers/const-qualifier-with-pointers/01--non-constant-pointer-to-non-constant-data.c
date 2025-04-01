// fig07_06.c
// Converting a string to uppercase using a
// non-constant pointer to non-constant data.
#include <ctype.h> // For the “toupper” function
#include <stdio.h>
#include "../../libs/colors.h"

void convertToUppercase(char *sPtr);

int main(void) {
  char string[] = "cHaRaCters and $32.98";

  printf("The string before conversion: %s%s%s\n", BLUE, string, RESET);
  convertToUppercase(string);
  printf("The string after conversion: %s%s%s\n", BLUE, string, RESET);
}

void convertToUppercase(char *sPtr) {
  while (*sPtr != '\0') {
    *sPtr = toupper(*sPtr);

    ++sPtr;
  }
}
