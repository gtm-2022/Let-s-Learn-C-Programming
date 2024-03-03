#include <stdio.h>
int main()
{
    int i = 0, n = 3, fact = 1;
    for (i = 1; i <= 3; i++)
    {
        fact  *= i;
        printf("The value of factorial %d is %d\n", n, fact);
    }
    return 0;
}