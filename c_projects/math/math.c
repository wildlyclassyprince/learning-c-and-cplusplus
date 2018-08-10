#include <stdio.h>
#include <math.h>

/* 
File doesn't compile. Prints error of 'undefined reference'
to the math functions used in the program.
*/

int main()
{
  /* using sin(), cos() and tan() functions */
  double x, y, z;

  /* variable 'x' in degrees */
  x = 45.0;
  /* converting 'x' to radians */
  x *= 3.141593 / 180.0;
  printf("The sine of 45 is:    %f.\n", sin(x));
  printf("The cosine of 45 is:  %f.\n", cos(x));
  printf("The tangent of 45 is: %f.\n", tan(x));

  /* using pow() and sqrt() functions */
  y = 3.0;
  z = 9.0;
  printf("z^3 is: %7.0f.\n", pow(z, y));
  printf("sqrt(z) is: %2.0f.\n", sqrt(z));

  return 0;
}
