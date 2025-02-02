#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i==1){
        printf("Monday");
    }
    else if(i==2){
        printf("Tuesday");
    }
    else if(i==3){
        printf("Wednesday");
    }
    else if(i==4){
        printf("Thursday");
    }
    else if(i==5){
        printf("Friday");
    }
    else if(i==6){
        printf("Saturday");
    }
    else if(i==7){
        printf("Sunday");
    }
    else{
        printf("Invalid");
    }
}