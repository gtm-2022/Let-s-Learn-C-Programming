#include <stdio.h> 
#include<string.h> 
int main() { 
	char str[20],c; 
	int temp=0,i; 
	printf("\nEnter the string : "); 
	scanf("%s",str); 
	printf("\nEnter the char to find : "); 
	scanf(" %c",&c); 
	for(i=0;i<strlen(str)&&str[i]!=c;++i); 
	if(i<strlen(str)) 
		printf("\nCharecter found,pos : %d",i); 
	else 
		printf("\nCharecter not found"); 
	return 0; 
} 