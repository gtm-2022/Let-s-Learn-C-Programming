#include<stdio.h>
int main ()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int sum, loop;
    sum=0;
    for(loop=0; loop<10; loop++){
        sum=sum+array[loop];
    }
    printf("sum of array is %d.",sum);
    return 0;
}