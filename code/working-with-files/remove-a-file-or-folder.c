#include <stdio.h>

/*
  Delete / remove a file — or folder — using the `remove` function from the
  `stdio` library.

  Create a file called `delete-me` that you don’t care to delete, then run this
  program. Note, `remove` also deletes empty folders.
*/
int main (void) {
  const char * const filename = "delete-me";
  const int result_of_removing_file = remove(filename);

  if (result_of_removing_file != 0) {
    fprintf(stderr,
      "\nAn error occurred while trying to remove file/folder `%s`. It could either"
      "\nnot be found, you do not have permission to remove it, or a similar error was"
      "\nencountered.\n",
      filename);
  } else {
    printf("The file/folder `%s` was removed successfully.\n", filename);
  }

  return 0;
}
