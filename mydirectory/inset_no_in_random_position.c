/* Write the programme to create a linear array with n integers. 
Insert new element called 'item' at the specified position. 
Take value of item= b,Postion=4 and n=10 . Do the dry run and perform all the necessary iteration*/
#include <stdio.h> 
#define MAX 10

int main() 
{ 
    int arr[MAX]; 
    int i, n, item, pos; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    printf("Enter %d elements: \n", n); 

    // Input elements in array 
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]); 
    printf("Enter the position to insert item: "); 
    scanf("%d", &pos); 
    printf("Enter the item to insert: "); 
    scanf("%d", &item); 

    // Dry Run
    printf("Array before insertion:\n"); 
    for (i = 0; i < n; i++) 
        printf("%-3d", arr[i]); 
    printf("\n"); 

    // Shift all elements one position ahead 
    for (i = n; i >= pos; i--) 
        arr[i] = arr[i - 1]; 

    // Insert item at given position 
    arr[pos - 1] = item; 

    // Dry Run
    printf("Array after insertion:\n"); 
    for (i = 0; i < n + 1; i++) 
        printf("%-3d", arr[i]); 

    return 0; 
} 