#include <stdio.h>

/*
Question 4:
Modify the program you wrote in Question 3.
Add a bit field and use it as a flag. if the
user is a U.S. citizen, set the bit field to
1. Otherwise, set the bit field to 0. Print
out the user's name and the name of the
country or state by checking the value of the
bit field.
*/

struct  bit_field {int  american: 1;
                   int  non_american: 1;};

struct  survey {char    name[20];
                char    state;
                struct  bit_field c_d;

                union {char   american[16];
                       char   non_american[16];
                     } nationality;
                };

void  DataEnter(struct   survey *s);
void  DataDisplay(struct  survey *s);

int main(void)
{
  struct  survey citizen;

  DataEnter(&citizen);
  DataDisplay(&citizen);

  return 0;
}


/* 'DataEnter' definition */
void  DataEnter(struct  survey *ptr)
{
  char  is_yes[4];

  printf("Are you an American citizen? (Yes or No)\n");
    gets(is_yes);
  if ((is_yes[0] == 'Yes') || (is_yes[0] == 'yes')
      ||
      (is_yes[0] == 'Y') || (is_yes[0] == 'y'))
    {
      printf("Enter the state you currently live in:\n");
        gets(ptr->nationality.american);
        ptr->c_d.american = 1;
        ptr->c_d.non_american = 0;
    }
  else
    {
      printf("Enter your country of origin:\n");
        gets(ptr->nationality.non_american);
        ptr->c_d.american = 0;
        ptr->c_d.non_american = 1;
    }
    printf("Please enter your name:\n");
      gets(ptr->name);
}

/* 'DataDisplay' definition */
void  DataDisplay(struct  survey *ptr)
{
  printf("\nHere's what you entered:\n");
  printf("Name: %s\n", ptr->name);
  if (ptr->c_d.american)
    printf("Your citizenship is: %s\n", ptr->nationality.american);
  else (ptr->c_d.non_american)
    printf("Your country of origin is: %s\n", ptr->nationality.non_american);
  printf("\nThanks and Bye.\n", );
}
