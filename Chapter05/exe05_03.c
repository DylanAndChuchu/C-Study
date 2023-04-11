#define days_to_weeks 7
#include <stdio.h>

int main (void)
{
  int input;
  int days, weeks;

  printf("Please enter a number of days (<=0) to quit: \n");
  while ((scanf("%d", &input) == 1) && input > 0) 
  {
    weeks = input / days_to_weeks;
    days = input % days_to_weeks;
    printf("%d days = %d weeks and %d days.\n", input, weeks, days);
    printf("You can enter again (<= 0 to quit)");


  }
  printf("Done!\n");
  return 0;

}