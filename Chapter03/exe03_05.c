#include <stdio.h>
#define SEC_PER_YEAR 3.156e07 //这是一个符号常量来定义。

int main(void)
{
    double sec;
    sec=3.156e07;
    double age;
    printf("Enter your age:");
    scanf("%lf", &age);
    printf("%f years old equals to %e secs\n", age, age*SEC_PER_YEAR);
    /*在printf的时候不管是float还是double都用%f，但是输入的时候要用lf*/
    return 0;
}