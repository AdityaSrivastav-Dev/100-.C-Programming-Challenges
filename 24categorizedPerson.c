#include <stdio.h>
#include <math.h>

int main()
{
  int age;

  printf("Welcome  to category chacking dashboar system \n");
  printf("please entr your age\n");
  scanf("%d", &age);

  if(age>60 && age<=100){
    printf("senior ");
  }
  else if(age>20 && age<=60){
    printf("Adult ");
  }
  else if(age>13 && age<=20){
    printf("teen");
  }
  else if(age>0 && age<=13){
    printf("child");
  }
  else {
    printf(" invalid Age");

  }
  return 0;
}