#include<stdio.h>
int main ()
{
char str[]={'G','A','U','T','A','M','\0'};
// char str[]="Gautam";
char *ptr = str;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;

}
// printf("%s",str);
return 0;
}