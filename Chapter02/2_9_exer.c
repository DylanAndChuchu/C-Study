#include <stdio.h>
void br(void);
void ic(void);

void br(void)
{
    printf("Brazil, Russia");
}

void ic()
{
    printf("India, China");

}
int main(void)
{
   br();
   printf(", ");
   ic();
   printf("\n");
   ic();
   printf(",\n");
   br();
   printf("\n");
   
    return 0;
}