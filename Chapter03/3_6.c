#include <stdio.h>
#include <inttypes.h>

int main (void)
{
    int32_t me32;

    me32=45933945;

    printf("First, assume int32_t is int: ");
    printf("me32=%d\n",me32);
    /*以下两行Andy测试添加的代码，非教材代码*/
    printf("Next, assume int32_t is long int: ");
    printf("me32=%ld\n",me32);

    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    //printf("me32= %""d""\n" , me32);
    printf("me32 = %" PRId32 "\n", me32);


    return 0;

}