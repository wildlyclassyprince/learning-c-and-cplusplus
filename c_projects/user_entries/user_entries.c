#include <stdio.h>

int main()
{
  /* READING */
  /* Reading input by calling getc() */
  int ch1, ch2, ch3;

  printf("Please type in two characters together:\n");

  /* using getc() to read input */
  ch1 = getc( stdin );
  /* using getchar() to read input */
  ch2 = getchar( );

  /* printing the user input */
  printf("The first character typed is: %c\n", ch1);
  printf("The second character typed is: %c\n", ch2);

  /*888888888888888888888888888888888888888888888888888888888*/

  /* WRITING */
  /*
  outputting a character with putc().
  putc() takes two arguments.
  */
  ch3 = 65;   /* the numeric value of character 'A' */
  printf("The character that has numeric value of 65 is:\n");
  putc(ch3, stdout);

  /* putchar() takes only one argument. */
  putchar(10);
    putchar(65);
      putchar(10);
        putchar(66);
          putchar(10);
        putchar(67);
      putchar(10);

  return 0;
}
