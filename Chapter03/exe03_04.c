#include <stdio.h>
int main(void)
{
    float num;
    printf("Please enter a float-point number:");
    scanf("%f", &num);
    printf("fixed-point notation: %f\n", num);
    printf("exponential notation: %e\n", num);
    printf("p notation: %a\n", num);


    return 0;
}