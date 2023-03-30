#include <stdio.h>

int main(void)
{
  int n;

  printf("Please enter three integers:\n");
  scanf("%*d %*d %d", &n);
  printf("The second integer was %d\n", n);
return 0;
}