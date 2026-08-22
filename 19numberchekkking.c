#include <stdio.h>
#include <math.h>

int main()
{
  int n;

  printf("Please Your number ");
  scanf("%d", &n);

  if (n > 0)
  {
    printf("The number is Positive ");
  }
  else if (n < 0)
  {
    printf("The number is negative ");
  }
  else
  {
    printf("The number is zero ");
  }
  return 0;
}