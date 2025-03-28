#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        int sum =0;
        int a = arr[i];
        while(a){
            int last = a%10;
            sum = sum +last;
            a = a/10;
        }
        arr[i] = sum;
    }
    for(int h =0;h<n;h++){
        printf("%d ",arr[h]);
    }
}