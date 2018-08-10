#include <stdio.h>

/* passing a structure to a function */

struct  computer {float   cost;
                  int     year;
                  int     cpu_speed;
                  char    cpu_type[16];};

/* create synonym */
typedef   struct  computer SC;
/*function declaration */
SC  DataReceive(SC s)                  ;

int main(void)
{
  SC  model;

  model = DataReceive(model);
  printf("Here's what you entered:\n");
  printf("Year: %d\n", model.year);
  printf("Cost: $%6.2f\n", model.cost);
  printf("CPU type: %s\n", model.cpu_type);
  printf("CPU speed: %d MHz\n", model.cpu_speed);

  return 0;
}

/* 'DataReceive' definition */
SC  DataReceive(SC s)
{
  printf("What type of CPU is in your computer?\n");
    gets(s.cpu_type);
  printf("What is the speed(MHz) of your CPU?\n");
    scanf("%d", &s.cpu_speed);
  printf("In which year was your computer made?\n");
    scanf("%d", &s.year);
  printf("How much did you pay for your computer?\n");
    scanf("%f", &s.cost);

  return s;
}
