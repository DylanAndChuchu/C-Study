#include <stdio.h>
#include <string.h> 

int main(void)
{
    char firstname[40]; 
    char lastname[40];
    printf("Hi! What's your first name?\n");
    scanf("%s", firstname); 
    printf("Enter your last name: \n");
    scanf("%s", lastname);
    printf("%s %s", firstname, lastname);

return 0;
}