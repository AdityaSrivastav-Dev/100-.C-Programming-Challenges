#include <stdio.h>
#include <math.h>

int main()
{
  int marks;

  printf("Please Your Marks ");
  scanf("%d", &marks);
  marks > 80 ? printf("high"):(marks>=50 ?printf("Medium"):printf("low"));
  return 0;
}