/* Create a two dimensional vector using structures in C*/ 
#include<stdio.h>
struct vector {
    int x;
    int y;
};
int main ()
{
struct vector v1,v2;
v1.x=98;
v2.y=844;
printf("x dim is %d and y dim is %d\n",v2.x,v2.y);
return 0;
}