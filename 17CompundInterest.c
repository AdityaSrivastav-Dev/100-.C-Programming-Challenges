#include <stdio.h>
#include <math.h>

int main()
{
float p;
float t;
float r;


printf("Please enter your Principal");
scanf("%f",&p);
printf("Please enter your time");
scanf("%f",&t);
printf("Please enter your rate");
scanf("%f",&r);

 
 float si;
 si = p*pow((1+r/100),t);

 printf("Simpele Interest Is ::: ------ %.2f",si);



 return 0;
}