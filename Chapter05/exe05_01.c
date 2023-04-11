#define min_to_hours 60
#include <stdio.h>

int main (void)
{
  int input;
  int min, hour;

  printf("Please enter a number of mins (<=0) to quit: \n");
  while ((scanf("%d", &input) == 1) && input > 0) 
  {
    hour = input / min_to_hours;
    min = input % min_to_hours;
    printf("%d minutes = %d hours and %d minutes.\n", input, hour, min);
    printf("You can enter again (<= 0 to quit)");


  }
  printf("Done!\n");
  return 0;

}