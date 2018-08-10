#include <stdio.h>

/*
Question 3:
Given a string 'Disk file I/O is fun.' write a program
to write the string into a file called 'test_21.txt' by
writing one character at a time. Meanwhile, print out
the string on the screen.
*/

enum {SUCCESS, FAIL, length = 100};

void  ReadWriteFile(FILE *fptr, char *str);

int main(void)
{
  int   reval = SUCCESS;
  char  string[] = "Disk file I/O is fun.";
  char  filename[] = "test_21.txt";
  FILE  *pfile;

  /* writing string to file */
  if ((pfile = fopen(filename, "w")) == NULL){
    printf("Cannot open %s.\n", filename);
    reval = FAIL;
  }
  else {
    ReadWriteFile(pfile, string);
    fclose(pfile);
  }

  return reval;
}

/* 'ReadWriteFile' definition */
void  ReadWriteFile(FILE *fptr, char *str)
{
  int   i, c;

  i = 0;
  while ((c = str[i]) != '\0') {
    putchar(c);
    fputc(c, fptr);
    i++;
  }
}
