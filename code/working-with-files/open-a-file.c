#include <stdio.h>

int main (void) {
  char *filename = "open-a-file.c";
  FILE *file;

  printf("The maximum length of a filename on your machine is %d bytes\n",
    FILENAME_MAX);
  printf("Attempting to open file `%s` in read only mode...\n",
    filename);

  puts("");

  if ((file = fopen(filename, "r")) != NULL) {
    int character;

    while ((character = fgetc(file)) != EOF) {
      printf("%c", character);
    }
  } else {
    printf( "\n\tFile error or file does not exist.\n\tExiting... \n\n" );

    return -1;
  }

  return 0;
}