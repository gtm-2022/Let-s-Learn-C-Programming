#include<stdio.h>
/* write a program having a variable i.
 print the address of i. pass this variable
to a function and print its address .
Are  these address same why? */
void printAdd(int a){
    printf("The address of variable a is %u\n",&a);
}
int main ()
{
int i=9;
printf("The value of variable a is %u\n",i);
printAdd(i);
printf("The address of variable i is %u\n",&i);

return 0;
}