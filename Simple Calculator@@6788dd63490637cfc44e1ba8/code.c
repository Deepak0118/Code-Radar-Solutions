#include <stdio.h>
int main(){
    int i,j;
    char k;
    scanf("%d %d %c",&i,&j,&k);
    if(k=='+'){
        printf("%d",i+j);
    }
    else if(k=='-'){
        printf("%d",i-j);
    }
    else if(k=='/'){
        if(j==0){
            printf("error");
        }
        else{
            printf("%d",i/j);
        }
    }
    else if(k=='*'){
        printf("%d",i*j);
    }
    else{
        printf("error");
    }
}