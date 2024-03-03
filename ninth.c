#include<stdio.h>
int main ()
{
    int n,i,f;
    f=i=1;
    printf("Enter a number to find factorial :");
    scanf("%d", &n);
    while (i<=n)
{
    f=f*i;
   i++;
}
printf("the factorial of %d is : %d", n,f);
return 0;
}