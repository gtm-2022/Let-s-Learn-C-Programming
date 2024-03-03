#include <stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
int main()
{
   
    int n, i, j, temp;
    int arr[64];
 
    printf("Enter number of elements\n");
    scanf("%d", &n);
    
 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 start=clock();
    for (i = 1 ; i <= n - 1; i++)
    {

        
	    j = i;


            while ( j > 0 && arr[j-1] > arr[j])
            
            {	        
                temp     = arr[j];
            
                
                arr[j]   = arr[j-1];
            

                arr[j-1] = temp;
        

                j--;
        
            }
          
    
    }
    

    printf("Sorted list of element:\n");
    for (i = 0; i <= n - 1; i++)
    {

        printf("%d\n", arr[i]);

    }
    
    end=clock();
      cpu_time_used=((double) (end-start))/CLOCKS_PER_SEC;
    printf("fun() took %f seconds to execute\n",cpu_time_used);
    return 0;
}