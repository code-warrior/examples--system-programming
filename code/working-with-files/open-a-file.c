#include <stdio.h>

int main (void) {
  FILE *file;
  char *filename = "open-a-file.c"; // Try opening Apache’s access log: /var/log/apache2/access_log
  const char * const border = "-------------------------------------------------------------------------------------";

  puts("");

  printf("* The maximum length of a filename on your machine is %d bytes\n",
    FILENAME_MAX);
  printf("Attempting to open file `%s` in read only mode...\n",
    filename);

  // fopen returns 0 on success
  if ((file = fopen(filename, "r")) != NULL) {
    int character;

    printf("%s\n", border);

    while ((character = fgetc(file)) != EOF) {
      printf("%c", character);
    }

    printf("%s\n", border);
  } else {
    printf( "\n\tFile error or file does not exist.\n\tExiting... \n\n" );

    return -1;
  }

  puts("");

  // fclose() returns 0 on success
  return 0;
}