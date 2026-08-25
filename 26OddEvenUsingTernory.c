#include <stdio.h>
#include <math.h>

int main()
{
  int n;

  printf("Please Your number ");
  scanf("%d", &n);

  int Number = n % 2 == 0 ? printf("even") : printf("odd");
  return 0;
}