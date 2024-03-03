#include<stdio.h>
#include<math.h>
int main ()
{
int a,n, sum=0,r;
printf("Enter a number\t");
scanf("%d",&n);
a=n;
while(a!=0){
    r=a%10;
    sum=sum +(r*r*r);
    a=a/10;
}

if(sum==n)
    printf(" %d  is an armstrong number.",n);

else
    printf(" %d  is not  an Armstrong number.",n);



return 0;
}
