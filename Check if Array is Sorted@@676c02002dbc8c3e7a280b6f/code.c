#include<stdio.h>
sort(ar[], int n){
    if(n==1){
        return  ;
    }
    for(int j =0;j<n;j++){
        if(ar[j]>ar[j+1]){
            int temp = ar[j+1];
             ar[j+1] = ar[j];
            ar[j] = temp;
        }
    }
    return sort(ar, n-1);
}
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr, n);
    for(int  p=0;p<n;p++){
        if(arr[p] == ar[p])
        printf("Sorted");
        else{
            printf("Not Sorted");
        }
    }
}