#include<stdio.h>
void sort(int ar[], int n){
    if(n==1){
        return  ;
    }
    for(int j =0;j<n;j++){
        if(ar[j]>ar[j+1]){
            int temp = ar[j];
             ar[j] = ar[j+1];
            ar[j+1] = temp;
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
    int ar[n];
    for(int k =0;k<n;k++){
        ar[k] = arr[k];
    }
    sort(ar, n);
    int count = 0;
    for(int  p=0;p<n;p++){
        if(arr[p] == ar[p])
        count++;
    }
    
    if(count == n){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    
}