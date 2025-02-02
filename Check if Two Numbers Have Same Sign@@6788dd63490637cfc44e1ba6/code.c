#include <stdio.h>
int main(){
    int i,j;
    scanf("%d %d",&i,&j);
    if((i>0 && j>0) || (i<0 && j<0)){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }

}