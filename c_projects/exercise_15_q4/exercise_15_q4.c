#include <stdio.h>

/*
Question 4:
Rewrite the program in Listing 16.7.
This time, the array of pointer is initialized
with the following strings:
"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
"Friday", "Saturday".
*/

/* function declarations */
void  StrPrint1(char  **str1, int   size);
void  StrPrint2(char  *str2);

/* 'main()' function */
int main()
{
  char  *str[7] = {"Sunday",
                   "Monday",
                   "Tuesday",
                   "Wednesday",
                   "Thursday",
                   "Friday",
                   "Saturday\n"};
  int   i, size = 7;

  StrPrint1(str, size);
  for (i = 0; i < size; i++)
    StrPrint2(str[i]);

  return 0;
}

/* StrPrint1 definition */
void  StrPrint1(char  **str1, int   size)
{
  int   i;
  /* print all strings in an array of pointers to strings */
  for (i = 0; i < size; i++)
    printf("%s\n", str1[i]);
}

/* StrPrint2 definition */
void  StrPrint2(char  *str2)
{
  /* prints one string at a time */
  printf("%s\n", str2);
}
