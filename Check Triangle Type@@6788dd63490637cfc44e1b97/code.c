#include <stdio.h>

int main(){
    int i,,j,k;
    scanf("%d %d %d",&i,&j,&k);
    if(i==j==k){
        printf("Equilateral");
    }
    else if(i==j!=k || i!=j==k || i==k!=j ){
        printf("Isoceles");
    }
    else if(a!=b || a!=c || b!=c){
        printf("Scalene");
    }
}