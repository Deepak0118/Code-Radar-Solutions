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
        printf("%f",i/j);
    }
    else if(k=='*'){
        printf("%d",i*j);
    }
    else{
        printf("error");
    }
}