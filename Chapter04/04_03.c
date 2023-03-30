#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40]; //name是一个可容纳40个字符的数组，有40个字符

    printf("Hi! What's your name?");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", 
    strlen(name), sizeof(name));
    printf("Your phrase of praise has %zd letters occupies %zd memory cells.\n", 
    strlen(PRAISE), sizeof(PRAISE));
    /*printf("The phrase of praise has %zd letters ",
    strlen(PARISE));*/



return 0;
}