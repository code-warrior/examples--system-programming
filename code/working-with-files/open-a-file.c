#include <stdio.h>

int main (void) {
  FILE *file;
  char *filename = "open-a-file.c"; // Try opening Apache’s access log: /var/log/apache2/access_log
  const char * const border = "-------------------------------------------------------------------------------------";

  puts("");

  printf("* The maximum length of a filename on your machine is %d bytes\n",
    FILENAME_MAX);
  printf("* Attempting to open file `%s` in read only mode...\n",
    filename);

  // fopen returns 0 on success
  if ((file = fopen(filename, "r")) != NULL) {
    int character;

    printf("* File opened successfully\n");
    printf("%s\n", border);

    while ((character = fgetc(file)) != EOF) {
      printf("%c", character);
    }

    printf("%s\n", border);
  } else {
    printf("* File `%s` could not be opened. It may not exist, or you may not have permission to read it.\n\tExiting... \n\n",
      filename);

    return -1;
  }

  // fclose() returns 0 on success
  if (fclose(file) != 0) {
    printf("* File error or file does not exist.\n\tExiting... \n\n");
  } else {
    printf("* File `%s` successfully closed.\n\n", filename);
  }

  return 0;
}