#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
        
        if(j>=n+1-i && j<=n+i-1){
            if(j>0){
            printf("*");
            }
            
        }
        else{
            printf(" ");
        }
        }
        printf("\n");
    }
}