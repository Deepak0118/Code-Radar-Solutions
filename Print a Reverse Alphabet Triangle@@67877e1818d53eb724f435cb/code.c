#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            if(j<=n){
                printf("%c ",65+j-1);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}