#include <stdio.h>
#define PARISE "You are an extraordinary being."

int main(void)
{
    char name[40]; //name是一个可容纳40个字符的数组，有40个字符

    printf("Hi! What's your name?");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PARISE);



return 0;
}