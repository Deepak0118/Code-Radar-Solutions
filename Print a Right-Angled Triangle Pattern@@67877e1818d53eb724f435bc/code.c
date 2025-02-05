#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&i);
    for(k=1;k<=i;k++){
        for(j=1;j<=k;j++){
        if(j<=i){
            printf("*");
        }
        else{
            printf(" ");
        }
        }
        printf("\n");

    }
}