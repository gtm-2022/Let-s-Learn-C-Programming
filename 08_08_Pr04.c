/*Write a function sclice() to slice a String . It should change the original String such that it is now the sliced String.
 Take m and n as the start and ending position for slice */
#include<stdio.h>
void slice(char *st, int m, int n){
    int i=0;
    while((m+i)<n){
        st[i]=st[i+m];
        i++;
    }
st[i]='\0';
    }
    
    int main(){
        char st[]="Gautam";
        slice(st,0,6);
        printf("%s",st);
        return 0;
    }