#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{

     goodMorning();
    
    return 0;
}
void goodMorning()
{

    printf("Good Morning, Gautam\n");
     goodAfternoon();
     
}
void goodAfternoon()
{
    printf("Good afternoon, Gautam\n");
    goodNight();
}
void goodNight()
{
    printf("Good Night, Gautam\n");
}
