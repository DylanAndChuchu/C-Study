#include <stdio.h>
#include <string.h> 

int main(void)
{
   char name[40];
   float height;
   printf("Please enter your name: ");
   scanf("%s", name);
   printf("Please enter your height in inch: ");
   scanf("%f", &height);
   height=height/12;
   printf("%s, your are %.3f feet tall", name, height);
   
return 0;
}