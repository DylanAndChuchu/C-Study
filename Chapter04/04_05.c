#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
  printf("Some number limits for this system: ");
  printf("Biggest int: %d, Smaleest int:%d\n", INT_MAX, INT_MIN);
  printf("Smaleest long long: %lld, Biggest long long: %lld\n", 
  LLONG_MIN, LLONG_MAX);
  printf("One byte = %d bits on this system:\n", CHAR_BIT);
  printf("Biggest double: %e, Smallest double=%e\n", 
  DBL_MAX, DBL_MIN);
  printf("Biggest float: %e, Smallest float: %e\n",
  FLT_MAX, FLT_MIN);
  printf("double precision=%d digits, float precision=%d digits\n", 
  DBL_DIG, FLT_DIG);
  printf("Double mant: %d, Float mant: %d\n", 
  DBL_MANT_DIG, FLT_MANT_DIG);
  printf("Double min 10 exp = %d, Float min 10 exp = %d\n", 
  __DBL_MIN_10_EXP__, __FLT_MIN_10_EXP__);
  printf("Float epsilon = %e\n", FLT_EPSILON);
  



return 0;
}