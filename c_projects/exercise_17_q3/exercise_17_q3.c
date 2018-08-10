#include <stdio.h>

/*
Question 3:
Rewrite the program in Listing 18.4.
This time, add integers starting at the value of
'MIN_NUM' instead of 'MAX_NUM'.
*/

/* calling a recursive function */

enum  con {MIN_NUM = 0, MAX_NUM = 100};

int   fRecur(int n);

int main()
{
  int   i, sum1, sum2;

  sum1 = sum2 = 0;
  for (i = 1; i <= MIN_NUM; i++)
    sum1 += i;
  printf("The value of sum1 is %d.\n", sum1);
  sum2 = fRecur(MAX_NUM);
  printf("The value returned by 'fRecur()' is %d.\n", sum2);

  return 0;
}

/* 'fRecur' definition */
int   fRecur(int n)
{
  if (n == MAX_NUM)
    return 0;
  return fRecur(n - 1) + n;
}
