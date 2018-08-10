#include <stdio.h>
#include <stdlib.h>

/*
Question 1:
Write a program to ask the user to enter the total number of
bytes he or she wants to allocate. Then, initialize the
allocated memory with consecutive integers, starting from 1.
Add all the integers contained by the memory block and print
out the final result on the screen.
*/

/* 'init_adder' declaration */
void  init_adder(int   values);

/* 'main()' function */
int main()
{
  /* asking the user to enter the total number of bytes to allocate */
  int   memory;
  printf("Enter the total number of integers:\n");
  scanf("%d\n", &memory);
  init_adder(memory);

  return 0;
}

/* 'init_adder' definition */
void  init_adder(int  values)
{
  int   i;
  int   result = 0;
  int   *ptr_memory;
  int   terminator;

  /* allocate memory specified */
  ptr_memory = malloc( sizeof(int) * values );

  /* confirming allocation of memory */
  if (ptr_memory == NULL)
    {
      printf("Failed to allocate memory.\n");
      terminator = 1;
    }
  else
    {
      /* initializing the memory allocated with a list of integers */
      for (i = 1; i < values; i++)
        ptr_memory[i] = i + 1;
    }

  /* summing the list of integers */
  for (i = 1; i < values; i++)
    result += ptr_memory[i];
  printf("The total is %d\n", result);
  free(ptr_memory);
}
