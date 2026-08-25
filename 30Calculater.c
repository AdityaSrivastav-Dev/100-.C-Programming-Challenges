#include <stdio.h>

int main()
{
  int num1 , num2 ;
  char opp;

  printf("------ Welcome to Month calculatetor ------ \n");
  printf("Please Your first number  ");
  scanf("%d", &num1);
  printf("Please Your second number  ");
  scanf("%d", &num2);
  
  printf("Please Enter Your Operator  +,-,*,/ ");
  scanf(" %c",&opp);

int res;
switch(opp){
  case '+':res = num1+num2;
  break;
   case '-':res = num1-num2;
  break;
  case '*':res = num1*num2;
  break;
   case '/':res = num1/num2;
  break;
 
  default: printf("invalid operator enter please enter  - + / *");
  break;

}

printf("%d result  ", res );

  return 0;
}