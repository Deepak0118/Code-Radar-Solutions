#include <stdio.h>
int main(){
    int n,i,j;
    for (i=n;i>=1;i--){
        for (j=1;j<=n;j++){
            if(j<=i){
                printf("*");
            }

        }
        printf("\n");
    }
}