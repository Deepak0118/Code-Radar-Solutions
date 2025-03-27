#include<stdio.h>
int  main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int h =0;h<n;h++){
        scanf("%d",&arr[h]);
    }
    int num =0;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = arr[j];
                num =0;
            }
        }
    }
    int count =0;
    for(int y =1;y<n;y++){
        if(arr[0] == arr[y]){
            count ++;
        }
    }
    if(count == n-1){
        printf("%d",-1);
    }
    if(num ==0){
        printf("%d",arr[n-2]);
    }
    if(n==1){
        printf("%d",-1);
    }
}