#include <stdio.h>

int main()
{
  int i=1 ,n ,sum=0;
 

  printf("------ Welcome to calculatorr for Odd number ------ \n");
  printf("Please Your first number  \n");
  scanf("%d", &n);
int count =0;
  while (i<=n)
  {
    sum =sum+i;
    i=i+2;
    count++;
  }
  printf(" total number %dthe total sum of all oddd numbers %d",count,sum);
  


  return 0;
}