#include <stdio.h>

/*
Question 3:
Given a 'double' value of 123.45, and an 'int' value
of 10000, write a program to save them in a binary
file, called 'data.bin', and then read them back
from the binary file. Also, print out what you're
writing or reading. What do you think the size of the
binary file will be?
*/

/* possible solution */
enum  {SUCCESS, FAIL};

void  DataWrite(FILE *fout);
void  DataRead(FILE *fin);
int   ErrorMsg(char *str);

int main(void)
{
  FILE  *fptr;
  char  filename[] = "data.bin";
  int   reval = SUCCESS;

  if ((fptr = fopen(filename, "wb+")) == NULL) {
    reval = ErrorMsg(filename);
  }
  else {
    DataWrite(fptr);
    rewind(fptr);
    DataRead(fptr);
    fclose(fptr);
  }

  return reval;
}

/* 'DataWrite' definition */
void  DataWrite(FILE *fout)
{
  double  dnum;
  int     inum;

  dnum = 123.45;
  inum = 10000;

  printf("%5.2f\n", dnum);
  fwrite(&dnum, sizeof(double), 1, fout);
  printf("%d\n", inum);
  fwrite(&inum, sizeof(int), 1, fout);
}

/* 'DataRead' definition */
void  DataRead(FILE *fin)
{
  double  x;
  int     y;

  printf("\nRead back from the binary file:\n");
  fread(&x, sizeof(double), (size_t)1, fin);
  printf("%5.2f\n", x);
  fread(&y, sizeof(int), (size_t)1, fin);
  printf("%d\n", y);
}

/* 'ErrorMsg' definition */
int   ErrorMsg(char *str)
{
  printf("Cannot open %s.\n", str);
  return FAIL;
}
