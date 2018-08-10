#include <stdio.h>

int main()
{
  /*
  Question 1;
  Given x = 0xEFFF and y = 0x1000, what hex values
  do you get by evaluating ~x and ~y?
  */
  int x, y;

  x = 0xEFFF;
  y = 0x1000;
  printf("~x is 0x%04X\n", ~x);
  printf("~y is 0x%04X\n", ~y);

  /*
  Question 2:
  Taking the values of x and y assigned in Question 1,
  write a program that prints out the values of !x and !y
  by using both %d and %u formats in 'printf()' function.
  */
  printf("!x integer value is %d\n", !x);
  printf("!x unsigned value is %6u\n", !x);
  printf("!y integer value is %d\n", !y);
  printf("!y unsigned value is %6u\n", !y);

  /*
  Question 3:
  Given x = 123 and y = 4, write a program that displays
  the results of the expressions x << y and x >> y.
  */
  int a, b, c;
  a = 123;
  b = 4;

  c = a << b;
  printf("a << b becomes %6f or 0x%04X\n", a << b);
  c = a >> b;
  printf("a >> b becomes %6f or 0x%04X\n", a >> b);

  /*
  Question 4:
  Write a program that shows the values (in hex) of the
  expressions 0xFFFF^0x8888, 0xABCD&0x4567 and 0xBCBA|0x1234.
  */
  printf("0xFFFF ^ 0x8888 is: 0x%04X\n", 0xFFFF ^ 0x8888);
  printf("0xABCD & 0x4567 is: 0x%04X\n", 0xABCD & 0x4567);
  printf("0xBCBA | 0x1234 is: 0x%04X\n", 0xBCBA | 0x4567);

  /*
  Question 5:
  Use the '?:' operator and the 'for' statement to write a
  program that keeps taking the characters entered by the user
  until the character 'q' is accounted.
  (Hint: put x != 'q' ? 1 : 0 expression as the second
  expression in a 'for' statement.)
  */

  char user;

  user = getchar();
  /* revisit the 'for' loop */

  return 0;
}
