#include <stdio.h>
#define CM_PER_INCH 2.54


int main(void)
{
  double inch, cm;
  printf("Please enter your heights: ");
  scanf("%lf", &inch);
  cm = inch*CM_PER_INCH;
  printf("Your heights is %e cm\n", cm);




    return 0;
}