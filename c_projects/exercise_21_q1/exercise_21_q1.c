#include <stdio.h>

/*
Question 1:
Assume that the following paragraph of Tao Te Ching is saved
in a text file called 'LaoTzu.txt':
  Be bent, and you will remain straight.
  Be vacant, and you will remain full.
  Be worn, and you will readmain new.
Write a program to use 'ftell()' to find the position of the
three strings in the file, and then call 'fseek()' to set
the file position indicator is such a way that the three
strings are printed out in reverse order.
*/

enum {SUCCESS, FAIL, MAX_LEN = 80};

void  PtrSeek(FILE *fptr);
long  PtrTell(FILE *fptr);
void  DataRead(FILE *fptr);
int   ErrorMsg(char *str);

int main(void)
{
  FILE  *fptr;
  char  filename[] = "LaoTzu.txt";
  int   reval = SUCCESS;

  if ((fptr = fopen(filename, "r")) == NULL) {
    reval = ErrorMsg(filename);
  }
  else {
    PtrSeek(fptr);
    fclose(fptr);
  }

  return reval;
}

/* 'PtrSeek' definition */
void  PtrSeek(FILE *fptr)
{
  long  offset1, offset2, offset3;
  offset1 = PtrTell(fptr);
  DataRead(fptr);
  offset2 = PtrTell(fptr);
  DataRead(fptr);
  offset3 = PtrTell(fptr);
  DataRead(fptr);
  printf("\nRe-read the paragraph:\n");
  /* re-read the third sentence */
  fseek(fptr, offset3, SEEK_SET);
  DataRead(fptr);
  /* re-read the second sentence */
  fseek(fptr, offset2, SEEK_SET);
  DataRead(fptr);
  /* re-read the first sentence */
  fseek(fptr, offset1, SEEK_SET);
  DataRead(fptr);
}
/* 'PtrTell' definition */
long  PtrTell(FILE *fptr)
{
  long  reval;

  reval = ftell(fptr);
  printf("The fptr is at %1d\n", reval);

  return reval;
}

/* 'DataRead' definition */
void  DataRead(FILE *fptr)
{
  char  buff[MAX_LEN];

  fgets(buff, MAX_LEN, fptr);
  printf("%s", buff);
}

/* 'ErrorMsg' definition */
int   ErrorMsg(char *str)
{
  printf("Cannot open %s\n", str);

  return FAIL;
}
