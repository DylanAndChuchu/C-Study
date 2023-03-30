#include <stdio.h>
#include <string.h> 

int main(void)
{
    char firstname[40]; 
    char lastname[40];
    int len_first;
    int len_last;
    printf("Hi! What's your first name?\n");
    scanf("%s", firstname); 
    printf("Enter your last name: \n");
    scanf("%s", lastname);
    len_first=strlen(firstname);
    len_last=strlen(lastname);

    printf("a.\"%s\",  \"%s\"\n", firstname, lastname);
    printf("b.\"%20s\",  \"%-20s\"\n", firstname, lastname);
    printf("c.\"%-20s\",  \"%20s\"\n", firstname, lastname);
    printf("c.\"%*s\",  \"%*s\"\n", 
    len_first+3, firstname, len_last+3, lastname);
return 0;
}