#include <stdio.h>
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
 si =(p*t*r)/100;

 printf("Simpele Interest Is ::: ------ %.2f",si);



 return 0;
}