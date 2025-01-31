#include <stdio.h>

int main(){
    int i;
    scanf("%d",&i);
    if(i%5==0){
        printf("Divisible");
    }
    else if(i%11==0){
        printf("Not Divisible");
    }
}