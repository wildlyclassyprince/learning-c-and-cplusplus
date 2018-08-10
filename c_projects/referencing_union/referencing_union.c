#include <stdio.h>
#include <string.h>

/* referencing a union */

int main(void)
{
  union menu {char  name[23]; double  price;} dish;

  printf("The content assigned to the union separately:\n");
  /* reference name */
  strcpy(dish.name, "Sweet and Sour Chicken");
  printf("Dish Name: %s\n", dish.name);
  /* reference price */
  dish.price = 9.95;
  printf("Dish Price: %5.2f\n", dish.price);

  return 0;
}
