#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));

    }
    return 0;
}
isprime(int a){
    int p = 0;
    if(a==1){
        return 0;
    }
    else if(i==2){
        return 1;
    }
    for(i=2;i<a;i++){
        if(a%i==0){
            p = p+1;
            return 0 ;
            
        }
        
    }
    if(p>0){
        return 1;
    }

    
}