#include<stdio.h>
int main ()
{
FILE *ptr;
int num;
int num2;
ptr = fopen("Gautam.txt","r");
fscanf(ptr,"%d",&num);
fscanf(ptr,"%d",&num2);
printf("The value of num is %d",num);
printf("\nThe value of num2 is %d",num2);


fclose(ptr);
return 0;
}