#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int majority = n/2;
    int count =0;
    for(int k =0;k<n;k++){
        for(int g =k;g<n;g++){
            if(arr[k] ==  arr[g]){
                count++;
            }
        }
        if(count>majority){
            printf("%d",arr[k]);
            break;
        }
        if(count<majority){
            count =0;
        }
        break;
    }
}