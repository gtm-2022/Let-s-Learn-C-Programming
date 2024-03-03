#include<stdio.h>
#include<string.h>
struct mmec {
    int roll;
    float marks;
    char *name;
};
int main ()
{
struct mmec gs ={11202725,9.25,"Gautam"};
printf("Your roll no is: %d",gs.roll);
struct mmec av ={11202730,9.02,"Aviral"};
printf("\nYour name is %s",av.name);
struct mmec aa ={0};
printf("\nYour roll no. is %d ",aa.roll);
printf("\nYour marks is %.2f ",aa.marks);
printf("\nYour name is %s ",aa.name);
return 0;
}