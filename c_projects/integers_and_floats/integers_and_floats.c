/* Integer vs. Floating-point division */
#include <stdio.h>

int main()
{
  int int1, int2, int3; /* declaring integers variables */
  float flt1, flt2, flt3; /* declaring floating-point variables */

  /* both divisor and dividend are integers */
  int1 = 32 / 10;
  flt1 = 32 / 10;

  /* divisor is an integer */
  int2 = 32.0 / 10;
  flt2 = 32.0 / 10;

  /* dividend is an integer */
  int3 = 32 / 10.0;
  flt3 = 32 / 10.0;

  printf("Integer division result 1: %d\n", int1);
  printf("Integer division result 2: %f\n", flt1);
  printf("Integer divisor result 1: %d\n", int2);
  printf("Integer divisor result 2: %f\n", flt2);
  printf("Integer dividend result 1: %d\n", int3);
  printf("Integer dividend result 2: %f\n", flt3);
  return 0;
}
