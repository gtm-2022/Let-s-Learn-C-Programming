#include <stdio.h>
int main()
{
    int i = 349;
    int *ptr;
    ptr = &i;
    int **ptr_ptr;
    ptr_ptr = &ptr;
    printf("The value of i is %d", **ptr_ptr);
    return 0;
}