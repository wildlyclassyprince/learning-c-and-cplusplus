#include <stdio.h>

/*
Question 1:
Given the following:
  - an 'int' variable with block scope and temporary usage
  - a constant character variable with block scope
  - a 'float' local variable with permanent storage
  - a register 'int' variable
  - a 'char' pointer initialized with a null character
write declarations for all of them.
*/
int qn1()
{
  /* an 'int' variable with block scope and temporary usage */
  int   i;

  /* a constant character variable with block scope */
  const char  ch;

  /* a 'float' local variable with permanent storage */
  static float  fl;

  /* a register 'int' variable */
  register int  j;

  /* a 'char' pointer initialized with a null character */
  char  *ptr_ch[] = {'\0'};

  return 0;
}

/* ----------------------------------------------------------- */
/*
Question 2:
Rewrite the program in Listing 14.2. This time, pass the
'int' variable 'x' and the 'float' variable 'y' as arguments
to the 'function_1()' function. What do you get on your
screen after running the script?
*/
/*void function_1(int x, float y)
{
  printf("From function_1:\n x=%d, y=%f\n", x, y);
}

int main()
{
  int   x = 4321;

/*
  function_1();
  printf("Withing the main block:\n x=%d, y=%f\n", x, y);
  {
    float y = 7.654321;
    function_1();
    printf("Withing the nested block:\n x=%d, y=%f\n", x, y);
  }
  return 0;
}
*/
/*
Result:
1. Error: too few arguments to function 'function_1'
2. Error: 'y' undeclared (first use in this function)
*/

/* ----------------------------------------------------------- */
/*
Question 3:
Compile and run the following program. What do you get on your
screen and why?
#include <stdio.h>
int main()
{
  int i;

  for(i = 0; i < 5; i++)
    {
      int x = 0;
      static int y = 0;
      printf("x=%d, y=%d\n", x++, y++)
    }
  return 0;
}
*/
/*
Result:
x = 0, y = 0
x = 0, y = 1
x = 0, y = 2
x = 0, y = 3
x = 0, y = 4
Because x has a temporary storage with the block scope,
and y has a permanent storage, x is set to 0 every time the
program execution enters the for loop, but the value saved
in y is kept.
*/
/* ----------------------------------------------------------- */
/*
Question 4:
Rewrite the 'add_two()' function in Listing 14.3 to print
out the previous result of the addition, as well as the
counter value.
*/
/* the add_two function */
int add_two(int x, int y)
{
  static int counter = 1;
  static int sum = 0;
  printf(“This is the function call of %d,\n”, counter++);
  printf(“the previous value of sum is %d,\n”, sum);
  sum = x + y;
  return sum;
}
/* the main function */
main()
{
  int i, j;
  for (i=0, j=5; i<5; i++, j--)
    printf(“the addition of %d and %d is %d.\n\n”,
            i, j, add_two(i, j));
  return 0;
}
