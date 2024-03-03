#include<stdio.h>
int main ()
{
int marks[3];
int  *ptr;
ptr=&marks[0];
for(int i=0;i<3;i++){
printf("Enter the value of %dth student\n", i+1);
scanf("%d",ptr);
ptr++;
 }
 for(int i=0;i<3;i++){
printf(" The value of marks for student %dth is %d\n", i+1, marks[i]);

 }
return 0;
}