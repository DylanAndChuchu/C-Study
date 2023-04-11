#include <stdio.h>
#define CM_PER_INCH 2.54
#define CM_PER_FEET 30.48

int main (void)
{
  double cm, inch, input;
  int feet;

  printf("Please enter a number of height (<=0) to quit: \n");
  while ((scanf("%lf", &input) == 1) && input > 0) 
  {
    feet = (int)(input / CM_PER_FEET);
    inch = (float)((input - feet * CM_PER_FEET) / CM_PER_INCH);
    printf("%.1f cm = %d feet, %.1f inches\n", input, feet, inch);

   
    printf("You can enter again (<= 0 to quit)");


  }
  printf("Done!\n");
  return 0;

}