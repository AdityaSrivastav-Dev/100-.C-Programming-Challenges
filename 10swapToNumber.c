#include <stdio.h>
int main()
{
 int a;
 int b;
 int temp;


 printf("Please enter the first number----- ");
 scanf("%d",&a);
 printf("Please enter the second number---- ");
 scanf("%d",&b);

printf("befor swaping number is--- %d and--- %d\n\n",a,b);
//swaping 

temp = a;
a=b;
b=temp;
printf("After swaping number is--- %d and--- %d",a,b);


 
  return 0;
}