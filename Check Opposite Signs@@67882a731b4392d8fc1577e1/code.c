#include <stdio.h>

int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>0 && y<0 )
    printf("True");
    else if(x<0 && y>0)
    printf("True");
    else
    printf("False");
}