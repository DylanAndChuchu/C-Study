#include <stdio.h>
#define L 3.785
#define km 1.609
int main (void)
{
  float distance, gas;

  printf("Input the distance you travelled (in miles):");
  scanf("%f", &distance);
  printf("Input the gas you spent in (gallon):");
  scanf("%f", &gas);
  printf("USA: your gas wear is %.1f mile/gallon\n", distance/gas);
  printf("EU: your gas wera is %.1f liter/100km\n", gas*L/(distance*km));

  return 0;

}