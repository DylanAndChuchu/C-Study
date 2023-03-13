#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (void)
{
  int biggest_int=INT_MAX;
  float biggest_flt=FLT_MAX;
  float smallest_flt=FLT_MIN;
  float a=biggest_flt*100.0f;

  printf("INT_MAX = %d, INT_MAX+1=%d\n", 
  biggest_int, biggest_int+1);
  printf("FLT_MAX = %e, FLT_MAX*100.0 = %e\n", 
  biggest_flt, biggest_flt*100.0f); 
  /*如果你乘的是10.0或者100.0的话那么其实是属于double类型，不是float类型
  */
  printf("FLT_MIN = %e, FLT_MIN*0.1f = %f\n", 
  smallest_flt, smallest_flt*0.1f);
  printf("%e\n", a);

  return 0;

}