// Q. write a program using excursion to calculate  nth element of fibonacci series.
#include<stdio.h>

// Function Prototype 
int fib(int );

int main()
{
    int nth, term;

    printf("Enter the nth number of fibonacci series\n");
    scanf("%d", &nth);

    // Normal Function Call 
    term = fib(nth);

    printf("%dth term of Fibonacci series is %d\n", nth, term);

    return 0;
}

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        // Recursive function call 
        return fib(n-1)+fib(n-2);
    }
}