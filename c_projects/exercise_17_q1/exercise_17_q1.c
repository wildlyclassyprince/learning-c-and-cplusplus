#include <stdio.h>

/*
Question 1:
Write a program to print out the values representd by the
enumerated names declared in Quiz question 2 in this hour.
*/

int main()
{
  enum  tag {name1, name2 = 10, name3, name4};
  printf("name1: %d\nname2: %d\nname3: %d\nname4: %d\n",
          name1, name2, name3, name4);

  return 0;
}
