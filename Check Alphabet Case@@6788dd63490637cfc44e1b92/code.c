#include <stdio.h>

int main(){
    char a;
    scanf("%d",&a);
    if(isupper(a)){
        printf("Lowercase");
    }
    else if(islower(a)){
        printf("Uppercase");
    }
}