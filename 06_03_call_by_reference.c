#include<stdio.h>
void  swap(int *a, int  *b);
int main ()
{
int x=5, y=9;
printf("The value of x and y before swap is %d ans %d\n", x,y);
swap(&x, &y);
printf("The value of x and y after swap is %d and %d\n",x,y);

return 0;
}
void swap (int *a, int *b ) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}