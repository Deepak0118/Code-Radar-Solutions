#include <stdio.h>
int isPrime(int a){
    int p = 0,i;
    if(a==1){
        return 0;
    }
    else if(a==2){
        return 1
    }
    for (i=2;i<a;i++){
        if(a%i==0){
            p=p+1;
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    int a;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
    return 0
}
