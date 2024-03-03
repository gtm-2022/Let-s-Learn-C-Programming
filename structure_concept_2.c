#include<stdio.h>
#include<string.h>
struct university{
    int roll;
    float marks;
    char name[50];
};
int main ()
{
struct university gs,sh,av;
printf("Enter the roll no. of gs ");
scanf("%d",&gs.roll);
printf("Enter the marks of gs ");
scanf("%f",&gs.marks);
printf("Enter the name of gs ");
scanf("%s",gs.name);
printf("Enter the roll no. of sh ");
scanf("%d",&sh.roll);
printf("Enter the marks of sh ");
scanf("%f",&sh.marks);
printf("Enter the name of sh ");
scanf("%s",sh.name);
printf("Enter the roll no. of av ");
scanf("%d",&av.roll);
printf("Enter the marks of av ");
scanf("%f",&av.marks);
printf("Enter the name of av ");
scanf("%s",av.name);
printf("details: %d %f %s %d %f %s %d %f %s",gs.roll,gs.marks,gs.name,sh.roll,sh.marks,sh.name,av.roll,av.marks,av.name);



return 0;
}