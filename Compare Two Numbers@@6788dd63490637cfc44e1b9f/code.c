#include <stdio.h>
int main(){
    int i,j;
    scanf("%d %d",&i,&j);
    if(i==j){
        printf("Equal");
    }
    else if(i>j){
        printf("First");
    }
    else{
        printf("Second");
    }
}