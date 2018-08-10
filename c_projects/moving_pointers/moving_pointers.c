#include <stdio.h>

/* pointer arithmetic */
int main()
{
  char    *ptr_ch;
  int     *ptr_int;
  double  *ptr_db;

  /* char pointer 'ptr_ch' */
  printf("Current position of 'ptr_ch': %p\n", ptr_ch);
  printf("The position after 'ptr_ch + 1': %p\n", ptr_ch + 1);
  printf("The position after 'ptr_ch + 2': %p\n", ptr_ch + 2);
  printf("The position after 'ptr_ch - 1': %p\n", ptr_ch - 1);
  printf("The position after 'ptr_ch - 2': %p\n\n", ptr_ch - 2);

  /* 'int' pointer 'ptr_int' */
  printf("Current position of 'ptr_int': %p\n", ptr_int);
  printf("The position after 'ptr_int + 1': %p\n", ptr_int + 1);
  printf("The position after 'ptr_int + 2': %p\n", ptr_int + 2);
  printf("The position after 'ptr_int - 1': %p\n", ptr_int - 1);
  printf("The position after 'ptr_int - 2': %p\n\n", ptr_int - 2);

  /* 'double' pointer 'ptr_db' */
  printf("Current position of 'ptr_db': %p\n", ptr_db);
  printf("The position after 'ptr_db + 1': %p\n", ptr_db + 1);
  printf("The position after 'ptr_db + 2': %p\n", ptr_db + 2);
  printf("The position after 'ptr_db - 1': %p\n", ptr_db - 1);
  printf("The position after 'ptr_db - 2': %p\n\n", ptr_db - 2);

  /* ------------------------------------------------------------------------- */

  /* pointer subtraction */
  int   *ptr_int1, *ptr_int2;

  printf("The position of 'ptr_int1': %p\n\n", ptr_int1);
  ptr_int2 = ptr_int1 + 5;
  printf("The position of 'ptr_int2 = ptr_int1 + 5': %p\n\n", ptr_int2);
  printf("The subtraction of 'ptr_int2 - ptr_int1': %d\n\n", ptr_int2 - ptr_int1);
  ptr_int2 = ptr_int1 - 5;
  printf("The position of 'ptr_int2 = ptr_int1 - 5': %p\n\n", ptr_int2);
  printf("The subtraction of 'ptr_int2 - ptr_int1': %d\n\n", ptr_int2 - ptr_int1);

  /* ------------------------------------------------------------------------- */

  /* accessing array via pointers */
  char  string[] = "It's a string!";
  char  *ptr_string;
  int   list[] = {1, 2, 3, 4, 5};
  int   *ptr_integer;

  /* access 'char' array */
  ptr_string = string;
  printf("Before the change, 'string' contains: %s\n", string);
  printf("Before the change, 'string[5]' contains: %c\n\n", string[5]);
  *(ptr_string + 5) = 'A';
  printf("After the change, 'string[5]' contains: %c\n", string[5]);
  printf("After the change, 'string' contains: %s\n\n", string);

  /* access 'int' array */
  ptr_integer = list;
  printf("Before the change, 'list[2]' contains: %d\n", list[2]);
  *(ptr_integer + 2) = -3;
  printf("After the change, 'list[2]' contains: %d\n\n", list[2]);


  return 0;
}
