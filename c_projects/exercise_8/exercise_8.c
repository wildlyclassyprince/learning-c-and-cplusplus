#include <stdio.h>
#include <math.h>

int main()
{
  /*
  Question 1:
  Given the following statements,
  int x;
  unsigned int y;
  x = 0xAB78;
  y = 0xAB78;
  write a program to display the
  decimal values of x and y on the screen.
  */
  int x;
  unsigned int y;

  x = 0xAB78;
  y = 0xAB78u;
  printf("The decimal value of signed 0xAB78 is %d.\n", x); /* behaves as if unsigned */
  printf("The decimal value of unsigned 0xAB78 is %d.\n", y);

  /*
  Question 2:
  Write a program to measure the sizes of 'short int', 'long int'
  and 'long double' on your machine.
  */
  printf("The size of a short integer is %d bytes.\n", sizeof(short int));
  printf("The size of a long integer is %d bytes.\n", sizeof(long int));
  printf("The size of a long double is %d bytes.\n", sizeof(long double));

  /*
  Question 3:
  Write a program to multiply two signed int variables with positive
  values, and diplay the result as a long int.
  */
  int a, b; /* 'a' and 'b' are both signed */

  a = 8;
  b = 9;

  printf("5*a = %ld.\n", 5*a);
  printf("3*b = %ld.\n", 3*b);

  /*
  Question 4:
  Write a program to display negative integers in hex format along
  with their signed int equivalents.
  */
  int s, t; /* 's' and 't' are both signed */

  s = -12;
  t = -45;
  printf("%d in hex is 0x%04X\n", s, s);
  printf("%d in hex is 0x%04X\n", t, t);

  /*
  Question 5:
  Given an angle of 30 degrees, write a program to calculate its
  sine and tangent values.
  */
  float r;

  r  = 30.0; /* angle r in degrees */
  r *= 3.141593 / 180.0;
  printf("Sin(30) = %.2f.\n", sin(r));
  printf("Tan(30) = %.2f.\n", tan(r));

  /*
  Question 6:
  Write a program to calculate the non-negative square root
  of 0x19A1.
  */
  printf("The decimal value of 0x19A1 is %d.\n", 0x19A1);
  printf("sqrt(0x19A1) = 0x%04X.\n", sqrt(0x19A1));
  /* something isn't right here! */

  return 0;
}
