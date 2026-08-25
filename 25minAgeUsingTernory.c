#include <stdio.h>
#include <math.h>

int main()
{
  int first;
  int second;

  printf("Welcome to checking which number is min\n");
  printf("please entr your number first\n");
  scanf("%d", &first);
  printf("please entr your number second\n");
  scanf("%d", &second);

  int min = first < second ? first : second ;
  printf(" minimum number is --------%d",min);
  return 0;
}