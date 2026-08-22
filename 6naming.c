#include <stdio.h>
int main()
{
  char fname[20];
  char lname[20];
  int age;

  printf("Please enter your First Name :");
  scanf("%s", fname);
  printf("Please enter your Last Name :");
  scanf("%s", lname);
  printf("Please enter your Age :");
  scanf("%d", &age);

  printf("Your Name is %s %s and age: %d", fname, lname, age);
  return 0;
}