#include <stdio.h>

int main()
{
  /*
  Question 1:
  Write a program to put the characters 'B', 'y'
  and 'e' together on the screen.
  */
  putchar(66);
    putchar(10);
        putchar(121);
            putchar(10);
      putchar(101);
    putchar(10);

  /*
  Question 2:
  Display the two numbers 123 and 123.456 and
  align them at the left edge of the field.
  */
  int a;
  float b;

  a = 123;
  b = 123.456;

  printf("%d\n", a);
  printf("%f\n", b);

  /*
  Question 3:
  Given three integers 15, 150 and 1500, write
  a program that prints the integers on the screen
  in hex format.
  */
  printf("%x, %x, %x", 15, 150, 1500);

  /*
  Question 4:
  Write a program that uses 'getchar()' and 'putchar()'
  to read in a character entered by the user and write the
  character to the screen.
  */
  int g;

  putchar(10);

  printf("Enter a character:\n");

  g = getchar( );

  printf("The character entered is:\n");

  putchar(g);

  return 0;
}
