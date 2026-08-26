#include <stdio.h>

int main()
{
  int i=1 ,n ;
 

  printf("------ Welcome Table calculater for any number ------ \n");
  printf("Please Your first number  \n");
  scanf("%d", &n);

  while (i<=10)
  {
    printf("%d x %d result :- %d \n ",n,i,n*i);
    i++;
  }
  


  return 0;
}