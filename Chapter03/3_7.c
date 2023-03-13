#include <stdio.h>


int main (void)
{
    float aboat=32000.0;
    double abet=2.14e9;
    float dip=5.32e-5;

    printf("%f can be written %e\n", aboat, abet);
    
    printf("And it's %a in hexadeciman, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);




    return 0;

}