#include<stdio.h>
int sum(int a,int b);
//sum is a function which takes  a and b as input and return an integer as an output 
int main ()
{int C;
    
 C= sum(3,5); // function call
 printf("the value of c is %d\n",C);
return 0;
}
int sum(int a,int b){
    int result;
    result=a+b;
    return result;
}