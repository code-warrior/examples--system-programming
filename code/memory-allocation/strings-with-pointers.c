#include <stdio.h>
#include <stdlib.h>  // Required for malloc, free, and exit
#include <string.h>  // Required for strlen
#include <stdbool.h> // Required for bool

bool is_string(const char *str, unsigned long index) {
  if (str == NULL)
    return false;

  return (str[index] == '\0');
}

int main(void) {
  char drummer[] = "John Bonham";                 // An array, or sequence, of characters, plus the null character
                                                  // (`\0`), whose value is 0 ❡

  char *drummerPtr = "John Bonham";               // A pointer to a string constant. The pointer may be reassigned, as
                                                  // you might with any other variable, but the string to which it
                                                  // points is constant, or immutable ❡

  // Dynamically allocate a block of memory. Get the size of a character and multiply it by the amount of characters in
  // the string “drummer”. This is the number of bytes requested. malloc will return a void pointer that will
  // automatically be converted to another pointer on assignment, in this case, to a char. If no memory block is found,
  // it returns a null pointer ❡
  char *drummerPtrViaMalloc = malloc(sizeof(char) * (strlen(drummer)));

  // The following is equivalent to the previous, but includes the redundant case to char * ❡
  // char *drummerPtrViaMalloc = (char *) malloc(sizeof(char) * (strlen(drummer)));

  if (NULL == drummerPtrViaMalloc) {
    fprintf(stderr, "Insufficient memory. Exiting…\n");

    exit(1);
  }

  // Do not try to copy by assignment. The following would throw an error ❡
  // drummerPtrViaMalloc = drummer;
  strcpy(drummerPtrViaMalloc, drummer);

  unsigned long length_of_drummer = strlen(drummer),        // The length returned by strlen is the length of the
    length_of_drummerPtr = strlen(drummerPtr),              // string, not including the null character ❡
    length_of_drummerPtrViaMalloc = strlen(drummerPtr);

  printf("drummer[] is %s\n", drummer);
  printf("drummerPtr is %s\n", drummerPtr);
  printf("drummerPtrViaMalloc is %s\n", drummerPtrViaMalloc);

  drummer[0] = drummerPtrViaMalloc[0] = 'D';
  drummer[1] = drummerPtrViaMalloc[1] = 'a';
  drummer[2] = drummerPtrViaMalloc[2] = 'l';
  drummer[3] = drummerPtrViaMalloc[3] = 'e';
  drummer[5] = 'C';
  drummer[6] = 'r';
  drummer[7] = 'o';
  drummer[8] = 'v';
  drummer[9] = 'e';
  drummer[10] = 'r';

  putchar('\n');

  printf("drummer[] is now %s\n", drummer);

  // The following won’t work, because we can’t modify the string constant ❡
  // drummerPtr[0] = 'D';

  putchar('\n');

  printf("The length of the string is: %lu\n", strlen(drummer));
  printf("The length of the string is: %lu\n", strlen(drummerPtr));
  printf("The length of the string is: %lu\n", strlen(drummerPtrViaMalloc));

  putchar('\n');

  if (is_string(drummer, length_of_drummer))
    printf("%lu is the length of the string %s\n", length_of_drummer, drummer);
  else
    printf("%s is not a string", drummer);

  if (is_string(drummerPtr, length_of_drummerPtr))
    printf("%lu is the length of the string %s\n", length_of_drummerPtr, drummerPtr);
  else
    printf("%s is not a string", drummerPtr);

  if (is_string(drummerPtrViaMalloc, length_of_drummerPtrViaMalloc))
    printf("%lu is the length of the string %s\n", length_of_drummerPtrViaMalloc, drummerPtrViaMalloc);
  else
    printf("%s is not a string", drummerPtrViaMalloc);

  free(drummerPtrViaMalloc);
  drummerPtrViaMalloc = NULL;

  return 0;
}
