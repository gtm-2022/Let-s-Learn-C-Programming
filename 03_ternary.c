#include<stdio.h>
int main()
{
    int a;
    printf("Enter a\n");
    scanf("%d",&a);
    // one liner
    (a < 10) ? printf("A is less than 10") : printf("A is not less than 10");
    return 0;
 }