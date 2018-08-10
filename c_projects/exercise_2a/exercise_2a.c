/*
Question 4:
Write a C function that can perform a
multiplication of two integers and returns
the calculated result.
*/

#include <stdio.h>

/*
Define the function
*/

int multiplication(int x, int y)
{
  int result;
  result = x * y;
  return result;
}

/*
Question 5:
Write a C program that call the C function
you just wrote to calculate the multiplication
of 3 and 5, and then print the returned value.
*/

int main()
{
  int mult;
  mult = multiplication(3, 5);
  printf("3 times 5 is %d\n", mult);
  return 0;
}
