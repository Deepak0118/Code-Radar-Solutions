#include <stdio.h>

int main(){
    int i,,j,k;
    scanf("%d %d %d",&i,&j,&k);
    if(i==j && j==k){
        printf("Equilateral");
    }
    else if((i==j && j!=k) || (i!=j && j==k) || (i==k && k!=j) ){
        printf("Isoceles");
    }
    else if(a!=b || a!=c || b!=c){
        printf("Scalene");
    }
}