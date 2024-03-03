#include<stdio.h>
#include<string.h>
int main ()
{
char *str1 ="Gautam";
char str2[60];
strcpy(str2,str1);
printf("Now the str2 is %s",str2);


return 0;
}