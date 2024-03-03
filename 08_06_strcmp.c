#include<stdio.h>
#include<string.h>

int main(){
    char st1[40] ="Gautam";
    char *st2 = "Gaurav";
    int val = strcmp(st1,st2);
    printf("Now the val is %d",val);
    return 0;
}
