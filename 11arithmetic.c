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
//Add 
printf("%d + %d result %d \n",a,b,(a+b));
//Subtraction  
printf("%d - %d result %d \n",a,b,(a-b));
//Multiplication 
printf("%d * %d result %d \n",a,b,(a*b));
//Division 
printf("%d / %d result %d \n",a,b,(a/b));


 
  return 0;
}