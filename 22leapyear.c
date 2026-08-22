#include <stdio.h>
#include <math.h>

int main()
{
  int year;

  printf("Welcome  to leap Year chacking calander\n");
  printf("please entr your year\n");

  scanf("%d", &year);
  /// logic first
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
  {
    printf("your are a leap year ");
  }
  else
  {
    printf("your are a not leap year ");
  }
  ///////logic second
  // if (year % 400 == 0)
  // {
  //   printf("%d is a leap year ", year);
  // }
  // else if (year % 100 == 0)
  // {
  //   printf("%d is a not leap year ", year);
  // }
  // else if (year % 4 == 0)
  // {
  //   printf("%d is a  leap year ", year);
  // }
  // else
  // {
  //   printf("%d is a not leap year ", year);
  // }

  return 0;
}