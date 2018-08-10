#include <stdio.h>

int main()
{
  /*
  Question 1:
  Given x = 1, and y = 3, write a program to print
  out the results of these expressions:
  x += y, x += -y, x -= y, x -= -y, x *= y and x *= -y.
  */
  int x, y, z;

  x = 1;
  y = 3;

  printf("Given x = %d and y = %d\n", x, y);
  printf("x += y yields: %d\n", x += y);
  printf("x += -y yields: %d\n", x += -y);
  printf("x -= y yields: %d\n", x -= y);
  printf("x -= -y yields: %d\n", x -= -y);
  printf("x *= y yields: %d\n", x *= y);
  printf("x *= -y yields: %d\n", x *= -y);

  /*
  Question 2:
  Given x = 3 and y = 6, what is the value of z after the
  statement z = x * y == 18; is executed?
  */

  /* initialize x and y */
  x = 3;
  y = 6;
  z = x * y == 18;

  printf("z = x * y == 18 yields: %d\n", z);

  /*
  Question 3:
  Write a program that initializes the integer variable
  x with 1 and outputs results with the following two
  statements:
  printf("x++ produces: %d\n", x++);
  printf("Now x contains: %d\n", x);
  */

  /* initializing x */
  x = 1;

  printf("x++ produces:   %d\n", x++);
  printf("Now x contains: %d\n", x);

  /*
  Question 4:
  Rewrite the program you wrote in Question 3. This time,
  include the following two statements:
  printf("x = x++ produces: %d\n", x = x++);
  printf("Now x contains:   %d\n", x);
  */

  printf("x = x++ produces: %d\n", x = x++);
  printf("Now x contains:   %d\n", x);

  return 0;
}
