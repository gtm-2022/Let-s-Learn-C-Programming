#include<stdio.h>
int sum(int a,int b);
int main ()
{
    int a=5,b=8;
printf("The value of 5+8 is %d\n",sum(a,b));
printf("The value of a and b is %d and %d\n", a,b);
printf("The value of a and b after function call  is %d and %d\n", a,b);
return 0;
}
int sum(int a,int b){
    int c;
    c=a+b;
    a=54456;
    b=5346;
}