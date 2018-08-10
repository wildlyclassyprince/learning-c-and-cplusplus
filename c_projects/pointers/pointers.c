#include <stdio.h>

int main()
{
  /* obtaining addresses ('address of' operator)*/

  char  c;
  int   x;
  float y;

  printf("c: address=%p, content=%c\n", &c, c);
  printf("x: address=%p, content=%d\n", &x, x);
  printf("y: address=%p, content=%5.2f\n", &y, y);

  c = 'A';
  x = 7;
  y = 123.45;

  printf("c: address=%p, content=%c\n", &c, c);
  printf("x: address=%p, content=%d\n", &x, x);
  printf("y: address=%p, content=%5.2f\n", &y, y);

  /* declaring and assigning values to pointers */
  char  l, *ptr_l;
  int   m, *ptr_m;
  float n, *ptr_n;

  l = 'B';
  m = 8;
  n = 567.89;

  printf("l: address=%p, content=%c\n", &l, l);
  printf("m: address=%p, content=%d\n", &m, m);
  printf("n: address=%p, content=%5.2f\n", &n, n);

  ptr_l = &l;
    printf("ptr_l: address=%p, content=%p\n", &ptr_l, ptr_l);
    printf("*ptr_l => %c\n", *ptr_l);
  ptr_m = &m;
    printf("ptr_m: address=%p, content=%p\n", &ptr_m, ptr_m);
    printf("*ptr_m => %d\n", *ptr_m);
  ptr_n = &n;
    printf("ptr_n: address=%p, content=%p\n", &ptr_n, ptr_n);
    printf("*ptr_n => %5.2f\n", *ptr_n);

  /* changing values via pointers */
  char  k, *ptr_k;

  k = 'T';
  printf("k: address=%p, content=%c\n", &k, k);
  ptr_k = &k;
    printf("ptr_k: address=%p, content=%p\n", &ptr_k, ptr_k);
    printf("*ptr_k => %c\n", *ptr_k);
  *ptr_k = 'U';
    printf("ptr_k: address=%p, content=%p\n", &ptr_k, ptr_k);
    printf("*ptr_k => %c\n", *ptr_k);
  printf("k: address=%p, content=%c\n", &k, k);

  /* pointing to the same thing */
  int   a;
  int   *ptr_1, *ptr_2, *ptr_3;

  a = 1234;
  printf("a: address=%p, content=%d\n", &a, a);
  ptr_1 = &a;
  printf("ptr_1: address=%p, content=%p\n", &ptr_1, ptr_1);
    printf("*ptr_1 => %d\n", *ptr_1);
  ptr_2 = &a;
  printf("ptr_2: address=%p, content=%p\n", &ptr_2, ptr_2);
    printf("*ptr_2 => %d\n", *ptr_2);
  ptr_3 = &ptr_1;
  printf("ptr_3: address=%p, content=%p\n", &ptr_3, ptr_3);
    printf("*ptr_3 => %d\n", *ptr_3);

  return 0;
}
