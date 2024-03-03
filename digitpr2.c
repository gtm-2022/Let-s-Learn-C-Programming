//WAP to find the sum of three digit number.
#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("Enter the three digit number\t");
    scanf("%d",&a); //a=374
    c=a%10; //c=4
    a=a/10; //a=37
    b=a%10; //b=7
    a=a/10;
     sum=a+b+c;
printf("The sum of three digit number is %d",sum);

    
    

    
}