#include <stdio.h>
#include <stdlib.h>

/*
Question 2:
Write a program that allocates a block of memory space
to hold 100 items of the 'float' data type by calling
the 'calloc()' function. Then, reallocate the block of
memory in order to hold 50 more items of the 'float'
data type.
*/
int main()
{
  /* declarations */
  int   item1, item2, size, *ptr;
  int   terminator = 0;

  /* initializing */
  item1 = 100;
  item2 = 50;
  size = sizeof(float);

  /* calling 'calloc()' */
  ptr = calloc(item1, size);

  /* testing allocation */
  if (ptr == NULL)
    {
      printf("Failed to allocate memory.\n");
      terminator = 1;
    }
  else
    {
      printf("Number of items: %d\nMemory size: %d\n", item1, ptr);
    }

  /* calling 'realloc' */
  ptr = realloc(ptr, size);

  /* testing */
  if (ptr == NULL)
    {
      printf("Failed to reallocate memory.\n");
      terminator = 1;
    }
  else
    {
      printf("Number of items: %d\nMemory size: %d\n", item2, ptr);
    }


  return terminator;
}
