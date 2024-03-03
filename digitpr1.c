//WAP to find the reverse of two digit number
#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("Enter the two digit number\t");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
   c=c*10;
    sum=b+c;
    printf("The reverse of two digit number is %d",sum);


}