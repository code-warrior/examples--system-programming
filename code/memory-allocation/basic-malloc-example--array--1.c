#include <stdio.h>
#include <stdlib.h>
#include "../libs/colors.h"

void create_array_dynamically(const int SIZE) {
  int *a = malloc(sizeof(int) * SIZE);

  if (NULL == a) {
    printf("Memory allocation failed\n");

    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < SIZE; i++)
    printf("%s %d %s", GREEN, a[i], RESET);

   putchar('\n');

   free(a);
   a = NULL;
}

int main(void) {
  int input;

  printf("Enter a number for the malloc array size: \n");
  scanf("%d", &input);

  create_array_dynamically(input);

  return 0;
}
