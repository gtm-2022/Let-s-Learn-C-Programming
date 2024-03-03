#include<stdio.h>
int main ()
{
    int i, arr[50], sum, num;
    printf("\n enter no. of elements ;");
    scanf("%d", &num);
    printf("\n Enter the values :");
    for (i=0; i<num; i++)
scanf("%d", &arr[i]);
sum =0;
for (i=0; i<num; i++)
sum=sum+arr[i];
for (i=0; i<num; i++)
printf("\n na[%d]=%d",i, arr [i]);
printf("\nsum = %d", sum);
return 0;
}