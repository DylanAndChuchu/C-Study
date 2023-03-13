#include <stdio.h>


int main (void)
{
    printf("Type short has a size of %zd bytes.\n", sizeof(short));//zd这里写d其实也可以，写zd是因为可移植性
   printf("Type int has a size of %zd bytes.\n", sizeof(int));//zd这里写d其实也可以，写zd是因为可移植性
   /* printf("Type int has a size of %llu bytes.\n", sizeof(int)); 鼠标移到sizeof可以发现这是一个unsigned long long类型，那么%里面可以写llu或者lu */
   printf("Type char has a size of %zd bytes.\n", sizeof(char));
printf("Type long has a size of %zd bytes.\n", sizeof(long));
printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
printf("Type float has a size of %zd bytes.\n", sizeof(float));
printf("Type double has a size of %zd bytes.\n", sizeof(double));
printf("Type long double has a size of %zd bytes.\n", sizeof(long double));



    return 0;

}