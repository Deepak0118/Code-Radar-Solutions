#include <stdio.h>

int main(){
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);;
    if(i+j>k && j+k > i && k+i>j){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}