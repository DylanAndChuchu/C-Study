#include <stdio.h>

int main(void)
{
  int count, sum;
  int days;

  count = 0;
  sum =0;

  printf("Enter the number of days you work:");
  scanf("%d", &days);

  while (count++ < days)
    sum = sum + count * count;
    printf("sum = %d\n", sum);
  

  return 0;
}