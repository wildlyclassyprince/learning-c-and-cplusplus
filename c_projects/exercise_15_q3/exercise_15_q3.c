#include <stdio.h>

/*
Question 3:
Given a two-dimensional character array, 'str', that is initialized
as:
 'char  str[2][15] = { "You know what,", "C is powerful." };'
write a program to pass the start of 'str' to a function that prints
out the content of the character array.
*/

/* function declaration */
void  PrintScreen(char string[][15], int  max);

/* 'main()' function */
int   main()
{
  char  str[2][15] = { "You know what,",
                       "C is powerful." };

  PrintScreen(str, 2);
}

/* PrintScreen definition */
void  PrintScreen(char string[][15], int max)
{
  int   i;

  for (i = 0; i < max; i++)
    printf("%s\n", string[i]);
}
