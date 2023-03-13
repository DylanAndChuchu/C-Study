#include <stdio.h> /*预处理器指令：以#开头的都是预处理指令。然后stdio.h是C编译器软件包的标准部分，
提供键盘的输入和输出的功能*/
int main(void)  /*带（）的就是代表是函数。main函数总是被第一个调用的函数，后面还可以调用function()等*/
{
    int num; 
  
    num=1; //定义num的变量并给其赋值为1*/
    

printf("I am a simple "); 
printf("computer.\n"); /*这里面/n代表换行*/
printf("My favorite number is %d because it is first.\n",num); 
/*这里面%d代表的是占位符，具体占了什么位置，可以根据在这个打印之后写逗号再加上变量来体现，这里写了num那么就代表%d的占位符占了num的变量*/

getchar(); /*加了getchar这个函数以后在执行代码后，就需要任意按一个键才能让程序运行完后等待按键再跑完*/
return 0;


}