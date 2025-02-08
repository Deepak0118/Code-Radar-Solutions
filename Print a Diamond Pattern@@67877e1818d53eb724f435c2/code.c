#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
        if((i==1 || i==2*n-1) && (j==n) ){
            printf("*");
        }
        else if(j>=n+1-i && j<=n+i-1){
            printf("*");
            
        }
        }
        printf("\n");
    }
}