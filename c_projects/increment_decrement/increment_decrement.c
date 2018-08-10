#include <stdio.h>

int main()
{
  /* pre- or post-increment(decrement) operators */
  int w, x, y, z, result;

  /*initializing x and y */
  w = x = y = z = 1;
  printf("Given w = %d, x = %d, y = %d, and z = %d,\n", w, x, y, z);

  result = ++w;
  printf("++w evaluates to %d and w is now %d\n", result, w);
  result = x++;
  printf("x++ evaluates to %d and x is now %d\n", result, x);
  result = --y;
  printf("--y evaluates to %d and y is now %d\n", result, y);
  result = z--;
  printf("z-- evaluates to %d and z is now %d\n", result, z);

  /* using relational operators */
  int a, b;
  double c;

  a = 7;
  b = 25;
  c = 24.46;
  printf("Given a = %d, b = %d, and c = %.2f,\n", a, b, c);
  printf("a >= b produces: %d\n", a >= b);
  printf("a == b produces: %d\n", a == b);
  printf("a < c produces: %d\n", a < c);
  printf("b > c produces: %d\n", b > c);
  printf("a != b - 18 produces: %d\n", a != b - 18);
  printf("a + b != c produces: %d\n", a + b != c);

  /* using the cast operator */
  int h, k;

  h = 7;
  k = 5;
  printf("Given h = %d, k = %d\n", h, k);
  printf("h / k produces: %d\n", h / k);
  printf("(float)h / k produces: %f\n", (float)h /k);

  return 0;
}
