#include <stdio.h>

int main(){
    int i;
    scanf("%d",&i);
    if(i%400==0 ){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}