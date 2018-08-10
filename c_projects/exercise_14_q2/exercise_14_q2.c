#include <stdio.h>

/*
Question 2:
Declare and define a function, called 'MultiTwo()',
that can perform multiplication on two integer variables.
Call the 'MultiTwo()' function from the 'main()' function
and pass two integers to 'MultiTwo()'. Then print out the
result returned by the 'MultiTwo()' function on the screen.
*/
/* declaring the 'MultiTwo()' function */
int   MultiTwo(int x, int y);

/* the 'main()' function */
int   main()
{
  int   a, b;
  a = 6;
  b = 7;
  printf("6 x 7 = %d\n", MultiTwo(a, b));
  return 0;
}

/* defining the 'MultiTwo()' function */
int   MultiTwo(int x, int y)
{
  /* multiples two integers */
  return (x * y);
}
