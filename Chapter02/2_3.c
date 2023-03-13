//two_function --一个文件有两个函数
#include <stdio.h> //这也是一个函数原型，但是这里没有函数定义，但是编译器会去调用去找到对应的printf
void butler(void); //这是一个函数原型，函数头, 括号内的void是一个参数，代表空参数。括号外的void

void butler(void)
{
    printf("You rang, sir?\n");

}

int main(void)
{ 
    printf("I will summon the bulter function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");


    return 0;
}

