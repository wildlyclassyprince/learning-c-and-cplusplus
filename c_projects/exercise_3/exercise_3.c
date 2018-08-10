#include <stdio.h>

int main()
{
  /*
  Question 1:
  Write a program that prints out the numeric
  values of characters Z and z.
  */

  /* to print out numeric values of characters */
  char big, small;

  big = 'Z';
  small = 'z';

  printf("Numeric value of the character 'Z' is %d\n", big);
  printf("Numeric value of the character 'z' is %d\n", small);

  /*
  Question 2:
  Given two numeric values, 72 and 104, write a program
  to print out the corresponding two characters.
  */

  /* to print out characters given numeric values */
  char first, second;

  first = 72;
  second = 104;

  printf("Character with numeric value '72' is %c\n", first);
  printf("Character with numeric value '104' is %c\n", second);

  return 0;
}
