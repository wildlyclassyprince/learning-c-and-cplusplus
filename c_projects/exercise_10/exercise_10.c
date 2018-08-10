#include <stdio.h>

int main()
{
  /*
  Question 1:
  Given three integer variables, x = 512, y = 1024, and z = 2048,
  write a program to print out their left values as well as their
  right values.
  */
  int   x, y, z;

  x = 512, y = 1024, z = 2048;
  printf("x: address=%p, content=%d\n", &x, x);
  printf("y: address=%p, content=%d\n", &y, y);
  printf("z: address=%p, content=%d\n", &z, z);

  /*
  Question 2:
  Write a program to update the value of the double variable
  'flt_num' from 123.45 to 543.21 by using a double pointer.
  */
  double flt_num, *ptr_flt_num;

  flt_num = 123.45;
    printf("flt_num: address=%p, content=%5.2f\n", &flt_num, flt_num);
  ptr_flt_num = &flt_num;
    printf("ptr_flt_num: address=%p, content=%p\n", &ptr_flt_num, ptr_flt_num);
  *ptr_flt_num = 543.21;
    printf("flt_num: address=%p, content=%5.2f\n", &flt_num, flt_num);

  /*
  Question 3:
  Given a character variable ch and ch = 'A', write a program to
  update the value of ch to decimal 66 by using a pointer.
  */
  char  ch, *ptr_ch;

  ch = 'A';
  printf("ch: address=%p, content=%c\n", &ch, ch);
  ptr_ch = &ch;
  *ptr_ch = 66;
  printf("ch: address=%p, content=%d\n", ptr_ch, ch);

  /*
  Question 4:
  Given that s = 5 and t =6, write a program to calculate the
  multiplication of the two integers and print out the result,
  which is saved in s, all in the way of indirection (that is, using pointers).
  */
  int   s, t, *ptr_s;

  s = 5, t = 6;
  ptr_s = &s;
  *ptr_s = s * t;
  printf("5 * 6 = %d\n", s); /* not sure of this part */

  return 0;
}
