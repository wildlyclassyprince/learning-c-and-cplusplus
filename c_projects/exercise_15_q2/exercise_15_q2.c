#include <stdio.h>

/*
Question 2:
Rewrite the program in Question 1.
This time, change the string of "I like C!" to
"I love C!" by moving a pointer that is initialized
with the start address of the string and updating
the string with new characters. Then, pass the updated
string to the function to display the content of the
string on the screen.
*/

/* function declaration */
void   PrintStr(char *str);

/* 'main()' function */
int main()
{
  char  string[] = "I like C!";
  char  *str;
  int   i;

  str = string;
  PrintStr(str);

  /* updating the string */
  for (i = 0; str[i] ; i++)
    {
      if (str[i] == 'i')
        str[i] = 'o';
      if (str[i] == 'k')
        str[i] = 'v';
    }
  PrintStr(str);
}

/* PrintStr definition */
void   PrintStr(char *str)
{
  printf("%s\n", str);
}
