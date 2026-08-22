#include <stdio.h>
int main()
{
  const int PI = 3.14159;
  int radious;
  float cir;
  printf("Please enter  your radious :");
  scanf("%d", &radious );

  cir = PI*radious*radious;
  printf("The area of Your circle is --------%.2f cm", cir);


  return 0;
}