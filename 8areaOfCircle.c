#include <stdio.h>
int main()
{
  const float PI = 3.14159;
  int radious;
  float cir;
  printf("Please enter  your radious :");
  scanf("%d", &radious );

  cir = 2*PI*radious;
  printf("The Circumference of Your circle is --------%.2f", cir);


  return 0;
}