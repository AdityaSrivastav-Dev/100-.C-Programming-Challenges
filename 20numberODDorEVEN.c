#include <stdio.h>
#include <math.h>

int main()
{
  int n;

  printf("Please Your number ");
  scanf("%d", &n);

  if (n%2== 0)
  {
    printf("The number is EVEN ");
  }
  
  else
  {
    printf("The number is ODD ");
  }
  return 0;
}