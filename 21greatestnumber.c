#include <stdio.h>
#include <math.h>

int main()
{
  int a;
  int b;
  int c;
printf("check the number of three which is greatest\n");
  printf("Please Your number a\n ");
  scanf("%d", &a);
  printf("Please Your number b \n");
  scanf("%d", &b);
  printf("Please Your number c\n ");
  scanf("%d", &c);

  if (a>b && a>c)
  {
    printf("The number is a graetest \n");
  }else if(b>a && b>c){
    printf("The number is b graetest\n ");
  }
  
  else
  {
    printf("The number is c is greatest\n ");
  }
  return 0;
}