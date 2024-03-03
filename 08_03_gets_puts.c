#include<stdio.h>
#include<string.h>

int main ()
{
// char s[34];
// printf("Enter your name:\t ");
// gets(s);
// // printf("Your name is %s",s);
// puts(s);
char *str = "Ananya";
int a = strlen(str);
printf("The length of string str is %d",a);
return 0;
}