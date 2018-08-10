#include <stdio.h>

/*
Question 3:
Write a program to ask the user to enter his or her name.
Then ask the user whether he or she is a U.S. citizen.
If the answer is 'Yes', ask the user to enter the name
of the state where he or she comes from. Otherwise, ask
the user to enter the name of the country he or she comes
from. (You're required to use a union in you program.)
*/

struct  survey {char  name[20];
                char  state;

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
        ptr->state = 'c';
    }
  else
    {
      printf("Enter your country of origin:\n");
        gets(ptr->nationality.non_american);
        ptr->state = 'd';
    }
    printf("Please enter your name:\n");
      gets(ptr->name);
}

/* 'DataDisplay' definition */
void  DataDisplay(struct  survey *ptr)
{
  printf("\nHere's what you entered:\n");
  printf("Name: %s\n", ptr->name);
  if (ptr->state == 'c')
    printf("Your citizenship is: %s\n", ptr->nationality.american);
  else (ptr->state == 'd')
    printf("Your country of origin is: %s\n", ptr->nationality.non_american);
  printf("\nThanks and Bye.\n", );
}
