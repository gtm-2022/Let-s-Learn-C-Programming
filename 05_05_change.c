#include<stdio.h>
void change(int a);
int main ()
{
int b=237;
printf("the value of b before change is %d\n",b);
change (b);
printf(" The value of b after change is %d\n",b);
return 0;
}
void change(int a){
    a=67;
}