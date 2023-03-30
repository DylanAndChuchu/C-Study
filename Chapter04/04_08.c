#include <stdio.h>


int main(void)
{
  const double RENT=3852.99; //const 变量的浮点数

  printf("*%f*\n", RENT);
  printf("*%e*\n", RENT);
  printf("*%4.2f*\n", RENT);
  printf("*%3.1f*\n", RENT);
  printf("*%10.3f*\n", RENT);
  printf("*%10.3E*\n", RENT);
  printf("*%+4.2f*\n", RENT);
  printf("*%010.2f*\n", RENT); //这里的0意思是要用0去填充
   
return 0;
}