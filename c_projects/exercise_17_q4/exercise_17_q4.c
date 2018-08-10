#include <stdio.h>

/*
Question 4:
Write a program tha accepts command-line arguments.
If the number of command-line arguments, not including
the name of the executable itself, is less than two,
print out the usage format of the program and ask the
user to re-enter the command-line arguments. Otherwise,
display all command-line arguments entered by the user.
*/

int main(int argc, char *argv[])
{
  if (argc < 3)
    printf("Program requires at least 2 arguments.\nRe-enter arguments.\n");
  else
    printf("The first command-line argument is: %s\n", argv[0]);
    printf("The rest of the command-line arguments are:\n");
    for (i = 1; i < argc; i++)
      printf("%s\n", argv[i]);
}
