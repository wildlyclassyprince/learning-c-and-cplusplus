#include <stdio.h>
#include <string.h>

/* the size of a union */
int main(void)
{
  union   u {double   x; int  y;} a_union;

  struct  s {double   x; int  y;} a_struct;

  printf("The size of double: %d-byte(s)\n", sizeof(double));
  printf("The size of int:    %d-byte(s)\n", sizeof(int));

  printf("The size of 'a_union':  %d-byte(s)\n", sizeof(a_union));
  printf("The size of 'a_struct': %d-byte(s)\n", sizeof(a_struct));

  return 0;
}
