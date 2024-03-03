#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[20];
}emp;
int main ()
{
emp e1;
emp *ptr;
ptr=&e1;
(*ptr).code=102;//you can also write 
ptr->salary=33494.40;
strcpy(ptr->name,"Gautam");
printf(" Employee name is: %s",e1.name);


return 0;
}