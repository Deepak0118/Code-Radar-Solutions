#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i>=1 && i<=100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
}