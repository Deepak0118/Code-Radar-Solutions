#include <stdio.h>

int main(){
    int i;
    scanf("%d",&i);
    if(i<18){
        printf("Eligible");
    }
    else if(i>18){
        printf("Not Eligible");
    }
}