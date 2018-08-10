#include <stdio.h>

/* referencing the same memory in different ways */
/*
assume that the 'char' data type is 1 byte long,
and the 'int' data type is 2 bytes long.
*/

union   u {char   ch[2]; int  num;};

int   UnionInitialize(union   u val);

int main(void)
{
  union   u val;
  int     x;

  x = UnionInitialize(val);

  printf("The two characters held by the union:\n");
  printf("%c\n", x & 0x00FF);
  printf("%c\n", x >> 8);

  return 0;
}

/* 'UnionInitialize' definition */
int   UnionInitialize(union   u val)
{
  val.ch[0] = 'H';
  val.ch[1] = 'i';

  return val.num;
}
