#include <stdio.h>

/*
Question 2:
Given the following declarations:
  typedef  char  WORD;
  typedef  int SHORT;
  typedef  long LONG;
  typedef  float FLOAT;
  typedef  double DFLOAT;
write a program to measure the sizes
of the synonyms to the data types.
*/

int main()
{
  typedef  char  WORD;
  typedef  int SHORT;
  typedef  long LONG;
  typedef  float FLOAT;
  typedef  double DFLOAT;

  printf("WORD\n");
  printf("size: %d-byte(s), character size: %d-byte(s)\n", sizeof(WORD), sizeof(char));
  printf("SHORT\n");
  printf("size: %d-byte(s), character size: %d-byte(s)\n", sizeof(SHORT), sizeof(int));
  printf("LONG\n");
  printf("size: %d-byte(s), character size: %d-byte(s)\n", sizeof(LONG), sizeof(long));
  printf("FLOAT\n");
  printf("size: %d-byte(s), character size: %d-byte(s)\n", sizeof(FLOAT), sizeof(float));
  printf("DFLOAT\n");
  printf("size: %d-byte(s), character size: %d-byte(s)\n", sizeof(DFLOAT), sizeof(double));

  return 0;
}
