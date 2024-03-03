#include<stdio.h>
void f(int *p, int *q){
    p=q;
    *p=2;
}
int main ()
{
f(int &i, int &j);
printf("%d %d\n",i,j);
return 0;
}