#include <stdio.h>
int main()
{
  int number;
  printf("Please penter your number ");
  scanf("%d",&number);


  float fnumber = number;


  printf("\noriginal number is %d",number);
  printf("\nfloating number is %.3f",fnumber);
  printf("\nfloating number is %.4f",(float)number);
 
  return 0;
}