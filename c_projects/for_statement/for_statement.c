#include <stdio.h>

int main()
{
  /* converting 0 through 15 to hex numbers */
  int i;

  printf("Hex(uppercase)  Hex(lowercase)    Decimal\n");

  for(i = 0; i < 16; i++)
    {
      printf("     %X               %x             %d\n", i, i, i);
    }

  /* the null statement */
  int j;

  for (j = 0; j < 8; j++);

  /* multiple expressions */
  int k, l;

  for (k = 0, l = 8; k < 8; k++, l--)
    printf("%d + %d = %d\n", k, l, k + l);
    /*
    because there is one statement inside the for loop, no
    braces '{}' are used to form a statement block
    */

  /* another example of using multiple expressions */
  int m, n;

  for (m = 0, n = 1; m < 8; m++, n++)
    printf("%d - %d = %d\n", m, n, n - m);

  /* nested loops */
  int o, p;

  for (o = 1; o <= 3; o++)
    {
      printf("The start of iteration %d of the outer loop.\n", o);
      for (p = 1; p <= 4; p++)
        {
          printf("\t Iteration %d of the inner loop.\n", p);
        }
      printf("The end of iteration %d of the outer loop.\n", o);
    }

  return 0;
}
