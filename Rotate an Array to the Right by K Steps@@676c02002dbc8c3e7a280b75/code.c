#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int k =0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    int shift;
    scanf("%d",&shift);
    int a[n];
    for(int h =0;h<n;h++){
        if(h+shift<n){
        a[h+shift] = arr[h];
        }
        else{
            int move = n - 1 - h;
            int p = shift - move;
            a[p-1] = arr[h];
        }
    }
    for(int d =0;d<n;d++){
        printf("%d ",a[d]);
    }
}