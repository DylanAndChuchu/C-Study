#include <stdio.h>
int main(void)
{
    int ages;
    int days;
    ages=18;
    const int days_per_year=365;
    days=ages*days_per_year;
    
    printf("ages; %d\n",ages);
    printf("days,%d",days);


    return 0;
}