#include<stdio.h>
void printArray (int *ptr, int n){
    for(int i=0;i<n; i++){
        printf("The value of element %d is %d\n",i+1, *(ptr+i));
    }
}
int main ()
{
int arr[]={2,34,534,654};
printArray(arr,4);
return 0;
}