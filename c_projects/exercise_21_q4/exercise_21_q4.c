#include <stdio.h>

/*
Question 4:
Read teh text file 'strnum.mix', which is created by the
program in Listing 22.3. Redirect the input stream so that
you can use the 'scanf()' function to perform the reading
operation.
*/

/* possible solution */
enum  {SUCCESS, FAIL, MAX_NUM = 3, STR_LEN = 23};

void  DataRead(FILE *fin);
int   ErrorMsg(char *str);

int main(void)
{
  FILE  *fptr;
  char  filename[] = "strnum.mix";
  int   reval = SUCCESS;

  if ((fptr = freopen(filename, "r", stdin)) == NULL) {
    reval = ErrorMsg(filename);
  }
  else {
    DataRead(fptr);
    fclose(fptr);
  }

  return reval;
}

/* 'DataRead' definition */
void  DataRead(FILE *fin)
{
  int   i;
  int   miles;
  char  cities[STR_LEN];

  printf("The data read:\n");
  for (i = 0; i < MAX_NUM; i++){
    scanf("%s%d\n", cities, &miles);
    printf("%-23s  %d\n", cities, miles);
  }
}

/* 'ErrorMsg' definition */
int   ErrorMsg(char *str)
{
  printf("Cannot open %s.\n", str);
  return FAIL;
}
