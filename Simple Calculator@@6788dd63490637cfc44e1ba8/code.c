#include <stdio.h>
int main(){
    int i,j;
    char k;
    scanf("%d %d",&i,&j);
    scanf("%c",&k);
    if(k=='+'){
        printf("%d",i+j);
    }
    else if(k=='-'){
        printf("%d",i-j);
    }
    else if(k=='/'){
        printf("%d",i/j);
    }
    else if(k=='*'){
        printf("%d",i*j);
    }
    else{
        printf("error");
    }
}