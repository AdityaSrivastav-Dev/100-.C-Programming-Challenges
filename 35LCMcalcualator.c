#include <stdio.h>

int main()
{
  printf("welcome to LCM calculator\n");
  int first, second;
  printf("Please enter your first number");
  scanf("%d", &first);
  printf("Please enter your second number");
  scanf("%d", &second);

  int minLCM = first > second ? first : second;
  int maxLCM = first * second;
  int i;
  for (i = minLCM; i <= maxLCM; i++)
  {
    if (i % first == 0 && i % second == 0)
    {

      printf("number first  %d  and second is   %d LCM is %d", first, second, i);
      break;
    }

  }
  return 0;
}