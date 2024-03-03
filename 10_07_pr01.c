#include<stdio.h>
int main ()
{
    int a,b,c;
FILE *ptr;
ptr=fopen("Gautam.txt","r");
fscanf(ptr,"%d %d %d %d",&a,&b,&c);
printf("The values of a b c is %d %d %d",a,b,c);

return 0;
}