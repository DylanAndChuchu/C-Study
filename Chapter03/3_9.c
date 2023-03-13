#include <stdio.h>


int main (void)
{
  int n=4;
  int m=5;
  float f=7.0f; //这里的7.0f后面的f是为了避免由double类型转换为float类型
  float g=8.0f;

  printf("%d\n", n, m); //参数比数据“”里面的要多，但是实际打印只打印第一个n
  printf("%d %d %d\n", n); //参数比“”里面的要少，后面的两个值就不一样，不匹配了
  printf("%d %d\n", f, g); //这里的f g都是浮点数，但是我们打印的是int，所以导致输出不对

    return 0;

}