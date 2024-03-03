#include<stdio.h>
// writre a program to print the address of a variable. use this address to get  the value of this variable.
int main ()
{
int a=100;
int *ptr;
ptr=&a;
printf("The value of variable a is %d\n",a);
printf("The address of variable   a is %u\n", &a);
printf("The  value  of variable a is %d\n",*ptr);
return 0;
}