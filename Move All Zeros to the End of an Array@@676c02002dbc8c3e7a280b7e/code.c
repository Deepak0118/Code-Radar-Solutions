#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int o = 0 ;o<n ; o++){
    for(int j =0;j<n-1;j++){
        if(arr[j] ==0){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp ; 
        }
    }
    }
    
    for(int y=0;y<n;y++){
        printf("%d ",arr[y]);
    }
}