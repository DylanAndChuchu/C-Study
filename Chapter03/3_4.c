#include <stdio.h>

int main(void)
{
    unsigned int un=3000000000; //因为我们的系统是int为32位的系统，所以unsigned int是64位也就是42亿是大于30亿的们系统是short为16位的系统，所以范围是65536，200在这个范围内
    short end = 200;
    long big=65537; //因为我们系统里long是32位的系统，范围到65537
    long long verybig=12345678908642;

    printf("un=%u and not %d\n", un, un);
    printf("end=%hd and %d\n",end, end); //h代表short
    printf("big=%ld and not %hd\n", big, big); //h代表short，hd所以是65536的范围，但是big是655537，无法表示到这个范围，所以需要跳回到最初值0//
    printf("verybig=%lld and not %ld\n", verybig, verybig); //lld代表long long，范围是64位的。ld代表long，范围是32位
    printf("verybig=%lld and not %lu\n", verybig, verybig);

/*额外说明*/

    printf("sizeof(long long int)=%zd\n",sizeof(long long int));
    printf("sizeof(long int)=%zd\n",sizeof(long int));
    return 0;

}