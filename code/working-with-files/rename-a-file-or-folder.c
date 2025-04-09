#include <stdio.h>

/*
  Rename a file — or folder — using the `rename` function from the `stdio` library.

  Create a file called `original.txt` that you don’t care to rename, then run this
  program. Note, `rename` also renames folders.
*/
int main (void) {
  const char * const original_filename = "original.txt";
  const char * const new_filename = "new-name.txt";
  const int result_of_renaming_file = rename(original_filename, new_filename);

  if (result_of_renaming_file != 0) {
    fprintf(stderr,
      "\nAn error occurred while trying to rename file/folder `%s`. It does not"
      "\nexist, you do not have access privileges, or the file is open.\n",
      original_filename);
  } else {
    printf("The file/folder `%s` was renamed to `%s` successfully.\n",
      original_filename, new_filename);
  }

  return 0;
}
