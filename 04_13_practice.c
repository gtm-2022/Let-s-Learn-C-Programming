#include<stdio.h>
int main ()
{
int n=4,prime=1;
for(int i=2;i<n; i++){
if(n%i==0) {
    prime =0;
    break;

}
}
if(prime==0)
{
    printf("This  is not a prime number");
}
else{
printf("this is a prime number");
}

return 0;
}