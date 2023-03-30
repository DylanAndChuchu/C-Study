#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void)
{
  printf("*0123456789012345*\n");
  printf("[%24s]\n", BLURB); //因为BLURB的字符数不够24个，所以多出来的需要用前导0来补充
  printf("[%2s]\n", BLURB);
  printf("[%24.5s]\n", BLURB); //.5是要求只输出前5个字符，所以只会显示Authe
  printf("[%-24.5s]\n", BLURB);
   
return 0;
}