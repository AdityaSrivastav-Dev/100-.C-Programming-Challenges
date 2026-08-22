#include <stdio.h>
int main()
{
  int a;
  float b;
  char c;
  double d;

  printf("The Size of your int is %lu \n", sizeof(a));
  printf("The Size of your float is %lu \n", sizeof(b));
  printf("The Size of your char is %lu \n", sizeof(c));
  printf("The Size of your double is %lu \n", sizeof(d));

  return 0;
}