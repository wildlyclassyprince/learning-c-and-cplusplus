#include <stdio.h>

int main()
{
  /* using a while loop */
  int c;

  c = ' ';
  printf("Enter a character:\n(enter 'x' to exit)\n");
  while (c != 'x')
  {
    c = getc(stdin);
    putchar(c);
  }
  printf("\nOut of the while loop. Bye!\n");

  /* using a do-while loop */
  int i;

  i = 65;
  do {
    printf("The numeric value of %c is %d.\n", i, i);
    i++;
  } while(i < 72);

  /* the above do-while loop as a while loop */
  int j;

  j = 65;

  while (j < 72)
  {
      printf("The numeric value of %c is %d.\n", j, j);
      j++;
  }

  /* reversing the above loop */
  int k;

  k = 71;

  while (k >= 65)
  {
      printf("The numeric value of %c is %d.\n", k, k);
      --k;
  }

  /* converting 0 through 15 to hex numbers */
  int l;

  printf("Hex(Uppercase)  Hex(lowercase)  Decimal\n");

  for (l = 0; l < 16; l++)
    {
        printf("    %X                %x              %d\n", l, l, l);
    }

  return 0;
}
