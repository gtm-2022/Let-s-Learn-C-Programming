#include<stdio.h>
int main ()
{
    int age;
    printf("Enter the age of candidate :");
    scanf("%d",&age);
    if (age<=80 & age >=18)
    {
    printf("You can drive.");
    }
    else
    {
    printf("Sorry, You can not drive.\n");
    }
    return 0;
}