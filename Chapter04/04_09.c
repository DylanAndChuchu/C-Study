#include <stdio.h>
#define PAGES 959

int main(void)
{
  printf("*%d*\n", PAGES);
  printf("*%2d*\n", PAGES);
  printf("*%10d*\n", PAGES); //7个空格加3个数字
  printf("*%-10d*\n", PAGES); //打印项左对齐。

return 0;
}