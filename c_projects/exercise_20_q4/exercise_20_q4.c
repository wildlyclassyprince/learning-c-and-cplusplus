#include <stdio.h>
#include <string.h>

/*
Question 4:
Rewrite Question 3.
This time, try to write one block of characters
(that is, one string) at a time.
*/

enum {SUCCESS, FAIL, length = 100};

void  WriteBlock(FILE *fptr, char *str);

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
    WriteBlock(pfile, string);
    fclose(pfile);
  }

  return reval;
}

/* 'ReadWriteFile' definition */
void  WriteBlock(FILE *fptr, char *str)
{
  int   num;

  num = strlen(str);
  fwrite(str, sizeof(char), num, fptr);
  printf("%s\n", str);
}
