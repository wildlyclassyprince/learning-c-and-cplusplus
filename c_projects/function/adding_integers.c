/*
A function that adds two integers,
and returns the result.
*/

#include <stdio.h>

/*
This function adds two integers and
returns the result.
*/

int integer_add(int x, int y)
{
  int result;
  result = x + y;
  return result;
}

int main()
{
  int sum;

  sum = integer_add(5, 12);
  printf("The sum of 5 and 12 is %d.\n", sum);
  return 0;
}
