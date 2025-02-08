#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=i){
                if(i%2==0){
                if((i%2==0)&&(j%2==0)){
                    printf("%d ",1);
                }
                else{
                    printf("%d ",0);
                }
                }
                else{
                    if(j%2==0){
                        printf("%d ",0);
                    }
                    else{
                        printf(" %d",1);
                    }
                }

            }
        }
        printf("\n");
    }
}