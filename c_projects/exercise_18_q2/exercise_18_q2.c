#include <stdio.h>

/*
Question 2:
Rewrite the program in Listing 19.2.
This time, create a function that can display the content in the
employee structure. Then, make calls to the function by passing
the structure to it.
*/

struct  employee {int id; char name[32]};

struct  employee info = {1, "J. Doe"};

typedef struct employee EMP;

EMP InfoDisplay(EMP e);

int main(void)
{
  printf("Sample:\n");
  InfoDisplay(info);

  return 0;
}

/* 'InfoDisplay' definition */
EMP InfoDisplay(EMP e)
{
  printf("Here is a simple:\n");
  printf("Employee Name: %s\n", info.name);
  printf("Employee ID #: %04d\n\n", info.id);

  printf("What's your name?\n");
    gets(info.name);
  printf("What's your ID number?\n");
    scanf("%d\n", &info.id);

  printf("\nHere's what you entered:\n");
  printf("Name: %s\n", info.name);
  printf("ID #: %04d\n", info.id);

  return e;
}
