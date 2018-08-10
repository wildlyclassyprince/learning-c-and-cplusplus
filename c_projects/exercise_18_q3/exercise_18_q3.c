#include <stdio.h>

/*
Question 3:
Rewrite the program in Listing 19.4.
This time, use the arrow operator (->) with the pointers to structures.
*/

/* passing a structure to a function */

struct  computer {float   cost;
                  int     year;
                  int     cpu_speed;
                  char    cpu_type[16];};

/* create synonym */
typedef   struct  computer SC;
/*function declaration */
void  DataReceive(SC *ptr_s);

int main(void)
{
  SC  model;

  DataReceive(&model);
  printf("Here's what you entered:\n");
  printf("Year: %d\n", model.year);
  printf("Cost: $%6.2f\n", model.cost);
  printf("CPU type: %s\n", model.cpu_type);
  printf("CPU speed: %d MHz\n", model.cpu_speed);

  return 0;
}

/* 'DataReceive' definition */
void  DataReceive(SC *ptr_s)
{
  printf("What type of CPU is in your computer?\n");
    gets(ptr_s->cpu_type);
  printf("What is the speed(MHz) of your CPU?\n");
    scanf("%d", &ptr_s->cpu_speed);
  printf("In which year was your computer made?\n");
    scanf("%d", &ptr_s->year);
  printf("How much did you pay for your computer?\n");
    scanf("%f", &ptr_s->cost);
}
