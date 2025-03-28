#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j =0;j<n;j++){
        for(int k =0;k<n;k++){
            if(k+1<n){
            if(arr[k] > arr[k+1]){
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
             }
        }
        }
    }
    int min = arr[0];
    for(int d  =0;d<n;d++){
        if(arr[d]>0){
            arr[d] = min;
            break;
        }
    }
    for(int h =1;h<n;h++){
        if(min>0){
        if(arr[h] - min == 1){
            min = arr[h];
        }
        else if(arr[h] - min !=1){
            printf("%d",min+1);
            break;
        }
        }
    }

}