#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&i);
    for(i=1;i<=n;i++)[
        for(j=1;j<=n;j++){
            if(j>=i){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    ]
}