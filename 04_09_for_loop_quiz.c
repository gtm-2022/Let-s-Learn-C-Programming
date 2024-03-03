#include<stdio.h>
int main ()
{
// write a program to print n natural number in reverse order.
int n;
printf("enter the value of n");
scanf("%d", &n);

    for( int i=n;i;i--){
    printf("the value of i is %d\n",i);
}
return 0;
}