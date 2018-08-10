#include <stdio.h>

int main()
{
  /*
  Question 2:
  Write a program that contains the two pieces of code
  shown in Question 1, and then execute the program.
  What are you going to see on the screen?
  */
  int i, j;

  /* loop 1 */
  for (i = 0, j = 1; i < 8; i++, j++)
    printf("Loop 1: %d + %d = %d\n", i, j, i + j);

  /* loop 2 */
  for (i = 0, j = 1; i < 8; i++, j++);
    printf("Loop 2: %d + %d = %d\n", i, j, i + j);

  /*
  Question 3:
  Rewrite the program in listing 7.1. This time, we want
  the 'while' statement to keep looping until the user
  enters the character 'K'.
  */
  int c;

  c = ' ';
  printf("Enter a character:\n");

  while (c != 'K')
  {
    c = getc(stdin);
    putchar(c);
  }

  printf("\nExiting loop. Bye!\n");

  /*
  Question 4:
  Rewrite the program shown in listing 7.2 by replacing the
  'do-while' loop with a 'for' loop.
  */
  int d;

  for(d = 65; d < 72; d++)
    printf("The numeric value of %c is %d.\n", d, d);

  /*
  Question 5:
  Rewrite the program in listing 7.6. This time, use a 'while'
  loop as the outer loop and a 'do-while' loop as the inner loop.
  */
  int e, f;

  /* initializing variable 'e' for the outer loop */
  e = 1;

  /* the 'while' loop (outer loop)*/
  while (e <= 3) {
    printf("The start of iteration %d of the outer loop.\n", e);
    e++;
    
      /* initializing variable 'f' for the inner loop */
      f = 1;

      /* the 'do-while' loop (inner loop)*/
      do {
        printf("\tIteration %d of the inner loop.\n", f);
        f++;
      } while(f <= 4);

  }

  return 0;
}
