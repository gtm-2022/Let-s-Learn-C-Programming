
#include<stdio.h>
void decrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
     *ptr=*ptr-1;
     ptr++;


    }
}
int main ()
{
char c[]="Bmxbzt!sfnfncfs!zpv!bsf!cjhhfs!uibo!zpvs!qspcmfn";
decrypt(c);
printf("Decrypt string is : %s",c);
return 0;
}