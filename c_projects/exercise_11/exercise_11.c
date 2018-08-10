#include <stdio.h>

int main()
{
  /*
  Question 1:
  Given this character array:
  char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
  write a program to display each element of the array
  on the screen.
  */
  char  array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
  int   i;

  for(i = 0; array_ch[i]; i++)
    printf("%c\n", array_ch[i]);

  /*
  Question 2:
  Rewrite the program in Qn 1, but this time use a
  'for' loop to initialize the character array with 'a',
  'b', 'c', 'd', and 'e', and then print out the value of
  each element in the array.
  */
  char  array1[5] = {'a', 'b', 'c', 'd', 'e'};
  for (i = 0; i < 5; i++)
    printf("array1[%c] is initialized with %c.\n", array1[i], array_ch[i]);

  /*
  Question 3:
  Given this two-dimensional unsized array:
  char  list_ch[][2] = {
                        '1', 'a',
                        '2', 'b',
                        '3', 'c',
                        '4', 'd',
                        '5', 'e',
                        '6', 'f'};
  write a program to measure the total bytes taken by the array,
  and then print out all elements of the array.
  */
  char  list_ch[][2] = {
                        '1', 'a',
                        '2', 'b',
                        '3', 'c',
                        '4', 'd',
                        '5', 'e',
                        '6', 'f'};
  int   j, total_bytes;
  total_bytes = sizeof(list_ch);
  printf("list_ch[][2] takes %d-bytes.\n", total_bytes);
  for (i = 0; i < 6; i++)
  {
    printf("\n");
    for (j = 0; j < 2; j++)
      printf("%c", list_ch[i][j]);
  }
  printf("\n");

  /*
  Question 4:
  Rewrite the program in Listing 12.5. This time put a string of
  characters, 'I like C!', on the screen.
  */
  char  like[10] = {'I', ' ',
                   'l', 'i', 'k', 'e', ' ',
                   'C', '!', '\0'};
  /* like[i] in logical test */
  for (i = 0; like[i]; i++)
    printf("%c\n", like[i]);
    printf("%s\n", like);

  /*
  Question 5:
  Given the following array:
  double list_data[6] = {
                         1.12345,
                         2.12345,
                         3.12345,
                         4.12345,
                         5.12345};
  use the two equivalent ways taught in this lesson to measure the
  total memory space taken by the array, and then display the results
  on the screen.
  */
  double list_data[6] = {
                         1.12345,
                         2.12345,
                         3.12345,
                         4.12345,
                         5.12345};
  int total_space;
  /* ---- method 1 ---- */
  total_space = sizeof(double) * 6;
  printf("The total space taken by type double is %d-bytes.\n", sizeof(double));
  printf("The total space taken by list_data is %d\n", total_space);

  /* ---- method 2 ---- */
  printf("The total space taken by list_data is %d\n", sizeof(list_data));

  return 0;

}
