#include <stdio.h>
#include <math.h>

int main()
{
  int marks;

  printf("Welcome  to grade   chacking dahboar system \n");
  printf("please entr your marks\n");
  scanf("%d", &marks);

  if(marks>90 && marks<100){
    printf("Grade A");
  }
  else if(marks>75 && marks<90){
    printf("Grade B");
  }
  else if(marks>60 && marks<75){
    printf("Grade C");
  }
  else if(marks>30 && marks<60){
    printf("Grade D");
  }
  else {
    printf(" Fail");

  }
  return 0;
}