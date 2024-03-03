#include <stdio.h>
int main()

{
    int n,i;
    printf("***** Multiplication table of any given number ******\n");
   
    printf("enter the input number\n");
     scanf("%d",&n);

    for (int i = 1; i <= 10; i++)

    {
        

        printf("%d x %d = %d\n", n,i, n* i);
        
    }

    return 0;
}