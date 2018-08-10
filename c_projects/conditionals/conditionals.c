#include <stdio.h>

int main()
{
  /* using the 'if' statement */
  int i;

  printf("Integers that can be divided by both 2 and 3\n");
  printf("(within the range of 0 to 100):\n");
  for (i = 0; i <= 100; i++)
    {
      if ((i%2 == 0) && (i%3 == 0))
        printf("    %d\n", i);
    }

  /* using the 'if-else' statement */
  int j;

  printf("Even Number     Odd Number\n");
  for (j = 0; j < 10; j++)
    if (j%2 == 0)
      printf("%d\n", j);
    else
      printf("%14d\n", j);

  /* using nested 'if' statements */
  int k;

  for (k = -5; k <= 5; k++)
    {
      if (k > 0)
        if (k%2 == 0)
          printf("%d is an even number.\n", k);
        else
          printf("%d is an odd number.\n", k);
      else if (i ==0)
        printf("The number is zero.\n", k);
      else
        printf("Negative number: %d\n", k);
    }

  /* using the switch statement */
  int day;

  printf("Please enter a number\n");
  printf("(so we tell you what day it is):\n");
  day = getchar();
  switch (day)
    {
      case '1':
        printf("Monday\n");
        break;
      case '2':
        printf("Tuesday\n");
        break;
      case '3':
        printf("Wednesday\n");
        break;
      case '4':
        printf("Thursday\n");
        break;
      case '5':
        printf("Friday\n");
        break;
      case '6':
        printf("Saturday\n");
        break;
      case '7':
        printf("Sunday\n");
        break;
      default:
        printf("No such day.\n");
        break;
    }

  return 0;
}
