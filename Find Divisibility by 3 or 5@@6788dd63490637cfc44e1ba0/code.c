#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i%3==0 && i%5==0){
        printf("Divisible");
    }
    else if(i%3==0 && i%5!=0){
        printf("Divisible by 3");
    }
    else if(i%5==0 && i%3!=0){
        printf("Divisible by 5");
    }
}