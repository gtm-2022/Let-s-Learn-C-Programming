// write a function to calculate force of attraction on a body of mass m exerted by earth.
#include<stdio.h>
float force(float mass);
int main ()

{
    float m;
    printf("enter the value of mass  in kgs\n");
    scanf("%f",&m);
    printf("The value of force in Newton is %.4f\n", force(m));

return 0;
}
float force(float mass){
    float result= mass*9.8;
    return result;
}