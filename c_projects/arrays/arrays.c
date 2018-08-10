#include <stdio.h>

int main()
{
  /* initializing an array */
  int   i;
  int   list_int[10];

  for (i = 0; i < 10; i++)
    {
      list_int[i] = i + 1;
      printf("list_int[%d] is initialized with %d.\n", i, list_int[i]);
    }

  /* total bytes of an array (size of an array) */
  int   total_byte;
  /* we will be using list_int[10] already defined */
  total_byte = sizeof(int) * 10;
  printf("'int' is %d-bytes long.\n", sizeof(int));
  printf("An array of 10 ints has a total of %d-bytes.\n", total_byte);
  printf("Address of first element: %p\n", &list_int[0]);
  printf("Address of the last element: %p\n", &list_int[9]);

  /* referencing an array with a pointer starts here */
  int   *ptr_int;
  /* still using i */
  /* still using list_int[10] */

  for(i = 0; i < 10; i++)
    list_int[i] = i + 1;
  ptr_int = list_int;
  printf("The start address of the array: %p\n", ptr_int);
  printf("The value of the first element: %d\n", *ptr_int);
    ptr_int = &list_int[0];
  printf("The address of the first element: %p\n", ptr_int);
  printf("The value of the first element: %d\n", *ptr_int);

  /* printing out an array of characters */
  char  array_ch[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
  /* still using i */

  for(i = 0; i < 7; i++)
    printf("array_ch[%d] contains: %c\n", i, array_ch[i]);

  /*----- method 1 -----*/
  printf("Put all elements together(Method 1):\n");
  for(i = 0; array_ch[i] != '\0' && i < 7; i++)
    printf("%c\n", array_ch[i]);

  /*----- method 2 -----*/
  printf("Put all elements together(Method 2):\n");
  printf("%s\n", array_ch);
  /* referencing an array with a pointer ends here */

  /* stopping at the null character */
  char  array_char[15] = {'C', ' ',
                          'i', 's', ' ',
                          'p', 'o', 'w', 'e', 'r',
                          'f', 'u', 'l', '!', '\0'};
  int   k;
  /* array_char[i] in logical test */
  for(k = 0; array_char[k]; k++)
    printf("%c\n", array_char[k]);
    printf("%s\n", array_char);

  printf("\n");

  /* printing out a 2-D array */
  int   two_dim[3][5] = {1, 2, 3, 4, 5,
                         10, 20, 30, 40, 50,
                         100, 200, 300, 400, 500};
  int   l, m;

  for(l = 0; l < 3; l++)
  {
    printf("\n");
    for(m = 0; m < 5; m++)
      printf("%6d", two_dim[l][m]);
  }
  printf("\n");

  /* initializing unsized arrays */
  char   array1[] = {'C', ' ',
                     'i', 's', ' ',
                     'p', 'o', 'w', 'e', 'r',
                     'f', 'u', 'l', '!', '\0'};

  int integers[][3] = {1, 1, 1,
                       2, 2, 8,
                       3, 9, 27,
                       4, 16, 64,
                       5, 25, 125,
                       6, 36, 216,
                       7, 49, 343};
  printf("The size of array1[] is %d-bytes.\n", sizeof(array1));
  printf("The size of integers[][3] is %d-bytes.\n", sizeof(integers));

  return 0;
}
