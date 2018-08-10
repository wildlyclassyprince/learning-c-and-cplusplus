#include <stdio.h>
#include <stdlib.h>

/* using the 'free()' and 'malloc()' functions together */

/* function declaration */
void  DataMultiply(int  max, int  *ptr);
void  TablePrint(int  max, int  *ptr);

/* 'main()' function */
int main()
{
  int   *ptr_int, max;
  int   termination;
  char  key = 'c';

  max = 0;
  termination = 0;
  while (key != 'x')
  {
    printf("Enter a single digit number:\n");
    scanf("%d\n", &max);

    /* call 'malloc()' */
    ptr_int = malloc(max * max * sizeof(int));
    if (ptr_int != NULL)
      {
        DataMultiply(max, ptr_int);
        TablePrint(max, ptr_int);
        free(ptr_int);
      }
    else
      {
        printf("'malloc()' function failed.\n");
        termination = 1;
        key = 'x';  /*stop while loop */
      }
    printf("\n\nPress 'x' key to quit; other key to continue.\n");
    scanf("%s\n", &key);
  }
  printf("\nBye!\n");
  return termination;
}

/* 'DataMultiply' definition */
void  DataMultiply(int  max, int  *ptr)
{
  int   i, j;

  for (i = 0; i < max; i++)
    for (j = 0; j < max; j++)
      *(ptr + i * max * j) = (i + 1) * (j + 1);
}

/* 'TablePrint' definition */
void  TablePrint(int max, int   *ptr)
{
  int   i, j;

  printf("The multiplication table of %d is:\n", max);
  printf(" ");
  for (i = 0; i < max; i++)
    printf("%4d", i + 1);
  printf("\n");
  for (i = 0; i < max; i++)
    printf("....", i + 1);
  for (i = 0; i < max; i++)
    {
      printf("\n%d|", i + 1);
      for (j = 0; j < max; j++)
        printf("%3d  ", *(ptr + i * max + j));
    }
}
