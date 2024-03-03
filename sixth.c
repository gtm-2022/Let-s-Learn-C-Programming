#include<stdio.h>
int main ()
{
    double num;
    printf("Enter a number");
    scanf("%f", &num);
    if (num > 0.0)
    printf("you entered a positive  number.");
    else if (num < 0.0)
    printf("you entered a negative  number.");
    else 
 printf("you entered 0.");
    return 0;


}