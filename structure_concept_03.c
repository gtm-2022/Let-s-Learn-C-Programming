#include<stdio.h>
#include<string.h>
struct university{
    int roll;
    float marks;
    char name[20];
};
int main ()
{
struct university college[10];
college[0].roll=11202725;
college[0].marks=8.32;
strcpy(college[0].name,"Gautam");
printf("%s",college[0].name);
college[1].roll=11202726;
college[1].marks=8.25;
strcpy(college[1].name,"Amit");
printf("\n%s",college[1].name);
college[2].roll=11202727;
college[2].marks=8.85;
strcpy(college[2].name,"Harsh");
return 0;
}