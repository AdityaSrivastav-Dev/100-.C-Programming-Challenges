#include <stdio.h>
#include <math.h>

int main()
{
  float f;

  printf("Welcome to Fohrenheit to celsius ");
  printf("Please enter your  data in fohrenheit ");
  scanf("%f", &f);

  float c;
  c = (f - 32) * 5 / 9;

  printf("Data in celsius ::: ------ %.2f", c);

  return 0;
}