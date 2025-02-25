#include <stdio.h>

#define RED   "\033[31m"
#define RESET "\033[0m"

int add_one_hundred(int x) {
  printf("The value of the automatic variable %sx%s is %s%d%s\n",
         RED, RESET, RED, x, RESET);

  x += 100;

  printf("The new value of the automatic variable %sx%s is %s%d%s\n",
         RED, RESET, RED, x, RESET);

  return x;
}

int main(void) {
  int number = 25;

  printf("The value of local variable %snumber%s is %s%d%s\n",
         RED, RESET, RED, number, RESET);
  printf("Passing the local variable %snumber%s to the %sadd_one_hundred()%s function returns %s%d%s\n",
         RED, RESET, RED, RESET, RED, add_one_hundred(number), RESET);
  printf("The value of local variable %snumber%s is %s%d%s\n",
         RED, RESET, RED, number, RESET);

  return 0;
}
