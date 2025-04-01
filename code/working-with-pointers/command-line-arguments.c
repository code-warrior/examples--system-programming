#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("The number of arguments is %d\n", argc);

  for (int i = 0; i < argc; i++) {
    printf("The arguments are %s\n", *(argv + i));
  }

  return 0;
}
