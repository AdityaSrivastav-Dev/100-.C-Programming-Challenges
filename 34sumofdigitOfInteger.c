#include <stdio.h>

int main()
{
  int i=1 ,num,r,sum=0 ;
  
  printf("------ Welcome to calculatorr for All digit of Number ------ \n");
  printf("Please Your  number  \n");
  scanf("%d", &num);
  int copy = num;
  
   while (0<num)
   {
     r = num%10;
     num =num/10;
     sum = sum+r;

    //  sum += num%10;
    //  num /=num;
   }
   printf("total sum of all digits %d for number %d",sum,copy);
  
  


  return 0;
}