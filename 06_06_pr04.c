#include<stdio.h>
void change(int *ptr){
(*ptr)*=10;
}

/* write a program to change the  value of variable 
to ten times of its current value.
write a function and pass the value by reference .*/

int main ()
{
int a;
printf("Enter the value of a \n");
scanf("%d",&a);
int*ptr=&a;
printf("The value of  a is = %d\n",a);
change(ptr);
printf("now the value of a is  %d",*ptr);
return 0;
}