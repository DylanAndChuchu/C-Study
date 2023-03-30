#include <stdio.h>
#include <string.h> //提供strlen()函数原型
#define DENSITY 62.4 //人体密度（单位:磅/立方英尺)

int main(void)
{
    float weight, volumn;
    int size, letters;
    char name[40]; //name是一个可容纳40个字符的数组，有40个字符

    printf("Hi! What's your first name?\n");
    scanf("%s", name); //这里的name不要再加&取地址了，是因为name是一个数组，不应该加. %s代表的是打印字符串
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name); //查name占据多少字节，应该是40个字节
    letters = strlen(name); //你如果输入9个字节，那么就是9个字节
    volumn = weight/DENSITY;
    printf("Well, %s, your volumn is %2.2f cubic feet.\n", 
    name, volumn);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", 
    size);



return 0;
}