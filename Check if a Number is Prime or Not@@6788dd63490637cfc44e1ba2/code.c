#include <stdio.h>
int main(){
    int i,j;
    scanf("%d",&i);
    if (i==1){
        printf("Not Prime");
    }
    else if(i==2){
        printf("Prime");
    }
    else{
        for(j=3;j<i;j++){
            if(i%j==0){
                printf("Not Prime");
                break;
            }
            else{
                printf("Prime");
            }
        } 
    }
}