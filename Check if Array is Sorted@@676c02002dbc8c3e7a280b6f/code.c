#include<stdio.h>
void sort(int arr[], int n){
    if(n==1){
        return  ;
    }
    for(int j =0;j<n;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
             arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
    return sort(arr, n-1);
}
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ar[n];
    for(int k =0;k<n;k++){
        ar[k] = arr[k];
    }
    sort(arr, n);
    // int count = 0;
    // for(int  p=0;p<n;p++){
    //     if(arr[p] == ar[p])
    //     count++;
    // }
    // if(count == n){
    //     printf("Sorted");
    // }
    // else{
    //     printf("Not Sorted");
    // }
    for(int j =0;j<n;j++){
        printf("%d\n",arr[j]);
    }
}