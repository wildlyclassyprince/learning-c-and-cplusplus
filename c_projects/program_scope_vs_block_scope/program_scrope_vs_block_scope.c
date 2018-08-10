#include <stdio.h>


/* program scope vs. block scope */
/*
Note that a global variable is declared with an
initializer outside a function.
*/
int       x = 1234;            /* program scope */
double    y = 1.234567;        /* program scope */

void function_1()
{
  printf("From function_1:\n  x=%d, y=%f\n", x, y);
}

int main()
{
  int     x = 4321;             /* block scope 1 */

  function_1();
  printf("Withing the main block:\n   x=%d, y=%f\n", x, y);
  /* a nested block */
  {
    double      y = 7.654321;   /* block scope 2 */
    function_1();
    printf("Withing the nested block:\n   x=%d, y=%f\n", x, y);
  }

  return 0;
}
