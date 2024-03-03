#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
void show(struct employee emp){
    printf("\nThe code of employee is: %d",emp.code);
    printf("\nThe Salary of employee is: %f",emp.salary);
    printf("\nThe name of employee is: %s",emp.name);
}
int main ()
{
struct employee e1;
struct employee *ptr;
ptr=&e1;
(*ptr).code=102;//you can also write 
ptr->salary=33494.40;
strcpy(ptr->name,"Gautam");
printf("%d",e1.code);
show(e1);

return 0;
}