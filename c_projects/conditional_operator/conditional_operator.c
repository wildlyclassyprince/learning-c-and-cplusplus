#include <stdio.h>

int main()
{
  /*using the 'sizeof' operator */
  char    ch = ' ';
  int     int_num = 0;
  float   flt_num = 0.0f;
  double  dbl_num = 0.0;

  printf("The size of char is: %d-byte\n", sizeof(char));
  printf("The size of ch is: %d-byte\n", sizeof ch);
  printf("The size of int is: %d-bytes\n", sizeof(int));
  printf("The size of int_num is: %d-bytes\n", sizeof int_num);
  printf("The size of float is: %d-bytes\n", sizeof(float));
  printf("The size of flt_num is: %d-bytes\n", sizeof flt_num);
  printf("The size of double is: %d-bytes\n", sizeof(float));
  printf("The size of dbl_num is: %d-bytes\n", sizeof dbl_num);

  /* the logical AND operator */
  int num;

  num = 0;
  printf("The AND operator yields: %d\n", (num%2==0) && (num%3==0));
  num = 2;
  printf("The AND operator yields: %d\n", (num%2==0) && (num%3==0));
  num = 3;
  printf("The AND operator yields: %d\n", (num%2==0) && (num%3==0));
  num = 6;
  printf("The AND operator yields: %d\n", (num%2==0) && (num%3==0));

  /* using the logical OR operator */
  int n;

  printf("Enter a single digit that can be divided\n by both 2 and 3:\n");
  for (n = 1; (n%2!=0)||(n%3!=0); )
    n = getchar() - '0';
  printf("You got such a number: %d\n", n);

  /* using the logical negation operator */
  int p;

  p = 7;
  printf("Given p = 7\n");
  printf("!(p < 7) yields: %d\n", !(p < 7));
  printf("!(p > 7) yields: %d\n", !(p > 7));
  printf("!(p == 7) yields: %d\n", !(p == 7));

  /* using bitwise operators */
  int x, y, z;

  x = 4321;
  y = 5678;
  printf("Given x = %u, i.e., 0X%04X\n", x, x);
  printf("      y = %u, i.e., 0X%04X\n", y, y);
  z = x & y;
  printf("x & y returns: %6u, i.e., 0X%04X\n", z, z);
  z = x | y;
  printf("x | y returns: %6u, i.e., 0X%04X\n", z, z);
  z = x ^ y;
  printf("x ^ y returns: %6u, i.e., 0X%04X\n", z, z);
  printf("  ~x  returns: %6u, i.e., 0X%04X\n", ~x, ~x); /* something wrong here */

  /* using shift operators */
  int a, b, c;

  a = 255;
  b = 5;
  printf("Given a = %4d, i.e., 0X%04X\n", a, a);
  printf("      b = %4d, i.e., 0X%04X\n", b, b);
  c = a >> b;
  printf("a >> b yields: %6f, i.e., 0X%04X\n", c, c);
  c = a << b;
  printf("a << b yields: %6f, i.e., 0X%04X\n", c, c);

  /* using the '?:' operator */
  int k;

  k = sizeof(int);
  printf("%s\n",
      (k == 2)
      ? "The int data type has 2 bytes."
      : "int does not have 2 bytes.");
  printf("The maximum value of int is: %d\n",
      (k != 2) ? ~(1 << k * 8 - 1) : ~(1 << 15) );

  return 0;
}
