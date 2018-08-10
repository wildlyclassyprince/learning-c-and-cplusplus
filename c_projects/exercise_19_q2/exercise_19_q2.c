#include <stdio.h>

/*
Question 2:
Rewrite the program in Listing 20.2.
This time, print out values held by all the members
in the 'info' union each time one of the members is
assigned a value.
*/

int main(void)
{
  union   employee {int   start_year;
                    int   dpt_code;
                    int   id_number;} info;

  /* initialize 'start_year' */
  info.start_year = 1997;
  printf("Start Year: %d\n", info.state_year);
  /* initialize 'dpt_code' */
  info.dpt_code = 8;
  printf("Dpt. Code:  %d\n", info.dpt_code);
  /* initialize 'id_number' */
  info.id_number = 1234;
  printf("ID Number:  %d\n", info.id_number);

  return 0;
}
