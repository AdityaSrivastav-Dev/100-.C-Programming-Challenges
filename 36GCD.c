#include <stdio.h>

int main()
{
  printf("welcome to GCD calculator\n");
  int first, second,GCD;
  printf("Please enter your first number");
  scanf("%d", &first);
  printf("Please enter your second number");
  scanf("%d", &second);

  int min = first > second ? first : second;
  int i;
  for (i = min; i >=1; i--)
  {
    if (first % i == 0 &&  second %i == 0)
    {
       
      printf("number first  %d  and second is   %d GCD is %d", first, second, i);
      break;
    }

  }
  return 0;
}