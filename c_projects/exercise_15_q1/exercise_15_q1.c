#include <stdio.h>

/*
Question 1:
Given a character string, "I like C!", write a
program to pass the string to a function that
displays the string on the screen.
*/

/* function declaration */
void   PrintStr(char *str);

/* 'main()' function */
int main()
{
  char  string[] = "I like C!";

  PrintStr(string);
}

/* PrintStr definition */
void   PrintStr(char *str)
{
  printf("%s\n", str);
}
