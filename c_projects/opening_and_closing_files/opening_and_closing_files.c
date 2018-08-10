#include <stdio.h>

/* opening and closing a file */
enum {SUCCESS, FAIL};

int main()
{
  FILE  *fptr;
  char  filename[] = "haiku.txt";
  int   reval = SUCCESS;

  if ((fptr = fopen(filename, "r")) == NULL){
    printf("Cannot open %s.\n", filename);
    reval = FAIL;
  }
  else {
    printf("The value of fptr: 0x%p\n", fptr);
    printf("Ready to close the file.");
    fclose(fptr);
  }

  return reval;
}
