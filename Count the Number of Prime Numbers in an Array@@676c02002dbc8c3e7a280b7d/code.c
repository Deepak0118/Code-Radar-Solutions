#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int prime =0;
    int count =0;
    for(int h =0;h<n;h++){
        int a = arr[h];
        if(a == 2){
            prime++;
            continue;
        }
        for(int j =2 ;j<a;j++){
            if(a%j==0){
                count++;
            }
        }
        if(count == 0){
            prime++;
        }
        count = 0;
    }
    printf("%d",prime);
}