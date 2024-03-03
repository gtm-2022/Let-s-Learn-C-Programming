//WAP to find the reverse of three digit number
#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("Enter the three digit number\t");
    scanf("%d",&a);
    c=a%10;
    c=c*100;
    a=a/10;
    b=a%10;
    b=b*10;
    a=a/10;
    sum=a+b+c;
    printf("Reverse of three digit number is %d",sum);
}