#include <stdio.h>

/* the add_two function */
int add_two(int x, int y)
{
  static int counter = 1;

  printf("This is the function call of %d,\n", counter++);
  return (x + y);
}

/* the main function */
int main()
{
  int i, j;

  for (i =0, j = 5; i < 5; i++, j--)
    printf("the addition of %d and %d is %d.\n\n",
            i, j, add_two(i, j));

  /* to prove if a pointer modified with 'const'
  can be assigned a different address of a string
  declared with 'char const' */
  char str[] = "A string constant.";
  char *ptr_str;
  char str1[] = "Another one.";
  char *ptr_str1;

  printf("str: address=%d, content=%s\n", &str, str);
  printf("str1: address=%d, content=%s\n", &str1, str1);
  //
  ptr_str = &str;
    printf("ptr_str (the first one): address=%d, content=%d\n", &ptr_str, ptr_str);
    printf("*ptr_str contains %c\n", *ptr_str);
  //
  ptr_str = &str1;
    printf("ptr_str (the second one): address=%d, content=%d\n", &ptr_str, ptr_str);
    printf("*ptr_str contains %c\n", *ptr_str);
  //
  ptr_str1 = &str1;
    printf("ptr_str1 (the first one): address=%d, content=%d\n", &ptr_str1, ptr_str1);
    printf("*ptr_str1 contains %c\n", *ptr_str1);
  //
  ptr_str1 = &str;
    printf("ptr_str1 (the second one): address=%d, content=%d\n", &ptr_str1, ptr_str1);
    printf("*ptr_str1 contains %c\n", *ptr_str1);

  return 0;
}
