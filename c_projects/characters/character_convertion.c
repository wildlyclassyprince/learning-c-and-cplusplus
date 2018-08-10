#include <stdio.h>

int main()
{

/* Printing out characters. */

  char c1, c2, c3, c4;

  c1 = 'A';
  c2 = 'a';
  c3 = 'B';
  c4 = 'b';

  printf("The converted value of c1 to character is: %c.\n", c1);
  printf("The converted value of c2 to character is: %c.\n", c2);
  printf("The converted value of c3 to character is: %c.\n", c3);
  printf("The converted value of c4 to character is: %c.\n", c4);

/* Converting numeric values back to characters. */

  char c5, c6, c7, c8;

  c5 = 65;
  c6 = 97;
  c7 = 66;
  c8 = 98;

  printf("The converted numeric value of c5 has character: %c.\n", c5);
  printf("The converted numeric value of c6 has character: %c.\n", c6);
  printf("The converted numeric value of c7 has character: %c.\n", c7);
  printf("The converted numeric value of c8 has character: %c.\n", c8);

/* Showing the numeric values of characters. */

  printf("The converted numeric value of c1 is: %d.\n", c1);
  printf("The converted numeric value of c2 is: %d.\n", c2);
  printf("The converted numeric value of c3 is: %d.\n", c3);
  printf("The converted numeric value of c4 is: %d.\n", c4);
  return 0;
}
