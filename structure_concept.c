#include<stdio.h>
#include<string.h>
struct employee {
    int code;
    float salary;
    char name[20]; 
};

int main (){
struct employee e1;
    e1.code=100;
    e1.salary=48595.409;
    strcpy(e1.name,"Gautam\t");
    printf("Name:\t %s\t",e1.name);
    printf("Code:\t %d\t",e1.code);
    printf("Salary:\t %.2f",e1.salary);

    
    





return 0;
}