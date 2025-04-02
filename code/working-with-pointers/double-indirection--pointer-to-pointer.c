#include <stdio.h>
#include "../libs/colors.h"

int main(void) {
  char * border = "← ************************************************************************ →";
  int x = 10,
    *px = &x,
    **ppx = &px;

  printf("\n%s\n\n", border);

  printf("\t%sx%s is assigned the value of %s%d%s and its address, via %s&x%s, is\n\t%s%p%s.\n",
    GREEN, RESET, GREEN, x, RESET, GREEN, RESET, GREEN, &x, RESET);
  puts("");
  printf("\t%s*px%s is assigned the value of %s%p%s and its address, via\n\t%s&px%s, is %s%p%s. "
    "%s*px%s yields %s%d%s, which is the value of %sx%s.\n",
    CYAN, RESET, GREEN, px, RESET, CYAN, RESET, CYAN, &px, RESET, CYAN, RESET, GREEN, *px, RESET, GREEN, RESET);
  puts("");
  printf("\t%s*ppx%s is assigned the value of %s%p%s. %s*ppx%s\n\tyields %s%p%s, while %s**px%s yields %s%d%s.",
    MAGENTA, RESET, CYAN, ppx, RESET, MAGENTA, RESET, GREEN, *ppx, RESET, MAGENTA, RESET, GREEN, **ppx, RESET);

  printf("\n\n%s\n", border);

  return 0;
}
