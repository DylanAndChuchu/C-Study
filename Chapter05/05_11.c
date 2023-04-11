#include <stdio.h>

int main(void)
{
  int a=1, b=1;
  int a_post, pre_b;

  a_post= a++;//后缀递增，代表先把a=1赋值给a_post，后面再把a=a+1
  pre_b = ++b;//前缀递增，代表先让b=b+1，后面再把b赋值给pre_b
  printf("a a_post     b pre_b \n");
  printf("%1d %6d %5d %5d\n", a, a_post, b, pre_b);


  return 0;
}