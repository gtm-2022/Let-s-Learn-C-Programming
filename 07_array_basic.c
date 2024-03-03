#include<stdio.h>
int main ()
{
 int marks[5]; // allocate space for 5 integers 
 printf("Enter the value of marks for student 1st\t" );
 scanf("%d", &marks[0]);
 printf("Enter the value of markd for student 2nd\t");
 scanf("%d",&marks[1]);
 printf("Enter the value of marks for student 3rd\t");
 scanf("%d",&marks[2]);
 printf("Enter the value of marks foe student 4th\t ");
 scanf("%d",&marks[3]);
 printf("Enter the value of marks for student 5th\t");
 scanf("%d",&marks[4]);
 printf("You have entered %d %d %d %d %d", marks[0],marks[2],marks[2],marks[3],marks[4]);
return 0;
}