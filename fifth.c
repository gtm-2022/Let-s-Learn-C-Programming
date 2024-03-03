#include<stdio.h>
int main()
 {
 int a,b,add,subtract,multiply, divide;
 printf("Enter two integers\n");
 scanf("%d %d", &a, &b);
 add=a+b;
 subtract=a-b;
 multiply=a*b;
   divide  = a/(float)b;
 printf("sum=%d\n", add);
 printf("difference=%d\n", subtract);
 printf("multiplication=%d\n", multiply);
 printf("division=%2f\n", divide);
 return 0;
  }