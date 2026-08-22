#include <stdio.h>
int main()
{
  int side;
  printf("Please enter  your side in cms :");
  scanf("%d", &side);

  int area = side * side;
  printf("Your Area Is          %d     cms", area);

  return 0;
}