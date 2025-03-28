#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(int j =0;j<n;j++){
        for(int h =0;h<n;h++){
            if(h+1 < n){
            if(arr[h] > arr[h+1]){
                int temp = arr[h];
                arr[h]= arr[h+1];
                arr[h+1] = temp;
            }
            }
        }
    }
    int count =0;
    for(int k =0;k<n;k++){
        int a =arr[k];
        for(int p = k+1;p<n;p++){
            if(arr[p] - a == 1){
                count ++;
            }
        }
    
}
printf("%d",count);
}