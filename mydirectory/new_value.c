/* Write a programme to append a new value into linear array of n integers.*/

#include<stdio.h>
 
int main()
{
    int n, i, newValue;
 

    // Input size of array from user
    
    printf("Enter size of array: ");
    scanf("%d", &n);
 
    int arr[n];
 
    
    // Input elements of array from user
    
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //  Input new value from user

    printf("Enter new value to append in array: ");
    scanf("%d", &newValue);
 
    
    //   Increase the size of array by one to accommodate the new element
    n = n + 1;
 
    
     //Append new value at end of array
    
    arr[n-1] = newValue;
 
    
     // Print updated array
    
    printf("\nUpdated array is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",  arr[i]);
    }
 
    return 0;
}