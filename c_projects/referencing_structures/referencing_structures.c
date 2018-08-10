#include <stdio.h>

/* referencing the members of a structure */

int main(void)
{
  struct  computer {float   cost;
                    int     year;
                    int     cpu_speed;
                    char    cpu_type[16];}model;

  printf("What type of the CPU is in your computer?\n");
    gets(model.cpu_type);
  printf("What is the speed(MHz) of the CPU?\n");
    scanf("%d", &model.cpu_speed);
  printf("In which year was your computer made?\n");
    scanf("%d", &model.year);
  printf("How much did you pay for your computer?\n");
    scanf("%f", &model.cost);

  printf("This is what you entered:\n");
  printf("Year: %d\n", model.year);
  printf("Cost: $%6.2f\n", model.cost);
  printf("CPU type: %s\n", model.cpu_type);
  printf("CPU speed: %d MHz\n", model.cpu_speed);

  return 0;
}
