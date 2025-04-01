#include <stdio.h>

#define MAX 4

int main(void) {
  // “suit is a pointer to a char constant”
  const char *suit[MAX] = {"Hearts", "Diamonds", "Clubs", "Spades"};

  for (int i = 0; i < MAX; i++) {
    printf("suit[%d] is %s\n", i, suit[i]);
    printf("*(suit + %d) is %s\n\n", i, *(suit + i));
  }

  // Disallowed: const char
  // suit[0][0] = 'd';
}
