#include <stdio.h>
//  write a program using function to print the following pattern(first lines).
// *
// ***
// *****

void printpattern(int n);
int main()

{
    int n =10;
    printpattern(n);
    return 0;
}
void printpattern(int n)
{
    if (n==1)
    {
        printf("*\n");
        return;
    }
    
        printpattern(n - 1);
        for (int i = 0; i <(2*n - 1); i++)
        {
            printf("*");
        }
   printf("\n"); 
}
