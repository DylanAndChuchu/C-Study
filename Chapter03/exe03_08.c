#include <stdio.h>
#define CUPS_PER_PINT 2
#define OUNCE_PER_CUPS 8
#define BIGSPOON_PER_OUNCE 2
#define TEASPOON_PER_BIGSPOON 3

int main(void)
{
  double pint, ounce, cup, bigspoon, teaspoon;

  printf("Please enter a number of cups: ");
  scanf("%lf", &cup);
  pint=cup/CUPS_PER_PINT;
  ounce=cup*OUNCE_PER_CUPS;
  bigspoon=ounce*BIGSPOON_PER_OUNCE;
  teaspoon=bigspoon*TEASPOON_PER_BIGSPOON;

  printf("Here are some ways to show %g cups.\n", cup);
  printf("pint: %g\n", pint);
  printf("Ounce: %g\n", ounce);
  printf("Bigspoon: %g\n", bigspoon);
  printf("Teaspoon: %g\n", teaspoon);




    return 0;
}