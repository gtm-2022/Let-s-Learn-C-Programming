#include<stdio.h>
int main ()
{
int  i=44;
int gautam =476;
int*b=&gautam; // b will now store the address of gautam
int*j=&i;         //j will now store the address of i
int **k=&j;
printf("The value of i is %d\n",i);
printf("The value of i is %d\n",*j);
printf("The address of i is %d\n",&i);
printf("The address of i is %d\n",j);  
printf("The address  of j is %d\n",&j);  
printf("The value of j is %d\n",*(&j));  
printf("The value of gautam is %d\n",gautam);
printf("the value of i is %d\n",*b);
printf("The address of gautam is %d\n",b);
printf("The address of gautam is %d\n",&gautam); 
printf("The address of j id %d\n",k);                              
return 0;
}