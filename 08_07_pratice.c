/* write a program to take string as an input from the user using %c and %s .
confirm that the string are equal. */
#include<stdio.h>
#include<string.h>
int main(){
    char st1[41];
    char st2[41];
    char c;
    int i =0;

    printf("Enter the value of fist string\n");
    scanf("%s",st1);
    printf("Enter the value of second string character by character\n");

    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        st2[i] = c;
        i++;
    }
    st2[i-1]='\0';
    printf("The value of st1 is %s\n",st1);
    printf("The value of st2 is %s\n",st2);
    printf("strcmp for these string returns %d",strcmp(st1,st2));
    return 0;

}



