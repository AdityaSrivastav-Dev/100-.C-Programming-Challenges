#include <stdio.h>

int main()
{
  int i=1 ,n,fact=1 ;
 

  printf("------ Welcome to calculatorr for factorial of any number ------ \n");
  printf("Please Your  number  \n");
  scanf("%d", &n);
int count =0;
  while (1<=n)
  {
    fact =fact*n;
     n--;
    count++;
  }
  printf(" total number %d factorial of an number is %d",count,fact);
  


  return 0;
}