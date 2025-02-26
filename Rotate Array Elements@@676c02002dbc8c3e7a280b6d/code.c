#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int j[a];
    for(int i=0;i<a;i++){
        scanf("%d",&j[i]);
    }
    int k;
    scanf("%d",&k);
    int p = a/2;
    int p[a];
    for(int n=0;n<p;n++){
    
        p[n+k] = j[n];
        

    }
    
    for(int l=0;l<a;l++){
        printf("%d",p[l]);
    }
    
}