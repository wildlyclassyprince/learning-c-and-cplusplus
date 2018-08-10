#include <stdio.h>
#include <string.h>

/*
Question 1:
Rewrite the program in Listing 20.1 by switching the order
between the statement in line 15 and the statement in line
17. What do you get after running the rewritten program?
Why?
*/

int main(void)
{
  union   menu {char    name[23];
                double  price;} dish;

  printf("The content assigned to the union separately:\n");
  /* reference name */
  strcpy(dish.name, "Sweet and Sour Chicken");
  dish.price = 9.95;
  printf("Dish Name: %s\n", dish.name);
  printf("Dish Price: %d\n", dish.price);

  return 0;
}
