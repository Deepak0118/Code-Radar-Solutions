#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int j =1 ;j<=n;j++){
        for(int k =j;k<n;k++){
            if(k+1<n+1){
            if(arr[k] > arr[k+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
        }
        }
    }
    if(count ==0){
        printf("%d",arr[n-2]);
    }
    else{
        printf("%d",-1);
    }
    


}