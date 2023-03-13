#include <stdio.h>


int main (void)
{
  float salary;

  printf("\aEnter your desired monthly salary:");//\a是一个警报,不会影响光标的位置
  printf(" $_______\b\b\b\b\b\b\b");
  scanf("%f", &salary); //人机交互，让程序员给salary float进行赋值
  printf("\n\t$%.2f a month is $%.2f a year", salary, salary*12.0);
  /*第一个\n是换行，第二个\t是水平制表符，相当于tab键*/
  printf("\rGee@\n"); //\r是回车键
  
  return 0;

}