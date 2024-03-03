#include<stdio.h>
// write a function to convert celsius temperatuer into fahrenheit.
int main ()
{
float celsius, fahrenheit;
printf("Enter celsius temperatuer\n");
scanf("%f",&celsius);
fahrenheit= (celsius*(9/5)+32);
printf("temperatuer in fahrenheit is %f",fahrenheit);
return 0;
}