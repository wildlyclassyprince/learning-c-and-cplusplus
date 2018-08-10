#include <stdio.h>

int main()
{
  /* using signed and unsigned modifiers */
  signed char ch;
  int          x; /* signed by default */
  unsigned int y;

  ch = 0xFF;
  x = 0xFFFF;
  y = 0xFFFFu;
  printf("The decimal of signed 0xFF is %d.\n", ch);
  printf("The decimal of signed 0xFFFF is %d.\n", x);
  printf("The decimal of unsigned 0xFFFFu is %u.\n", y);
  printf("The hex of decimal 12345 is 0x%X.\n", 12345);
  printf("The hex of decimal -12345 is 0x%X.\n", -12345);

  /* using short and long modifiers */
  printf("The size of short int is: %d bytes.\n", sizeof(short int));
  printf("The size of long int is: %d bytes.\n", sizeof(long int));
  printf("The size of float is: %d bytes.\n", sizeof(float));
  printf("The size of double is: %d bytes.\n", sizeof(double));
  printf("The size of long double is: %d bytes.\n", sizeof(long double));

  /* using %hd, %ld, and %lu specifiers */
  short int         q;
  unsigned int      r;
  long int          s;
  unsigned long int t;

  q = 0xFFFF;
  r = 0xFFFFu;
  s = 0xFFFFFFFFl;
  t = 0xFFFFFFFFL;
  printf("The short int of 0xFFFF is %hd.\n", q);
  printf("The unsigned int of 0xFFFF is %u.\n", r);
  printf("The long int of 0xFFFFFFFF is %ld.\n", s);
  printf("The unsigned long int of 0xFFFFFFFF is %lu.\n", t);

  return 0;
}
