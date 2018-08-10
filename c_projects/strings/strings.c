#include <stdio.h>
#include <string.h>

int main()
{
  /* initializing strings */
  char  str1[] = {'A', ' ',
                  's', 't', 'r', 'i', 'n', 'g', ' ',
                  'c', 'o', 'n', 's', 't', 'a', 'n', 't', '\0'};
  char  str2[] = "Another string constant";
  char  *ptr_str;
  int   i;

  /* print out str1 */
  for (i = 0; str1[i]; i++)
    printf("%c\n", str1[i]);
  printf("\n");

  /* print out str2 */
  for (i = 0; str2[i]; i++)
    printf("%c\n", str2[i]);
  printf("\n");

  /* assign a string to a pointer */
  ptr_str = "Assign a string to a pointer.";
  for (i = 0; *ptr_str; i++)
    printf("%c\n", *ptr_str++); /* *ptr_str++ is pointer arithmetic */


  /* measuring string length */
  /* make sure header file <string.h> is included before using 'strlen()' */
  char  *ptr_strings = "Assign a string to a pointer.";

  printf("The length of str1 is %d-bytes.\n", strlen(str1));
  printf("The length of str2 is %d-bytes.\n", strlen(str2));
  printf("The length of the string assigned to ptr_str is %d-bytes.\n", strlen(ptr_strings));

  /* copying strings */
  /* make sure the <string.h> header file is included before using 'strcpy()' */
  char  string1[] = "Copy a string.";
  char  string2[15];
  char  string3[15];

  /* with strcpy() */
  /*
  'strcpy()' is almost always dangerous to use  because is does not always
  ensure that the target buffer is NUL-terminated.
  Reference with the Fedora Defensive Coding Guide.
  */
  strcpy(string2, string1);

  /* without strcpy() */
  for (i = 0; string1[i]; i++)
    string3[i] = string1[i];
  string3[i] = '\0';

  /* display string2 and string3 */
  printf("The content of string2 using strcpy: %s\n", string2);
  printf("The content of string3 without using strcpy: %s\n", string3);

  /* using 'gets()' and 'puts()' */
  /* 'gets()' has been replaced by 'fgets()' */
  /* 'gets()' is almost always dangerous to use */
  char  str[80];
  int   delt = 'a' - 'A';

  printf("Enter a string less than 80 characters:\n");
  fgets( str ); /* how is this used? */
  i = 0;
  while (str[i])
  {
      if ((str[i] >= 'a') && (str[i] <= 'z'))
        str[i] -= delt ; /* convert to upper case */
      ++i;
  }
  printf("The entered string is (in uppercase):\n");
  puts( str );

  /* using 'scanf()' */
  /*
  'scanf()' is to be avoided. Like 'gets()', it
  also may allow memory overflow if not explicitly
  defined.
  */
  int   x, y;
  float z;

  printf("Enter two integers separated by a space:\n");
  scanf("%d %d", &x, &y);
  printf("Enter a floating-point number:\n");
  scanf("%f", &z);
  printf("Enter a string:\n");
  scanf("%s", str);
  printf("Here are what you've entered:\n");
  printf("%d %d\n%f\n%s\n", x, y, z, str);

  return 0;
}
