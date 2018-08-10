#include <stdio.h>

int main()
{
  /*
  Question 1:
  Rewrite the program in listing 10.1. This time,
  use the logical expression 'i%6 == 0' in the 'if'
  statement.
  */
  int i;

  printf("Integers that can be divided by 6\n");
  printf("(within the range of 0 to 100):\n");
  for (i = 0; i < 100; i++)
    {
      if (i%6 == 0)
        printf("%d\n", i);
    }

  /*
  Question 2:
  Rewrite the program in listing 10.1 by using nested
  'if' statements.
  */
  int k;

  printf("Integers that can be divided by 6\n");
  printf("(within the range of 0 to 100):\n");
  for (k = 0; k < 100; k++)
    if (k%2 == 0)
      if (k%3 == 0)
        printf("%d\n", k);

  /*
  Question 3:
  Write a program to read characters from the standard I/O.
  If the characters are A, B and C, display their numeric
  values on the screen. (The 'switch' statement is required.)
  */
  int user;

  printf("Enter a letter:\n");
  printf("(one of 'a', 'b' or 'c')\n");
  user = getchar();
  switch (user)
  {
    case 'a':
      printf("%d\n", user);
      break;
    case 'b':
      printf("%d\n", user);
      break;
    case 'c':
      printf("%d\n", user);
      break;
    default:
      printf("I said any of 'a', 'b' or 'c'.\n");
  }

  /*
  Question 4:
  Write a program that keeps reading characters from the
  standard input until the character 'q' is entered.
  */
  int g;

  printf("Enter a character:\n(press 'q' to exit)\n");
  while (1)
    {
      g = getchar();
      if (g == 'q')
        break;
    }

  /*
  Question 5:
  Rewrite the program in listing 10.7. This time, instead
  of skipping 3 and 5, skip the integer that can be evenly
  divided by both 2 and 3.
  */
  int h, m;

  m = 0;
  for (h = 1; h < 8; h++)
    {
      if ((h%2 == 0) && (h%3 == 0))
        continue;
        m += h;
    }
    printf("Sum of 1, 2, 3, 4, 5, and 7 is %d\n", m);

  return 0;
}
