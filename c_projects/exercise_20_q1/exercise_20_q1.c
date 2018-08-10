#include <stdio.h>

/*
Question 1:
Write a program to read the text file 'haiku.txt' and
count the number of characters in the file. Also, print
out the contents of the file and the total character
number on the screen.
*/

/* have to read one character at a time */
enum {SUCCESS, FAIL};

int CharRead(FILE *file);

int main(void)
{
  FILE  *fptr;
  char  filename[] = "haiku.txt";
  int   reval = SUCCESS;

  if ((fptr = fopen(filename, "r")) == NULL){
    printf("Cannot open %s\n", filename);
    reval = FAIL;
  }
  else {
    CharRead(fptr);
    printf("\nNumber of characters: %d\n", CharRead(fptr));
    fclose(fptr);
  }

  return reval;
}

/* 'CharRead' definition */
int CharRead(FILE *file)
{
  int   c, value;

  while ((c = fgetc(file)) != EOF){
    putchar(c);
    ++value;
  }

  return value;
}
