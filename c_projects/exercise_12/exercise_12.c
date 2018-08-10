#include <stdio.h>
#include <string.h>

int main()
{
  /*
  Question 1:
  Given a character array in the following statement,
  'char   str1[] = "This is Exercise 12.";'
  write a program to copy the string from 'str1' to
  another array, called 'str2'.
  */
  char  str1[] = "This is Exercise 12.";
  char  str2[25];

  strcpy(str2, str1);
  printf("Which exercise is this? Ans: %s\n", str2);

  /*
  Question 2:
  Write a program to measure the length of a string by
  evaluating the elements in a character array one by
  one until you reach the null character. To prove you
  get the right result, you can use the 'strlen()'
  function in the same string again.
  */
  char  ch1[] = "C coding is fun!";
  int   i;
  int   length;

  /* the first part */
  length = 0;
  for (i = 0; ch1[i]; i++)
    length++;
  printf("The length of the character array read one at a time is %d-bytes.\n", length);
  printf("%s\n", ch1);
  /* to prove we are right */
  printf("The length of the character array read as a string is %d-bytes.\n", strlen(ch1));
  printf("%s\n", ch1);

  /*
  Question 3:
  Rewrite the program in Listing 13.4. This time, convert all
  uppercase characters to their lowercase counterparts.
  */
  char  chr[80];
  int   delt = 'A' - 'a';

  printf("Enter a string less than 80 characters:\n");
  gets( chr ); /* change this */
  i = 0;
  while (chr[i])
    {
      if ((chr[i] >= 'A') && (chr[i] <= 'Z'))
        chr[i] -= delt; /* convert to lowercase */
        i++;
    }
  printf("The entered string is (in lowercase):\n");
  puts( chr );

  /*
  Question 4:
  Write a program that uses the 'scanf()' function  to read in
  two integers entered by the user, adds the two integers, and
  then prints out the sum on the screen.
  */
  int   a, b;

  printf("Enter two digits digits(separate with a space):\n");
  scanf("%d %d", &a, &b);
  printf("Their sum is: %d.\n", a + b);

  return 0;
}
