#include <stdio.h>
int main(){
    int i,j;
    scanf("%d %d",&i,&j);
    if(i>=18 && j==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}