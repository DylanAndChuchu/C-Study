#include <stdio.h>

int main(void)
{
  int second_number;
  int first_number;
  int c;

  printf("This program computes moduli. \n");
  printf("Enter an integer to serve as the second operand:");
  scanf("%d", &second_number);
  printf("Now enter the first operrand:");

  while ((scanf("%d", &first_number)==1) && first_number >0 )
  {
    printf("%d %% %d is %d\n", first_number, second_number, first_number % second_number);
    printf("Enter an integer for next first_number (<=0) to quit:");


  }
  
  printf("Done!\n");




  return 0;
}