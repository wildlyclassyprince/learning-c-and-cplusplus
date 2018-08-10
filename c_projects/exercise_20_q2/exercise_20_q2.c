#include <stdio.h>

/*
Question 2:
Write a program to receive a string entered by the user,
and then save the string into a file with the name also
given by the user.
*/

enum {SUCCESS, FAIL, length = 100};

char  user[length + 1];
char  filename[32];

void  ReadFile(FILE *file, char *input);

int main(void)
{
  int   reval = SUCCESS;
  FILE  *fuser;

  /* getting user input */
  printf("Enter a file name:\n");
    fgets(filename, 10, stdin);
  /* create a file with name */

  /* take this input and save it */
  printf("Type something:\n");
    fgets(user, length, stdin);

  /* printing user input and file storage */
  if ((fuser = fopen(filename, "w")) == NULL){
    printf("Cannot open '%s'.", filename);
    reval = FAIL;
  }
  else {
    ReadFile(fuser, user);
    fclose(fuser);
  }

  return reval;
}

/* 'ReadFile' definition */
void  ReadFile(FILE *fout, char *input)
{
    fputs(input, fout);
    printf("\nThe file should contain this:\n%s\n", input);
    printf("Done!");
}
