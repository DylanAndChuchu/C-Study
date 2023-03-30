#include <stdio.h>
#include <string.h> 

int main(void)
{
   float num;
   printf("Please enter a float number: ");
   scanf("%f", &num);
   printf("The input is %.1f or %.1e\n", num, num);
   printf("Please enter a float number: ");
   scanf("%f", &num);
   printf("The input is +%.3f or %.3e", num, num);
return 0;
}