#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you,char comp){
    if(you==comp){
        return 0;
    }
 if (you=='s' && comp=='w'){
    return 1;

}
else if(you=='w' && comp =='s'){
    return -1;
}
if(you=='s' && comp=='g'){
    return -1;
}
else if(you=='g' && comp=='s'){
    return 1;
}

if(you=='g' && comp=='w'){
    return -1;
}
else if(you=='w' && comp=='g'){
    return 1;
}
}
int main (){

    char you,comp;
    comp='s';
    printf("Enter 's' for snake ,'w' for water and 'g' for gun:\t");

    scanf("%c",&you);
    int result = snakeWaterGun(you,comp);
    printf("You chose %c and computer chose %c.\n",you,comp);
    if(result==0){
    printf("Game draw\n");
}
    else if (result==1){
    printf("You win\n");
}
    else {
    printf("you loss\n");
}
    return 0;
}